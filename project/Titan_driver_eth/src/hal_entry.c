/*
 * Copyright (c) 2006-2024, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author        Notes
 * 2024-03-11     kurisaw       first version
 */

#include <rtthread.h>
#include "hal_data.h"
#include <rtdevice.h>
#include <board.h>
#include "ec_master.h"

#define LED_PIN_0    BSP_IO_PORT_00_PIN_12 /* Onboard LED pins */

ec_master_t g_ec_master;
uint8_t cherryecat_eepromdata[2048];

static ec_pdo_entry_info_t dio_1600[] = {
    { 0x6000, 0x00, 0x20 },
};

static ec_pdo_entry_info_t dio_1a00[] = {
    { 0x7010, 0x00, 0x20 },
};

static ec_pdo_info_t dio_rxpdos[] = {
    { 0x1600, 1, &dio_1600[0] },
};

static ec_pdo_info_t dio_txpdos[] = {
    { 0x1a00, 1, &dio_1a00[0] },
};

static ec_sync_info_t dio_syncs[] = {
    { 2, EC_DIR_OUTPUT, 1, dio_rxpdos },
    { 3, EC_DIR_INPUT, 1, dio_txpdos },
};

int ec_start(int argc, const char **argv)
{
    static ec_slave_config_t slave_dio_config;

    if (g_ec_master.slave_count == 0)
    {
        printf("No slave found, please check the connection\r\n");
        return -1;
    }

    slave_dio_config.dc_assign_activate = 0x300;

    slave_dio_config.dc_sync[0].cycle_time = atoi(argv[1]) * 1000;
    slave_dio_config.dc_sync[0].shift_time = 1000000;
    slave_dio_config.dc_sync[1].cycle_time = 0;
    slave_dio_config.dc_sync[1].shift_time = 0;
    slave_dio_config.sync = dio_syncs;
    slave_dio_config.sync_count = sizeof(dio_syncs) / sizeof(ec_sync_info_t);

    for (uint32_t i = 0; i < g_ec_master.slave_count; i++)
    {
        if (g_ec_master.slaves[i].sii.vendor_id != 0x0048504D)
        {
            EC_LOG_ERR("Unsupported slave found: vendor_id=0x%08x\n", g_ec_master.slaves[i].sii.vendor_id);
            return -1;
        }

        g_ec_master.slaves[i].config = &slave_dio_config;
    }

    ec_master_start(&g_ec_master, atoi(argv[1]));

    return 0;
}
MSH_CMD_EXPORT(ec_start, ethercat start);

int ec_stop(int argc, const char **argv)
{
    ec_master_stop(&g_ec_master);
    return 0;
}
MSH_CMD_EXPORT(ec_stop, ethercat stop);

void hal_entry(void)
{
    rt_kprintf("\nHello RT-Thread!\n");
    rt_kprintf("==================================================\n");
    rt_kprintf("This example project is an ethernet routine!\n");
    rt_kprintf("==================================================\n");

    ec_master_cmd_init(&g_ec_master);
    ec_master_init(&g_ec_master, 0);

    while (1)
    {
        rt_pin_write(LED_PIN_0, PIN_HIGH);
        rt_thread_mdelay(1000);
        rt_pin_write(LED_PIN_0, PIN_LOW);
        rt_thread_mdelay(1000);
    }
}
