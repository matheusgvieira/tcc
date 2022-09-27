//
// Created by Matheus Gois Vieira on 24/09/22.
//

#ifndef COM_MODULE_MAIN_H
#define COM_MODULE_MAIN_H

#include <stdio.h>
#include <string.h>
#include "esp_log.h"
#include "driver/uart.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

#define BUTTON_RESET_WIFI   GPIO_NUM_32
#define LED_ON_OFF          GPIO_NUM_25
#define LED_WIFI            GPIO_NUM_26
#define UART_TXD_PIN        GPIO_NUM_17
#define UART_RXD_PIN        GPIO_NUM_16

#endif //COM_MODULE_MAIN_H
