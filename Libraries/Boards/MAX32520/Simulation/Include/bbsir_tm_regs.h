/**
 * @file    bbsir_tm_regs.h
 * @brief   Registers, Bit Masks and Bit Positions for the BBSIR Peripheral Module.
 */

/******************************************************************************
 *
 * Copyright (C) 2022-2023 Maxim Integrated Products, Inc. (now owned by 
 * Analog Devices, Inc.),
 * Copyright (C) 2023-2024 Analog Devices, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

#ifndef _BBSIR_TM_REGS_H_
#define _BBSIR_TM_REGS_H_

/* **** Includes **** */
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @cond
/*
    If types are not defined elsewhere (CMSIS) define them here
*/
#ifndef __IO
#define __IO volatile
#endif
#ifndef __I
#define __I  volatile const
#endif
#ifndef __O
#define __O  volatile
#endif
#ifndef __R
#define __R  volatile const
#endif
/// @endcond

/* **** Definitions **** */

/**
 * @ingroup     bbsir
 * @defgroup    bbsir_registers Registers
 * @brief       Registers, Bit Masks and Bit Positions for the BBSIR Peripheral Module.
 * @description Battery Backed System Initialization Registers (For Simulation)
 */

/**
 * @ingroup bbsir_registers
 * Structure type to access the BBSIR Registers.
 */
typedef struct {
    __IO uint32_t bbconf0;              /**< <tt>\b 0x00:<\tt> BBSIR BBCONF0 Register */
    __IO uint32_t bbconf1;              /**< <tt>\b 0x04:<\tt> BBSIR BBCONF1 Register */
    __IO uint32_t bbshr2;               /**< <tt>\b 0x08:<\tt> BBSIR BBSHR2 Register */
    __IO uint32_t bbshr3;               /**< <tt>\b 0x0C:<\tt> BBSIR BBSHR3 Register */
    __IO uint32_t bbshr4;               /**< <tt>\b 0x10:<\tt> BBSIR BBSHR4 Register */
    __IO uint32_t bbshr5;               /**< <tt>\b 0x14:<\tt> BBSIR BBSHR5 Register */
    __IO uint32_t bbshr6;               /**< <tt>\b 0x18:<\tt> BBSIR BBSHR6 Register */
    __IO uint32_t bbshr7;               /**< <tt>\b 0x1C:<\tt> BBSIR BBSHR7 Register */
    __IO uint32_t bbshr8;               /**< <tt>\b 0x20:<\tt> BBSIR BBSHR8 Register */
    __IO uint32_t bbshr9;               /**< <tt>\b 0x24:<\tt> BBSIR BBSHR9 Register */
    __IO uint32_t bbshr10;              /**< <tt>\b 0x28:<\tt> BBSIR BBSHR10 Register */
    __IO uint32_t bbshr11;              /**< <tt>\b 0x2C:<\tt> BBSIR BBSHR11 Register */
} mxc_bbsir_tm_regs_t;

/*******************************************************************************/
/*                                                                       BBSIR */
#define MXC_BASE_BBSIR_TM                ((uint32_t)0x40005400UL)
#define MXC_BBSIR_TM                     ((mxc_bbsir_tm_regs_t*)MXC_BASE_BBSIR_TM)
#define MXC_BBSIR_TM_INSTANCES           (1)

#ifdef __cplusplus
}
#endif

#endif /* _BBSIR_TM_REGS_H_ */

