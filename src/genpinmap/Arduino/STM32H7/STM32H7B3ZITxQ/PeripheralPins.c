/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 * Automatically generated from STM32H7B3ZITxQ.xml
 */
#include "Arduino.h"
#include "PeripheralPins.h"

/* =====
 * Note: Commented lines are alternative possibilities which are not used per default.
 *       If you change them, you will have to know what you do
 * =====
 */

//*** ADC ***

#ifdef HAL_ADC_MODULE_ENABLED
WEAK const PinMap PinMap_ADC[] = {
  {PA_0,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 16, 0)}, // ADC1_INP16
  {PA_1,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 16, 0)}, // ADC1_INN16
  {PA_1,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 17, 0)}, // ADC1_INP17
  {PA_2,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC1_INP14
  {PA_3,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC1_INP15
  {PA_4,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 18, 0)}, // ADC1_INP18
  {PA_5,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 18, 0)}, // ADC1_INN18
  {PA_5,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 19, 0)}, // ADC1_INP19
  {PA_6,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC1_INP3
  {PA_6,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC2_INP3
  {PA_7,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC1_INN3
  {PA_7,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC1_INP7
  {PA_7,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC2_INN3
  {PA_7,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC2_INP7
  {PB_0,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC1_INN5
  {PB_0,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC1_INP9
  {PB_0,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC2_INN5
  {PB_0,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC2_INP9
  {PB_1,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC1_INP5
  {PB_1,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC2_INP5
  {PC_0,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC1_INP10
  {PC_0,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC2_INP10
  {PC_1,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC1_INN10
  {PC_1,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC1_INP11
  {PC_1,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC2_INN10
  {PC_1,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC2_INP11
  {PC_2,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC2_INN1
  {PC_2,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC2_INP0
  {PC_3,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC2_INP1
  {PC_4,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC1_INP4
  {PC_4,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC2_INP4
  {PC_5,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC1_INN4
  {PC_5,  ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC1_INP8
  {PC_5,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC2_INN4
  {PC_5,  ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC2_INP8
  {PF_11, ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC1_INP2
  {PF_14, ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC2_INN2
  {PF_14, ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC2_INP6
  {NC,    NP,    0}
};
#endif

//*** DAC ***

#ifdef HAL_DAC_MODULE_ENABLED
WEAK const PinMap PinMap_DAC[] = {
  {PA_4,  DAC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // DAC1_OUT1
  {PA_5,  DAC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // DAC1_OUT2
  {PA_6,  DAC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // DAC2_OUT1
  {NC,    NP,    0}
};
#endif

//*** I2C ***

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SDA[] = {
  {PB_7,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PB_7,  I2C4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF6_I2C4)},
  {PB_9,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PB_9,  I2C4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF6_I2C4)},
  {PB_11, I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
  {PC_9,  I2C3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
  {PD_13, I2C4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C4)},
  {PF_15, I2C4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C4)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SCL[] = {
  {PA_8,  I2C3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)},
  {PB_6,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PB_6,  I2C4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF6_I2C4)},
  {PB_8,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PB_8,  I2C4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF6_I2C4)},
  {PB_10, I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
  {PD_12, I2C4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C4)},
  {PF_14, I2C4, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C4)},
  {NC,    NP,    0}
};
#endif

//*** PWM ***

#ifdef HAL_TIM_MODULE_ENABLED
WEAK const PinMap PinMap_PWM[] = {
  {PA_0,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
  {PA_0,  TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 1, 0)}, // TIM5_CH1
  {PA_1,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 2, 0)}, // TIM2_CH2
  {PA_1,  TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 2, 0)}, // TIM5_CH2
  {PA_1,  TIM15,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM15, 1, 1)}, // TIM15_CH1N
  {PA_2,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)}, // TIM2_CH3
  {PA_2,  TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 3, 0)}, // TIM5_CH3
  {PA_2,  TIM15,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM15, 1, 0)}, // TIM15_CH1
  {PA_3,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 4, 0)}, // TIM2_CH4
  {PA_3,  TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 4, 0)}, // TIM5_CH4
  {PA_3,  TIM15,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM15, 2, 0)}, // TIM15_CH2
  {PA_5,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
  {PA_5,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 1)}, // TIM8_CH1N
  {PA_6,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
  {PA_6,  TIM13,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM13, 1, 0)}, // TIM13_CH1
  {PA_7,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 1)}, // TIM1_CH1N
  {PA_7,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  {PA_7,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 1)}, // TIM8_CH1N
  {PA_7,  TIM14,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM14, 1, 0)}, // TIM14_CH1
  {PA_8,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 0)}, // TIM1_CH1
  {PA_9,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 0)}, // TIM1_CH2
  {PA_10, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 0)}, // TIM1_CH3
  {PA_11, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 4, 0)}, // TIM1_CH4
  {PA_15, TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
  {PB_0,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 1)}, // TIM1_CH2N
  {PB_0,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
  {PB_0,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 1)}, // TIM8_CH2N
  {PB_1,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 1)}, // TIM1_CH3N
  {PB_1,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
  {PB_1,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 1)}, // TIM8_CH3N
  {PB_3,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 2, 0)}, // TIM2_CH2
  {PB_4,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
  {PB_5,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  {PB_6,  TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 1, 0)}, // TIM4_CH1
  {PB_6,  TIM16,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 1)}, // TIM16_CH1N
  {PB_7,  TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 2, 0)}, // TIM4_CH2
  {PB_7,  TIM17,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM17, 1, 1)}, // TIM17_CH1N
  {PB_8,  TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 3, 0)}, // TIM4_CH3
  {PB_8,  TIM16,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 0)}, // TIM16_CH1
  {PB_9,  TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
  {PB_9,  TIM17,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM17, 1, 0)}, // TIM17_CH1
  {PB_10, TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)}, // TIM2_CH3
  {PB_11, TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 4, 0)}, // TIM2_CH4
  {PB_13, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 1)}, // TIM1_CH1N
  {PB_14, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 1)}, // TIM1_CH2N
  {PB_14, TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 1)}, // TIM8_CH2N
  {PB_14, TIM12,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM12, 1, 0)}, // TIM12_CH1
  {PB_15, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 1)}, // TIM1_CH3N
  {PB_15, TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 1)}, // TIM8_CH3N
  {PB_15, TIM12,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM12, 2, 0)}, // TIM12_CH2
  {PC_6,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
  {PC_6,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 0)}, // TIM8_CH1
  {PC_7,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  {PC_7,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 0)}, // TIM8_CH2
  {PC_8,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
  {PC_8,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 0)}, // TIM8_CH3
  {PC_9,  TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
  {PC_9,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 4, 0)}, // TIM8_CH4
  {PC_12, TIM15,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM15, 1, 0)}, // TIM15_CH1
  {PD_12, TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 1, 0)}, // TIM4_CH1
  {PD_13, TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 2, 0)}, // TIM4_CH2
  {PD_14, TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 3, 0)}, // TIM4_CH3
  {PD_15, TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
  {PE_4,  TIM15,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM15, 1, 1)}, // TIM15_CH1N
  {PE_5,  TIM15,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM15, 1, 0)}, // TIM15_CH1
  {PE_6,  TIM15,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM15, 2, 0)}, // TIM15_CH2
  {PE_8,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 1)}, // TIM1_CH1N
  {PE_9,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 0)}, // TIM1_CH1
  {PE_10, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 1)}, // TIM1_CH2N
  {PE_11, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 0)}, // TIM1_CH2
  {PE_12, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 1)}, // TIM1_CH3N
  {PE_13, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 0)}, // TIM1_CH3
  {PE_14, TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 4, 0)}, // TIM1_CH4
  {PF_6,  TIM16,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 0)}, // TIM16_CH1
  {PF_7,  TIM17,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM17, 1, 0)}, // TIM17_CH1
  {PF_8,  TIM13,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM13, 1, 0)}, // TIM13_CH1
  {PF_8,  TIM16,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 1)}, // TIM16_CH1N
  {PF_9,  TIM14,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM14, 1, 0)}, // TIM14_CH1
  {PF_9,  TIM17,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM17, 1, 1)}, // TIM17_CH1N
  {NC,    NP,    0}
};
#endif

//*** SERIAL ***

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_TX[] = {
  {PA_0,  UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PA_2,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PA_9,  LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_LPUART)},
  {PA_9,  USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PA_12, UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_UART4)},
  {PA_15, UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_UART7)},
  {PB_4,  UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_UART7)},
  {PB_6,  LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART)},
  {PB_6,  UART5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF14_UART5)},
  {PB_6,  USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PB_9,  UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PB_10, USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PB_13, UART5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF14_UART5)},
  {PB_14, USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)},
  {PC_6,  USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART6)},
  {PC_10, UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PC_10, USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PC_12, UART5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART5)},
  {PD_1,  UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PD_5,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PD_8,  USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PD_15, UART9,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_UART9)},
  {PE_1,  UART8,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART8)},
  {PE_3,  USART10, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_USART10)},
  {PE_8,  UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_UART7)},
  {PF_7,  UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_UART7)},
  {PG_12, USART10, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_USART10)},
  {PG_14, USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART6)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RX[] = {
  {PA_1,  UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PA_3,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PA_8,  UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_UART7)},
  {PA_10, LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_LPUART)},
  {PA_10, USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PA_11, UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_UART4)},
  {PB_3,  UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_UART7)},
  {PB_5,  UART5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF14_UART5)},
  {PB_7,  LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_LPUART)},
  {PB_7,  USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PB_8,  UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PB_11, USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PB_12, UART5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF14_UART5)},
  {PB_15, USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)},
  {PC_7,  USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART6)},
  {PC_11, UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PC_11, USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PD_0,  UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PD_2,  UART5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART5)},
  {PD_6,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PD_9,  USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PD_14, UART9,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_UART9)},
  {PE_0,  UART8,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART8)},
  {PE_2,  USART10, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_USART10)},
  {PE_7,  UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_UART7)},
  {PF_6,  UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_UART7)},
  {PG_9,  USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART6)},
  {PG_11, USART10, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_USART10)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RTS[] = {
  {PA_1,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PA_12, LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_LPUART)},
  {PA_12, USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PA_15, UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PB_14, UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PB_14, USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PC_8,  UART5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART5)},
  {PD_4,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PD_12, USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PD_13, UART9,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_UART9)},
  {PD_15, UART8,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART8)},
  {PE_9,  UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_UART7)},
  {PF_8,  UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_UART7)},
  {PG_8,  USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART6)},
  {PG_12, USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART6)},
  {PG_14, USART10, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_USART10)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_CTS[] = {
  {PA_0,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PA_11, LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_LPUART)},
  {PA_11, USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PB_0,  UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PB_13, USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PB_15, UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},
  {PC_9,  UART5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART5)},
  {PD_0,  UART9,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_UART9)},
  {PD_3,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PD_11, USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PD_14, UART8,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART8)},
  {PE_10, UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_UART7)},
  {PF_9,  UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_UART7)},
  {PG_13, USART10, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_USART10)},
  {PG_13, USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART6)},
  {NC,    NP,    0}
};
#endif

//*** SPI ***

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MOSI[] = {
  {PA_7,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PA_7,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_SPI6)},
  {PB_2,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_SPI3)},
  {PB_5,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PB_5,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_SPI3)},
  {PB_5,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_SPI6)},
  {PB_15, SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PC_1,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PC_12, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PD_6,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI3)},
  {PD_7,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PE_6,  SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)},
  {PE_14, SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)},
  {PF_9,  SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)},
  {PF_11, SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)},
  {PG_14, SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI6)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MISO[] = {
  {PA_6,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PA_6,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_SPI6)},
  {PB_4,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PB_4,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PB_4,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_SPI6)},
  {PB_14, SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PC_11, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PE_5,  SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)},
  {PE_13, SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)},
  {PF_8,  SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)},
  {PG_9,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PG_12, SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI6)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SCLK[] = {
  {PA_5,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PA_5,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_SPI6)},
  {PA_9,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PA_12, SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PB_3,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PB_3,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PB_3,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_SPI6)},
  {PB_10, SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PB_13, SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PC_10, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PC_12, SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI6)},
  {PD_3,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PE_2,  SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)},
  {PE_12, SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)},
  {PF_7,  SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)},
  {PG_11, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PG_13, SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI6)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SSEL[] = {
  {PA_0,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI6)},
  {PA_4,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PA_4,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PA_4,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_SPI6)},
  {PA_11, SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PA_15, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PA_15, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PA_15, SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_SPI6)},
  {PB_4,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_SPI2)},
  {PB_9,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PB_12, SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PE_4,  SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)},
  {PE_11, SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)},
  {PF_6,  SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)},
  {PG_8,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI6)},
  {PG_10, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {NC,    NP,    0}
};
#endif

//*** FDCAN ***

#ifdef HAL_FDCAN_MODULE_ENABLED
WEAK const PinMap PinMap_CAN_RD[] = {
  {PA_11, FDCAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
  {PB_5,  FDCAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN2)},
  {PB_8,  FDCAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
  {PB_12, FDCAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN2)},
  {PD_0,  FDCAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
  {NC,    NP,    0}
};
#endif

#ifdef HAL_FDCAN_MODULE_ENABLED
WEAK const PinMap PinMap_CAN_TD[] = {
  {PA_12, FDCAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
  {PB_6,  FDCAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN2)},
  {PB_9,  FDCAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
  {PB_13, FDCAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN2)},
  {PD_1,  FDCAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_FDCAN1)},
  {NC,    NP,    0}
};
#endif

//*** No ETHERNET ***

//*** OCTOSPI ***

#ifdef HAL_OSPI_MODULE_ENABLED
WEAK const PinMap PinMap_OCTOSPI_DATA0[] = {
  {PB_1,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO0
  {PC_9,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO0
  {PD_11, OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO0
  {PF_8,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO0
  {NC,    NP,    0}
};
#endif

#ifdef HAL_OSPI_MODULE_ENABLED
WEAK const PinMap PinMap_OCTOSPI_DATA1[] = {
  {PB_0,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO1
  {PC_10, OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO1
  {PD_12, OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO1
  {PF_9,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO1
  {NC,    NP,    0}
};
#endif

#ifdef HAL_OSPI_MODULE_ENABLED
WEAK const PinMap PinMap_OCTOSPI_DATA2[] = {
  {PA_7,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO2
  {PE_2,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO2
  {PF_7,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO2
  {NC,    NP,    0}
};
#endif

#ifdef HAL_OSPI_MODULE_ENABLED
WEAK const PinMap PinMap_OCTOSPI_DATA3[] = {
  {PA_1,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO3
  {PA_6,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO3
  {PD_13, OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO3
  {PF_6,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPIM_P1)}, // OCTOSPIM_P1_IO3
  {NC,    NP,    0}
};
#endif

#ifdef HAL_OSPI_MODULE_ENABLED
WEAK const PinMap PinMap_OCTOSPI_SCLK[] = {
  {PA_3,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_OCTOSPIM_P1)}, // OCTOSPIM_P1_CLK
  {PB_2,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_CLK
  {PF_10, OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_CLK
  {NC,    NP,    0}
};
#endif

#ifdef HAL_OSPI_MODULE_ENABLED
WEAK const PinMap PinMap_OCTOSPI_SSEL[] = {
  {PB_6,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPIM_P1)}, // OCTOSPIM_P1_NCS
  {PB_10, OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_NCS
  {PC_11, OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_OCTOSPIM_P1)}, // OCTOSPIM_P1_NCS
  {PE_11, OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_OCTOSPIM_P1)}, // OCTOSPIM_P1_NCS
  {PG_6,  OCTOSPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OCTOSPIM_P1)}, // OCTOSPIM_P1_NCS
  {PG_12, OCTOSPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_OCTOSPIM_P2)}, // OCTOSPIM_P2_NCS
  {NC,    NP,    0}
};
#endif

//*** USB ***

//*** No USB_OTG_FS ***

#ifdef HAL_PCD_MODULE_ENABLED
WEAK const PinMap PinMap_USB_OTG_HS[] = {
#ifdef USE_USB_HS_IN_FS
  {PA_8,  USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_SOF
  {PA_9,  USB_OTG_HS, STM_PIN_DATA(STM_MODE_INPUT, GPIO_NOPULL, GPIO_AF_NONE)}, // USB_OTG_HS_VBUS
  {PA_10, USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ID
  {PA_11, USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF_NONE)}, // USB_OTG_HS_DM
  {PA_12, USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF_NONE)}, // USB_OTG_HS_DP
#else
  {PA_3,  USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ULPI_D0
  {PA_5,  USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ULPI_CK
  {PB_0,  USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ULPI_D1
  {PB_1,  USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ULPI_D2
  {PB_5,  USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ULPI_D7
  {PB_10, USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ULPI_D3
  {PB_11, USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ULPI_D4
  {PB_12, USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ULPI_D5
  {PB_13, USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ULPI_D6
  {PC_0,  USB_OTG_HS, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_OTG1_HS)}, // USB_OTG_HS_ULPI_STP
#endif /* USE_USB_HS_IN_FS */
  {NC,    NP,    0}
};
#endif

//*** SD ***

#ifdef HAL_SD_MODULE_ENABLED
WEAK const PinMap PinMap_SD[] = {
  {PA_0,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_SDMMC2)}, // SDMMC2_CMD
  {PB_3,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_SDMMC2)}, // SDMMC2_D2
  {PB_4,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_SDMMC2)}, // SDMMC2_D3
  {PB_8,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF7_SDMMC1)}, // SDMMC1_CKIN
  {PB_8,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDMMC1)}, // SDMMC1_D4
  {PB_8,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_SDMMC2)}, // SDMMC2_D4
  {PB_9,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF7_SDMMC1)}, // SDMMC1_CDIR
  {PB_9,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDMMC1)}, // SDMMC1_D5
  {PB_9,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_SDMMC2)}, // SDMMC2_D5
  {PB_13, SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDMMC1)}, // SDMMC1_D0
  {PB_14, SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_SDMMC2)}, // SDMMC2_D0
  {PB_15, SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_SDMMC2)}, // SDMMC2_D1
  {PC_1,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_SDMMC2)}, // SDMMC2_CK
  {PC_6,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF8_SDMMC1)}, // SDMMC1_D0DIR
  {PC_6,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDMMC1)}, // SDMMC1_D6
  {PC_6,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_SDMMC2)}, // SDMMC2_D6
  {PC_7,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF8_SDMMC1)}, // SDMMC1_D123DIR
  {PC_7,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDMMC1)}, // SDMMC1_D7
  {PC_7,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_SDMMC2)}, // SDMMC2_D7
  {PC_8,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDMMC1)}, // SDMMC1_D0
  {PC_9,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDMMC1)}, // SDMMC1_D1
  {PC_10, SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDMMC1)}, // SDMMC1_D2
  {PC_11, SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF12_SDMMC1)}, // SDMMC1_D3
  {PC_12, SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF12_SDMMC1)}, // SDMMC1_CK
  {PD_2,  SDMMC1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF12_SDMMC1)}, // SDMMC1_CMD
  {PD_6,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF11_SDMMC2)}, // SDMMC2_CK
  {PD_7,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF11_SDMMC2)}, // SDMMC2_CMD
  {PG_9,  SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_SDMMC2)}, // SDMMC2_D0
  {PG_10, SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_SDMMC2)}, // SDMMC2_D1
  {PG_11, SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_SDMMC2)}, // SDMMC2_D2
  {PG_12, SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_SDMMC2)}, // SDMMC2_D3
  {PG_13, SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_SDMMC2)}, // SDMMC2_D6
  {PG_14, SDMMC2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_SDMMC2)}, // SDMMC2_D7
  {NC,    NP,    0}
};
#endif
