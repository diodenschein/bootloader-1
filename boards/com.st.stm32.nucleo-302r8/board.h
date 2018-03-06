// bootloader configuration file
#pragma once

#define BOARD_CONFIG_HW_NAME "com.st.stm32.nucleo-302r8"
#define BOARD_CONFIG_HW_MAJOR_VER 1
#define BOARD_CONFIG_HW_MINOR_VER 0

extern int _otp;
extern int _otp_end;

#define BOARD_CONFIG_HW_INFO_STRUCTURE { \
.hw_name = BOARD_CONFIG_HW_NAME, \
.hw_major_version = BOARD_CONFIG_HW_MAJOR_VER, \
.hw_minor_version = BOARD_CONFIG_HW_MINOR_VER, \
.otp = &_otp, \
.otp_end = &_otp_end, \
}

// #define BOARD_CONFIG_I2C_BOOT_TRIGGER

#define BOARD_CONFIG_CAN_RX_GPIO_PORT GPIOA
#define BOARD_CONFIG_CAN_RX_GPIO_PORT_RCC RCC_GPIOA
#define BOARD_CONFIG_CAN_RX_GPIO_PIN GPIO11
#define BOARD_CONFIG_CAN_RX_GPIO_ALTERNATE_FUNCTION GPIO_AF9
#define BOARD_CONFIG_CAN_TX_GPIO_PORT GPIOA
#define BOARD_CONFIG_CAN_TX_GPIO_PORT_RCC RCC_GPIOA
#define BOARD_CONFIG_CAN_TX_GPIO_PIN GPIO12
#define BOARD_CONFIG_CAN_TX_GPIO_ALTERNATE_FUNCTION GPIO_AF9

#define BOARD_CONFIG_MCU_STM32F3
#define BOARD_CONFIG_OSC_HSE_8MHZ
