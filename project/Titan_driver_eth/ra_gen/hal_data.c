/* generated HAL source file - do not edit */
#include "hal_data.h"

gpt_instance_ctrl_t g_timer0_ctrl;
#if 0
const gpt_extended_pwm_cfg_t g_timer0_pwm_extend =
{
    .trough_ipl          = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_COUNTER_UNDERFLOW)
    .trough_irq          = VECTOR_NUMBER_GPT0_COUNTER_UNDERFLOW,
#else
    .trough_irq          = FSP_INVALID_VECTOR,
#endif
    .poeg_link           = GPT_POEG_LINK_POEG0,
    .output_disable      = (gpt_output_disable_t) ( GPT_OUTPUT_DISABLE_NONE),
    .adc_trigger         = (gpt_adc_trigger_t) ( GPT_ADC_TRIGGER_NONE),
    .dead_time_count_up  = 0,
    .dead_time_count_down = 0,
    .adc_a_compare_match = 0,
    .adc_b_compare_match = 0,
    .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
    .interrupt_skip_count  = GPT_INTERRUPT_SKIP_COUNT_0,
    .interrupt_skip_adc    = GPT_INTERRUPT_SKIP_ADC_NONE,
    .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
    .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
};
#endif
const gpt_extended_cfg_t g_timer0_extend =
{
    .gtioca = { .output_enabled = false,
                .stop_level     = GPT_PIN_LEVEL_LOW
              },
    .gtiocb = { .output_enabled = false,
                .stop_level     = GPT_PIN_LEVEL_LOW
              },
    .start_source        = (gpt_source_t) ( GPT_SOURCE_NONE),
    .stop_source         = (gpt_source_t) ( GPT_SOURCE_NONE),
    .clear_source        = (gpt_source_t) ( GPT_SOURCE_NONE),
    .count_up_source     = (gpt_source_t) ( GPT_SOURCE_NONE),
    .count_down_source   = (gpt_source_t) ( GPT_SOURCE_NONE),
    .capture_a_source    = (gpt_source_t) ( GPT_SOURCE_NONE),
    .capture_b_source    = (gpt_source_t) ( GPT_SOURCE_NONE),
    .capture_a_ipl       = (BSP_IRQ_DISABLED),
    .capture_b_ipl       = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_CAPTURE_COMPARE_A)
    .capture_a_irq       = VECTOR_NUMBER_GPT0_CAPTURE_COMPARE_A,
#else
    .capture_a_irq       = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT0_CAPTURE_COMPARE_B)
    .capture_b_irq       = VECTOR_NUMBER_GPT0_CAPTURE_COMPARE_B,
#else
    .capture_b_irq       = FSP_INVALID_VECTOR,
#endif
     .compare_match_value = { /* CMP_A */ (uint32_t)0x0, /* CMP_B */ (uint32_t)0x0}, .compare_match_status = (0U << 1U) | 0U,
    .capture_filter_gtioca       = GPT_CAPTURE_FILTER_NONE,
    .capture_filter_gtiocb       = GPT_CAPTURE_FILTER_NONE,
#if 0
    .p_pwm_cfg                   = &g_timer0_pwm_extend,
#else
    .p_pwm_cfg                   = NULL,
#endif
#if 0
    .gtior_setting.gtior_b.gtioa  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.oadflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.oahld  = 0U,
    .gtior_setting.gtior_b.oae    = (uint32_t) false,
    .gtior_setting.gtior_b.oadf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfaen  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsa  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
    .gtior_setting.gtior_b.gtiob  = (0U << 4U) | (0U << 2U) | (0U << 0U),
    .gtior_setting.gtior_b.obdflt = (uint32_t) GPT_PIN_LEVEL_LOW,
    .gtior_setting.gtior_b.obhld  = 0U,
    .gtior_setting.gtior_b.obe    = (uint32_t) false,
    .gtior_setting.gtior_b.obdf   = (uint32_t) GPT_GTIOC_DISABLE_PROHIBITED,
    .gtior_setting.gtior_b.nfben  = ((uint32_t) GPT_CAPTURE_FILTER_NONE & 1U),
    .gtior_setting.gtior_b.nfcsb  = ((uint32_t) GPT_CAPTURE_FILTER_NONE >> 1U),
#else
    .gtior_setting.gtior = 0U,
#endif

    .gtioca_polarity = GPT_GTIOC_POLARITY_NORMAL,
    .gtiocb_polarity = GPT_GTIOC_POLARITY_NORMAL,
};

const timer_cfg_t g_timer0_cfg =
{
    .mode                = TIMER_MODE_PERIODIC,
    /* Actual period: 0.00021845333333333334 seconds. Actual duty: 50%. */ .period_counts = (uint32_t) 0x10000, .duty_cycle_counts = 0x8000, .source_div = (timer_source_div_t)0,
    .channel             = 0,
    .p_callback          = timer0_esc_callback,
    /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
    .p_context           = (void *) &NULL,
#endif
    .p_extend            = &g_timer0_extend,
    .cycle_end_ipl       = (10),
#if defined(VECTOR_NUMBER_GPT0_COUNTER_OVERFLOW)
    .cycle_end_irq       = VECTOR_NUMBER_GPT0_COUNTER_OVERFLOW,
#else
    .cycle_end_irq       = FSP_INVALID_VECTOR,
#endif
};
/* Instance structure to use this module. */
const timer_instance_t g_timer0 =
{
    .p_ctrl        = &g_timer0_ctrl,
    .p_cfg         = &g_timer0_cfg,
    .p_api         = &g_timer_on_gpt
};
sci_b_uart_instance_ctrl_t     g_uart8_ctrl;

            sci_b_baud_setting_t               g_uart8_baud_setting =
            {
                /* Baud rate calculated with 0.160% error. */ .baudrate_bits_b.abcse = 0, .baudrate_bits_b.abcs = 0, .baudrate_bits_b.bgdm = 1, .baudrate_bits_b.cks = 0, .baudrate_bits_b.brr = 64, .baudrate_bits_b.mddr = (uint8_t) 256, .baudrate_bits_b.brme = false
            };

            /** UART extended configuration for UARTonSCI HAL driver */
            const sci_b_uart_extended_cfg_t g_uart8_cfg_extend =
            {
                .clock                = SCI_B_UART_CLOCK_INT,
                .rx_edge_start          = SCI_B_UART_START_BIT_FALLING_EDGE,
                .noise_cancel         = SCI_B_UART_NOISE_CANCELLATION_DISABLE,
                .rx_fifo_trigger        = SCI_B_UART_RX_FIFO_TRIGGER_MAX,
                .p_baud_setting         = &g_uart8_baud_setting,
                .flow_control           = SCI_B_UART_FLOW_CONTROL_RTS,
                #if 0xFF != 0xFF
                .flow_control_pin       = BSP_IO_PORT_FF_PIN_0xFF,
                #else
                .flow_control_pin       = (bsp_io_port_pin_t) UINT16_MAX,
                #endif
                .rs485_setting          = {
                    .enable = SCI_B_UART_RS485_DISABLE,
                    .polarity = SCI_B_UART_RS485_DE_POLARITY_HIGH,
                    .assertion_time = 1,
                    .negation_time = 1,
                }
            };

            /** UART interface configuration */
            const uart_cfg_t g_uart8_cfg =
            {
                .channel             = 8,
                .data_bits           = UART_DATA_BITS_8,
                .parity              = UART_PARITY_OFF,
                .stop_bits           = UART_STOP_BITS_1,
                .p_callback          = user_uart8_callback,
                .p_context           = NULL,
                .p_extend            = &g_uart8_cfg_extend,
#define RA_NOT_DEFINED (1)
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
                .p_transfer_tx       = NULL,
#else
                .p_transfer_tx       = &RA_NOT_DEFINED,
#endif
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
                .p_transfer_rx       = NULL,
#else
                .p_transfer_rx       = &RA_NOT_DEFINED,
#endif
#undef RA_NOT_DEFINED
                .rxi_ipl             = (12),
                .txi_ipl             = (12),
                .tei_ipl             = (12),
                .eri_ipl             = (12),
#if defined(VECTOR_NUMBER_SCI8_RXI)
                .rxi_irq             = VECTOR_NUMBER_SCI8_RXI,
#else
                .rxi_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI8_TXI)
                .txi_irq             = VECTOR_NUMBER_SCI8_TXI,
#else
                .txi_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI8_TEI)
                .tei_irq             = VECTOR_NUMBER_SCI8_TEI,
#else
                .tei_irq             = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_SCI8_ERI)
                .eri_irq             = VECTOR_NUMBER_SCI8_ERI,
#else
                .eri_irq             = FSP_INVALID_VECTOR,
#endif
            };

/* Instance structure to use this module. */
const uart_instance_t g_uart8 =
{
    .p_ctrl        = &g_uart8_ctrl,
    .p_cfg         = &g_uart8_cfg,
    .p_api         = &g_uart_on_sci_b
};
rmac_instance_ctrl_t g_ether0_ctrl BSP_PLACE_IN_SECTION(".ram_nocache");
            static rmac_buffer_node_t g_ether0_buffer_node_list[24] BSP_PLACE_IN_SECTION(".ram_nocache");

            uint8_t g_ether0_mac_address[6] = { 0x00,0x11,0x22,0x33,0x44,0x55 };

            layer3_switch_ts_reception_process_descriptor_t g_ether0_ts_descriptor_array0[8] BSP_PLACE_IN_SECTION(".ram_nocache");rmac_queue_info_t g_ether0_ts_queue[1] =
 {
{ .queue_cfg={.array_length          = 8,
.p_descriptor_array    = NULL,
.p_ts_descriptor_array = g_ether0_ts_descriptor_array0,
.ports                 = (1 << 0),
.type                  = LAYER3_SWITCH_QUEUE_TYPE_TX,
.write_back_mode       = LAYER3_SWITCH_WRITE_BACK_MODE_FULL,
.descriptor_format     = LAYER3_SWITCH_DISCRIPTOR_FORMTAT_TX_TIMESTAMP,
.rx_timestamp_storage  = LAYER3_SWITCH_RX_TIMESTAMP_STORAGE_DISABLE,
}},
};
            layer3_switch_descriptor_t           g_ether0_tx_descriptor_array0[3+1] BSP_PLACE_IN_SECTION(".ram_nocache");layer3_switch_descriptor_t           g_ether0_tx_descriptor_array1[3+1] BSP_PLACE_IN_SECTION(".ram_nocache");rmac_queue_info_t g_ether0_tx_queue_list[2] =
 {
{ .queue_cfg={.array_length       = 3+1,
.p_descriptor_array = g_ether0_tx_descriptor_array0,
.p_ts_descriptor_array = NULL,
.ports              = (1 << 0 ),
.type               = LAYER3_SWITCH_QUEUE_TYPE_TX,
.write_back_mode    = LAYER3_SWITCH_WRITE_BACK_MODE_FULL,
.descriptor_format  = LAYER3_SWITCH_DISCRIPTOR_FORMTAT_EXTENDED,
.rx_timestamp_storage = LAYER3_SWITCH_RX_TIMESTAMP_STORAGE_DISABLE,
}},
{ .queue_cfg={.array_length       = 3+1,
.p_descriptor_array = g_ether0_tx_descriptor_array1,
.p_ts_descriptor_array = NULL,
.ports              = (1 << 0 ),
.type               = LAYER3_SWITCH_QUEUE_TYPE_TX,
.write_back_mode    = LAYER3_SWITCH_WRITE_BACK_MODE_FULL,
.descriptor_format  = LAYER3_SWITCH_DISCRIPTOR_FORMTAT_EXTENDED,
.rx_timestamp_storage = LAYER3_SWITCH_RX_TIMESTAMP_STORAGE_DISABLE,
}},
};
            layer3_switch_descriptor_t           g_ether0_rx_descriptor_array0[3+1] BSP_PLACE_IN_SECTION(".ram_nocache");layer3_switch_descriptor_t           g_ether0_rx_descriptor_array1[3+1] BSP_PLACE_IN_SECTION(".ram_nocache");rmac_queue_info_t g_ether0_rx_queue_list[2] =
 {
{ .queue_cfg={.array_length       = 3+1,
.p_descriptor_array = g_ether0_rx_descriptor_array0,
.p_ts_descriptor_array = NULL,
.ports              = (1 << 0),
.type               = LAYER3_SWITCH_QUEUE_TYPE_RX,
.write_back_mode    = LAYER3_SWITCH_WRITE_BACK_MODE_FULL,
.descriptor_format  = LAYER3_SWITCH_DISCRIPTOR_FORMTAT_EXTENDED,
#if LAYER3_SWITCH_CFG_GPTP_ENABLE
.rx_timestamp_storage = LAYER3_SWITCH_RX_TIMESTAMP_STORAGE_ENABLE,
#else
.rx_timestamp_storage = LAYER3_SWITCH_RX_TIMESTAMP_STORAGE_DISABLE,
#endif
}},
{ .queue_cfg={.array_length       = 3+1,
.p_descriptor_array = g_ether0_rx_descriptor_array1,
.p_ts_descriptor_array = NULL,
.ports              = (1 << 0),
.type               = LAYER3_SWITCH_QUEUE_TYPE_RX,
.write_back_mode    = LAYER3_SWITCH_WRITE_BACK_MODE_FULL,
.descriptor_format  = LAYER3_SWITCH_DISCRIPTOR_FORMTAT_EXTENDED,
#if LAYER3_SWITCH_CFG_GPTP_ENABLE
.rx_timestamp_storage = LAYER3_SWITCH_RX_TIMESTAMP_STORAGE_ENABLE,
#else
.rx_timestamp_storage = LAYER3_SWITCH_RX_TIMESTAMP_STORAGE_DISABLE,
#endif
}},
};

            const rmac_extended_cfg_t g_ether0_extended_cfg_t =
            {
                .p_ether_switch      = &g_layer3_switch0,
                .tx_queue_num        = 2,
                .rx_queue_num        = 2,

                .p_ts_queue     = g_ether0_ts_queue,
                .p_tx_queue_list     = g_ether0_tx_queue_list,
                .p_rx_queue_list     = g_ether0_rx_queue_list,
#if defined(VECTOR_NUMBER_ETHER_RMPI0)
                .rmpi_irq                = VECTOR_NUMBER_ETHER_RMPI0,
#else
                .rmpi_irq                = FSP_INVALID_VECTOR,
#endif
                .rmpi_ipl                = (BSP_IRQ_DISABLED),
                .p_buffer_node_list      = g_ether0_buffer_node_list,
                .buffer_node_num         = 24,

            };
            uint8_t g_ether0_ether_buffer0[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer1[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer2[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer3[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer4[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer5[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer6[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer7[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer8[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer9[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer10[1536] BSP_PLACE_IN_SECTION(".ram_nocache");
uint8_t g_ether0_ether_buffer11[1536] BSP_PLACE_IN_SECTION(".ram_nocache");

            uint8_t *pp_g_ether0_ether_buffers[12] = {
(uint8_t *) &g_ether0_ether_buffer0[0],
(uint8_t *) &g_ether0_ether_buffer1[0],
(uint8_t *) &g_ether0_ether_buffer2[0],
(uint8_t *) &g_ether0_ether_buffer3[0],
(uint8_t *) &g_ether0_ether_buffer4[0],
(uint8_t *) &g_ether0_ether_buffer5[0],
(uint8_t *) &g_ether0_ether_buffer6[0],
(uint8_t *) &g_ether0_ether_buffer7[0],
(uint8_t *) &g_ether0_ether_buffer8[0],
(uint8_t *) &g_ether0_ether_buffer9[0],
(uint8_t *) &g_ether0_ether_buffer10[0],
(uint8_t *) &g_ether0_ether_buffer11[0],
};
            const ether_cfg_t g_ether0_cfg =
            {
                .channel            = 0,
                .zerocopy           = ETHER_ZEROCOPY_ENABLE,
                .multicast          = ETHER_MULTICAST_DISABLE,
                .promiscuous        = ETHER_PROMISCUOUS_ENABLE,
                .flow_control       = ETHER_FLOW_CONTROL_DISABLE,
                .padding            = ETHER_PADDING_DISABLE,
                .padding_offset     = 0,
                .broadcast_filter   = 0,
                .p_mac_address      = g_ether0_mac_address,

                .num_tx_descriptors = 12,
                .num_rx_descriptors = 12,

                .pp_ether_buffers   = pp_g_ether0_ether_buffers,

                .ether_buffer_size  = 1536,

                .irq                = FSP_INVALID_VECTOR,

                .p_callback         = user_ether0_callback,
                .p_context          = NULL,
                .p_extend           = &g_ether0_extended_cfg_t,
            };

/* Instance structure to use this module. */
const ether_instance_t g_ether0 =
{
    .p_ctrl        = &g_ether0_ctrl,
    .p_cfg         = &g_ether0_cfg,
    .p_api         = &g_ether_on_rmac,
};
void g_hal_init(void) {
g_common_init();
}
