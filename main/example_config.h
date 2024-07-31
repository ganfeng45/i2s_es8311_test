/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#pragma once

#include "sdkconfig.h"

/* Example configurations */
#define EXAMPLE_RECV_BUF_SIZE (2400)
#define EXAMPLE_SAMPLE_RATE (16000)
#define EXAMPLE_MCLK_MULTIPLE (384) // If not using 24-bit data width, 256 should be enough
#define EXAMPLE_MCLK_FREQ_HZ (EXAMPLE_SAMPLE_RATE * EXAMPLE_MCLK_MULTIPLE)
#define EXAMPLE_VOICE_VOLUME CONFIG_EXAMPLE_VOICE_VOLUME
#if CONFIG_EXAMPLE_MODE_ECHO
#define EXAMPLE_MIC_GAIN CONFIG_EXAMPLE_MIC_GAIN
#endif
// #define EDA 1
// #define box 1
#define fff 1
#if defined(EDA)

/* I2C port and GPIOs */
#define I2C_NUM (0)
#define I2C_SCL_IO (GPIO_NUM_1)
#define I2C_SDA_IO (GPIO_NUM_0)

/* I2S port and GPIOs */
#define I2S_NUM (0)
#define I2S_MCK_IO (GPIO_NUM_10)
#define I2S_BCK_IO (GPIO_NUM_8)
#define I2S_WS_IO (GPIO_NUM_12)

#define I2S_DO_IO (GPIO_NUM_11)
#define I2S_DI_IO (GPIO_NUM_7)
#define pa_io 13

#endif

#if defined(box)

/* I2C port and GPIOs */
#define I2C_NUM (0)
#define I2C_SCL_IO (GPIO_NUM_18)
#define I2C_SDA_IO (GPIO_NUM_8)

/* I2S port and GPIOs */
#define I2S_NUM (0)
#define I2S_MCK_IO (GPIO_NUM_2)
#define I2S_BCK_IO (GPIO_NUM_17)
#define I2S_WS_IO (GPIO_NUM_45)

#define I2S_DO_IO (GPIO_NUM_15)
#define I2S_DI_IO (GPIO_NUM_16)
#define pa_io 46
#endif


#if defined(fff)

/* I2C port and GPIOs */
#define I2C_NUM (0)
#define I2C_SCL_IO (GPIO_NUM_14)
#define I2C_SDA_IO (GPIO_NUM_13)

/* I2S port and GPIOs */
#define I2S_NUM (0)
#define I2S_MCK_IO (GPIO_NUM_8)
#define I2S_BCK_IO (GPIO_NUM_15)
#define I2S_WS_IO (GPIO_NUM_17)

#define I2S_DO_IO (GPIO_NUM_18)
#define I2S_DI_IO (GPIO_NUM_16)
#define pa_io 46
#endif
