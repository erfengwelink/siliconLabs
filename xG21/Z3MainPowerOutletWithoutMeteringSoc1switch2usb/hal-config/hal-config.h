#ifndef HAL_CONFIG_H
#define HAL_CONFIG_H

#include "em_device.h"
#include "hal-config-types.h"

// This file is auto-generated by Hardware Configurator in Simplicity Studio.
// Any content between $[ and ]$ will be replaced whenever the file is regenerated.
// Content outside these regions will be preserved.

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[ANTDIV]
// [ANTDIV]$

// $[BTL_BUTTON]
// [BTL_BUTTON]$

// $[BUTTON]
#define BSP_BUTTON_PRESENT                    (1)

#define BSP_BUTTON0_PIN                       (2U)
#define BSP_BUTTON0_PORT                      (gpioPortD)

#define BSP_BUTTON_COUNT                      (1U)
#define BSP_BUTTON_INIT                       { { BSP_BUTTON0_PORT, BSP_BUTTON0_PIN } }
#define BSP_BUTTON_GPIO_DOUT                  (HAL_GPIO_DOUT_LOW)
#define BSP_BUTTON_GPIO_MODE                  (HAL_GPIO_MODE_INPUT)
#define HAL_BUTTON_COUNT                      (1U)
#define HAL_BUTTON_ENABLE                     { 0 }
// [BUTTON]$

// $[CMU]
#define HAL_CLK_HFCLK_SOURCE                  (HAL_CLK_HFCLK_SOURCE_HFXO)
#define HAL_CLK_EM23CLK_SOURCE                (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define HAL_CLK_EM4CLK_SOURCE                 (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define HAL_CLK_RTCCCLK_SOURCE                (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define HAL_CLK_WDOGCLK_SOURCE                (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define BSP_CLK_HFXO_PRESENT                  (1)
#define BSP_CLK_HFXO_FREQ                     (38400000UL)
#define BSP_CLK_HFXO_INIT                      CMU_HFXOINIT_DEFAULT
#define BSP_CLK_HFXO_CTUNE                    (129)
#define BSP_CLK_LFXO_PRESENT                  (1)
#define BSP_CLK_LFXO_INIT                      CMU_LFXOINIT_DEFAULT
#define BSP_CLK_LFXO_FREQ                     (32768U)
#define BSP_CLK_LFXO_CTUNE                    (79U)
// [CMU]$

// $[COEX]
// [COEX]$

// $[EMU]
// [EMU]$

// $[EXTFLASH]
// [EXTFLASH]$

// $[EZRADIOPRO]
// [EZRADIOPRO]$

// $[FEM]
// [FEM]$

// $[GPIO]
#define PORTIO_GPIO_SWV_PIN                   (3U)
#define PORTIO_GPIO_SWV_PORT                  (gpioPortA)

#define BSP_TRACE_SWO_PIN                     (3U)
#define BSP_TRACE_SWO_PORT                    (gpioPortA)

// [GPIO]$

// $[I2C0]
// [I2C0]$

// $[I2C1]
// [I2C1]$

// $[I2CSENSOR]
// [I2CSENSOR]$

// $[IADC0]
// [IADC0]$

// $[IOEXP]
// [IOEXP]$

// $[LED]
#define BSP_LED_PRESENT                       (1)

#define BSP_LED0_PIN                          (0U)
#define BSP_LED0_PORT                         (gpioPortB)

#define BSP_LED1_PIN                          (1U)
#define BSP_LED1_PORT                         (gpioPortB)

#define BSP_LED_COUNT                         (2U)
#define BSP_LED_INIT                          { { BSP_LED0_PORT, BSP_LED0_PIN }, { BSP_LED1_PORT, BSP_LED1_PIN } }
#define HAL_LED_COUNT                         (2U)
#define HAL_LED_ENABLE                        { 0, 1 }
#define BSP_LED_POLARITY                      (1)
// [LED]$

// $[LETIMER0]
// [LETIMER0]$

// $[LFXO]
// [LFXO]$

// $[MODEM]
// [MODEM]$

// $[PA]
#define HAL_PA_ENABLE                         (1)

#define HAL_PA_CURVE_HEADER                    "pa_curves_efr32.h"
#define HAL_PA_POWER                          (252U)
#define HAL_PA_RAMP                           (10UL)
#define BSP_PA_VOLTAGE                        (3300U)
#define HAL_PA_SELECTION                      (HAL_PA_SELECTION_2P4_HP)
// [PA]$

// $[PORTIO]
// [PORTIO]$

// $[PRS]
// [PRS]$

// $[PTI]
#define PORTIO_PTI_DFRAME_PIN                 (5U)
#define PORTIO_PTI_DFRAME_PORT                (gpioPortC)

#define PORTIO_PTI_DOUT_PIN                   (4U)
#define PORTIO_PTI_DOUT_PORT                  (gpioPortC)

#define HAL_PTI_ENABLE                        (1)

#define BSP_PTI_DFRAME_PIN                    (5U)
#define BSP_PTI_DFRAME_PORT                   (gpioPortC)

#define BSP_PTI_DOUT_PIN                      (4U)
#define BSP_PTI_DOUT_PORT                     (gpioPortC)

#define HAL_PTI_MODE                          (HAL_PTI_MODE_UART)
#define HAL_PTI_BAUD_RATE                     (1600000UL)
// [PTI]$

// $[SERIAL]
#define BSP_SERIAL_APP_PORT                   (HAL_SERIAL_PORT_USART0)
#define HAL_SERIAL_RXWAKE_ENABLE              (0)
#define HAL_SERIAL_IDLE_WAKE_ENABLE           (1)
#define HAL_SERIAL_USART0_ENABLE              (0)
#define HAL_SERIAL_USART1_ENABLE              (0)
#define HAL_SERIAL_USART2_ENABLE              (0)
#define BSP_SERIAL_APP_TX_PIN                 (5U)
#define BSP_SERIAL_APP_TX_PORT                (gpioPortA)

#define BSP_SERIAL_APP_RX_PIN                 (6U)
#define BSP_SERIAL_APP_RX_PORT                (gpioPortA)

#define BSP_SERIAL_APP_CTS_PIN                (4U)
#define BSP_SERIAL_APP_CTS_PORT               (gpioPortA)

#define BSP_SERIAL_APP_RTS_PIN                (1U)
#define BSP_SERIAL_APP_RTS_PORT               (gpioPortC)

#define HAL_SERIAL_APP_BAUD_RATE              (115200UL)
#define HAL_SERIAL_APP_FLOW_CONTROL           (HAL_USART_FLOW_CONTROL_HWUART)
#define HAL_SERIAL_APP_RXSTOP                 (16UL)
#define HAL_SERIAL_APP_RXSTART                (16UL)
#define HAL_SERIAL_APP_TX_QUEUE_SIZE          (128UL)
#define HAL_SERIAL_APP_RX_QUEUE_SIZE          (128UL)
// [SERIAL]$

// $[SPIDISPLAY]
// [SPIDISPLAY]$

// $[SPINCP]
// [SPINCP]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[TIMER2]
// [TIMER2]$

// $[TIMER3]
// [TIMER3]$

// $[UARTNCP]
// [UARTNCP]$

// $[USART0]
#define PORTIO_USART0_CTS_PIN                 (4U)
#define PORTIO_USART0_CTS_PORT                (gpioPortA)

#define PORTIO_USART0_RTS_PIN                 (1U)
#define PORTIO_USART0_RTS_PORT                (gpioPortC)

#define PORTIO_USART0_RX_PIN                  (6U)
#define PORTIO_USART0_RX_PORT                 (gpioPortA)

#define PORTIO_USART0_TX_PIN                  (5U)
#define PORTIO_USART0_TX_PORT                 (gpioPortA)

#define HAL_USART0_ENABLE                     (1)

#define BSP_USART0_TX_PIN                     (5U)
#define BSP_USART0_TX_PORT                    (gpioPortA)

#define BSP_USART0_RX_PIN                     (6U)
#define BSP_USART0_RX_PORT                    (gpioPortA)

#define BSP_USART0_CTS_PIN                    (4U)
#define BSP_USART0_CTS_PORT                   (gpioPortA)

#define BSP_USART0_RTS_PIN                    (1U)
#define BSP_USART0_RTS_PORT                   (gpioPortC)

#define HAL_USART0_BAUD_RATE                  (115200UL)
#define HAL_USART0_FLOW_CONTROL               (HAL_USART_FLOW_CONTROL_HWUART)
#define HAL_USART0_RXSTOP                     (16UL)
#define HAL_USART0_RXSTART                    (16UL)
#define HAL_USART0_TX_QUEUE_SIZE              (128UL)
#define HAL_USART0_RX_QUEUE_SIZE              (128UL)
// [USART0]$

// $[USART1]
// [USART1]$

// $[USART2]
// [USART2]$

// $[VCOM]
#define HAL_VCOM_ENABLE                       (1)

#define BSP_VCOM_ENABLE_PIN                   (4U)
#define BSP_VCOM_ENABLE_PORT                  (gpioPortD)

// [VCOM]$

// $[VUART]
// [VUART]$

// $[WDOG]
#define HAL_WDOG_ENABLE                       (1)

// [WDOG]$

#if defined(_SILICON_LABS_MODULE)
#include "sl_module.h"
#endif

#endif /* HAL_CONFIG_H */

