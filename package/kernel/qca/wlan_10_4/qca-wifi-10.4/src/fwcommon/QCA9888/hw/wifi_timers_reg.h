/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _WIFI_TIMERS_REG_H_
#define _WIFI_TIMERS_REG_H_


#ifndef __WIFI_TIMERS_REG_BASE_ADDRESS
#define __WIFI_TIMERS_REG_BASE_ADDRESS (0x41000)
#endif


// 0x0 (WIFI_TIMERS_SLP32_MODE)
#define WIFI_TIMERS_SLP32_MODE_SYNC_WB_CNT_ONLY_AFTER_WAKEUP_LSB               27
#define WIFI_TIMERS_SLP32_MODE_SYNC_WB_CNT_ONLY_AFTER_WAKEUP_MSB               27
#define WIFI_TIMERS_SLP32_MODE_SYNC_WB_CNT_ONLY_AFTER_WAKEUP_MASK              0x8000000
#define WIFI_TIMERS_SLP32_MODE_SYNC_WB_CNT_ONLY_AFTER_WAKEUP_GET(x)            (((x) & WIFI_TIMERS_SLP32_MODE_SYNC_WB_CNT_ONLY_AFTER_WAKEUP_MASK) >> WIFI_TIMERS_SLP32_MODE_SYNC_WB_CNT_ONLY_AFTER_WAKEUP_LSB)
#define WIFI_TIMERS_SLP32_MODE_SYNC_WB_CNT_ONLY_AFTER_WAKEUP_SET(x)            (((0 | (x)) << WIFI_TIMERS_SLP32_MODE_SYNC_WB_CNT_ONLY_AFTER_WAKEUP_LSB) & WIFI_TIMERS_SLP32_MODE_SYNC_WB_CNT_ONLY_AFTER_WAKEUP_MASK)
#define WIFI_TIMERS_SLP32_MODE_SYNC_WB_CNT_ONLY_AFTER_WAKEUP_RESET             0x1
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF2_ONLY_AFTER_WAKEUP_LSB              26
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF2_ONLY_AFTER_WAKEUP_MSB              26
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF2_ONLY_AFTER_WAKEUP_MASK             0x4000000
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF2_ONLY_AFTER_WAKEUP_GET(x)           (((x) & WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF2_ONLY_AFTER_WAKEUP_MASK) >> WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF2_ONLY_AFTER_WAKEUP_LSB)
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF2_ONLY_AFTER_WAKEUP_SET(x)           (((0 | (x)) << WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF2_ONLY_AFTER_WAKEUP_LSB) & WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF2_ONLY_AFTER_WAKEUP_MASK)
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF2_ONLY_AFTER_WAKEUP_RESET            0x1
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF_ONLY_AFTER_WAKEUP_LSB               25
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF_ONLY_AFTER_WAKEUP_MSB               25
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF_ONLY_AFTER_WAKEUP_MASK              0x2000000
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF_ONLY_AFTER_WAKEUP_GET(x)            (((x) & WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF_ONLY_AFTER_WAKEUP_MASK) >> WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF_ONLY_AFTER_WAKEUP_LSB)
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF_ONLY_AFTER_WAKEUP_SET(x)            (((0 | (x)) << WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF_ONLY_AFTER_WAKEUP_LSB) & WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF_ONLY_AFTER_WAKEUP_MASK)
#define WIFI_TIMERS_SLP32_MODE_SYNC_TM_TSF_ONLY_AFTER_WAKEUP_RESET             0x1
#define WIFI_TIMERS_SLP32_MODE_TSF2_WRITE_STATUS_LSB                           24
#define WIFI_TIMERS_SLP32_MODE_TSF2_WRITE_STATUS_MSB                           24
#define WIFI_TIMERS_SLP32_MODE_TSF2_WRITE_STATUS_MASK                          0x1000000
#define WIFI_TIMERS_SLP32_MODE_TSF2_WRITE_STATUS_GET(x)                        (((x) & WIFI_TIMERS_SLP32_MODE_TSF2_WRITE_STATUS_MASK) >> WIFI_TIMERS_SLP32_MODE_TSF2_WRITE_STATUS_LSB)
#define WIFI_TIMERS_SLP32_MODE_TSF2_WRITE_STATUS_SET(x)                        (((0 | (x)) << WIFI_TIMERS_SLP32_MODE_TSF2_WRITE_STATUS_LSB) & WIFI_TIMERS_SLP32_MODE_TSF2_WRITE_STATUS_MASK)
#define WIFI_TIMERS_SLP32_MODE_TSF2_WRITE_STATUS_RESET                         0x1
#define WIFI_TIMERS_SLP32_MODE_DISABLE_32KHZ_LSB                               22
#define WIFI_TIMERS_SLP32_MODE_DISABLE_32KHZ_MSB                               22
#define WIFI_TIMERS_SLP32_MODE_DISABLE_32KHZ_MASK                              0x400000
#define WIFI_TIMERS_SLP32_MODE_DISABLE_32KHZ_GET(x)                            (((x) & WIFI_TIMERS_SLP32_MODE_DISABLE_32KHZ_MASK) >> WIFI_TIMERS_SLP32_MODE_DISABLE_32KHZ_LSB)
#define WIFI_TIMERS_SLP32_MODE_DISABLE_32KHZ_SET(x)                            (((0 | (x)) << WIFI_TIMERS_SLP32_MODE_DISABLE_32KHZ_LSB) & WIFI_TIMERS_SLP32_MODE_DISABLE_32KHZ_MASK)
#define WIFI_TIMERS_SLP32_MODE_DISABLE_32KHZ_RESET                             0x0
#define WIFI_TIMERS_SLP32_MODE_TSF_WRITE_STATUS_LSB                            21
#define WIFI_TIMERS_SLP32_MODE_TSF_WRITE_STATUS_MSB                            21
#define WIFI_TIMERS_SLP32_MODE_TSF_WRITE_STATUS_MASK                           0x200000
#define WIFI_TIMERS_SLP32_MODE_TSF_WRITE_STATUS_GET(x)                         (((x) & WIFI_TIMERS_SLP32_MODE_TSF_WRITE_STATUS_MASK) >> WIFI_TIMERS_SLP32_MODE_TSF_WRITE_STATUS_LSB)
#define WIFI_TIMERS_SLP32_MODE_TSF_WRITE_STATUS_SET(x)                         (((0 | (x)) << WIFI_TIMERS_SLP32_MODE_TSF_WRITE_STATUS_LSB) & WIFI_TIMERS_SLP32_MODE_TSF_WRITE_STATUS_MASK)
#define WIFI_TIMERS_SLP32_MODE_TSF_WRITE_STATUS_RESET                          0x1
#define WIFI_TIMERS_SLP32_MODE_HALF_CLK_LATENCY_LSB                            0
#define WIFI_TIMERS_SLP32_MODE_HALF_CLK_LATENCY_MSB                            19
#define WIFI_TIMERS_SLP32_MODE_HALF_CLK_LATENCY_MASK                           0xfffff
#define WIFI_TIMERS_SLP32_MODE_HALF_CLK_LATENCY_GET(x)                         (((x) & WIFI_TIMERS_SLP32_MODE_HALF_CLK_LATENCY_MASK) >> WIFI_TIMERS_SLP32_MODE_HALF_CLK_LATENCY_LSB)
#define WIFI_TIMERS_SLP32_MODE_HALF_CLK_LATENCY_SET(x)                         (((0 | (x)) << WIFI_TIMERS_SLP32_MODE_HALF_CLK_LATENCY_LSB) & WIFI_TIMERS_SLP32_MODE_HALF_CLK_LATENCY_MASK)
#define WIFI_TIMERS_SLP32_MODE_HALF_CLK_LATENCY_RESET                          0xf424
#define WIFI_TIMERS_SLP32_MODE_ADDRESS                                         (0x0 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_SLP32_MODE_RSTMASK                                         0xf6fffff
#define WIFI_TIMERS_SLP32_MODE_RESET                                           0xf20f424

// 0x4 (WIFI_TIMERS_SLP32_WAKE)
#define WIFI_TIMERS_SLP32_WAKE_XTL_TIME_LSB                                    0
#define WIFI_TIMERS_SLP32_WAKE_XTL_TIME_MSB                                    15
#define WIFI_TIMERS_SLP32_WAKE_XTL_TIME_MASK                                   0xffff
#define WIFI_TIMERS_SLP32_WAKE_XTL_TIME_GET(x)                                 (((x) & WIFI_TIMERS_SLP32_WAKE_XTL_TIME_MASK) >> WIFI_TIMERS_SLP32_WAKE_XTL_TIME_LSB)
#define WIFI_TIMERS_SLP32_WAKE_XTL_TIME_SET(x)                                 (((0 | (x)) << WIFI_TIMERS_SLP32_WAKE_XTL_TIME_LSB) & WIFI_TIMERS_SLP32_WAKE_XTL_TIME_MASK)
#define WIFI_TIMERS_SLP32_WAKE_XTL_TIME_RESET                                  0x800
#define WIFI_TIMERS_SLP32_WAKE_ADDRESS                                         (0x4 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_SLP32_WAKE_RSTMASK                                         0xffff
#define WIFI_TIMERS_SLP32_WAKE_RESET                                           0x800

// 0x8 (WIFI_TIMERS_SLP32_INC)
#define WIFI_TIMERS_SLP32_INC_TSF_INC_LSB                                      0
#define WIFI_TIMERS_SLP32_INC_TSF_INC_MSB                                      19
#define WIFI_TIMERS_SLP32_INC_TSF_INC_MASK                                     0xfffff
#define WIFI_TIMERS_SLP32_INC_TSF_INC_GET(x)                                   (((x) & WIFI_TIMERS_SLP32_INC_TSF_INC_MASK) >> WIFI_TIMERS_SLP32_INC_TSF_INC_LSB)
#define WIFI_TIMERS_SLP32_INC_TSF_INC_SET(x)                                   (((0 | (x)) << WIFI_TIMERS_SLP32_INC_TSF_INC_LSB) & WIFI_TIMERS_SLP32_INC_TSF_INC_MASK)
#define WIFI_TIMERS_SLP32_INC_TSF_INC_RESET                                    0x1e848
#define WIFI_TIMERS_SLP32_INC_ADDRESS                                          (0x8 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_SLP32_INC_RSTMASK                                          0xfffff
#define WIFI_TIMERS_SLP32_INC_RESET                                            0x1e848

// 0xc (WIFI_TIMERS_SLP_MIB1)
#define WIFI_TIMERS_SLP_MIB1_SLEEP_CNT_LSB                                     0
#define WIFI_TIMERS_SLP_MIB1_SLEEP_CNT_MSB                                     31
#define WIFI_TIMERS_SLP_MIB1_SLEEP_CNT_MASK                                    0xffffffff
#define WIFI_TIMERS_SLP_MIB1_SLEEP_CNT_GET(x)                                  (((x) & WIFI_TIMERS_SLP_MIB1_SLEEP_CNT_MASK) >> WIFI_TIMERS_SLP_MIB1_SLEEP_CNT_LSB)
#define WIFI_TIMERS_SLP_MIB1_SLEEP_CNT_SET(x)                                  (((0 | (x)) << WIFI_TIMERS_SLP_MIB1_SLEEP_CNT_LSB) & WIFI_TIMERS_SLP_MIB1_SLEEP_CNT_MASK)
#define WIFI_TIMERS_SLP_MIB1_SLEEP_CNT_RESET                                   0x0
#define WIFI_TIMERS_SLP_MIB1_ADDRESS                                           (0xc + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_SLP_MIB1_RSTMASK                                           0xffffffff
#define WIFI_TIMERS_SLP_MIB1_RESET                                             0x0

// 0x10 (WIFI_TIMERS_SLP_MIB2)
#define WIFI_TIMERS_SLP_MIB2_CYCLE_CNT_LSB                                     0
#define WIFI_TIMERS_SLP_MIB2_CYCLE_CNT_MSB                                     31
#define WIFI_TIMERS_SLP_MIB2_CYCLE_CNT_MASK                                    0xffffffff
#define WIFI_TIMERS_SLP_MIB2_CYCLE_CNT_GET(x)                                  (((x) & WIFI_TIMERS_SLP_MIB2_CYCLE_CNT_MASK) >> WIFI_TIMERS_SLP_MIB2_CYCLE_CNT_LSB)
#define WIFI_TIMERS_SLP_MIB2_CYCLE_CNT_SET(x)                                  (((0 | (x)) << WIFI_TIMERS_SLP_MIB2_CYCLE_CNT_LSB) & WIFI_TIMERS_SLP_MIB2_CYCLE_CNT_MASK)
#define WIFI_TIMERS_SLP_MIB2_CYCLE_CNT_RESET                                   0x0
#define WIFI_TIMERS_SLP_MIB2_ADDRESS                                           (0x10 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_SLP_MIB2_RSTMASK                                           0xffffffff
#define WIFI_TIMERS_SLP_MIB2_RESET                                             0x0

// 0x14 (WIFI_TIMERS_SLP_MIB3)
#define WIFI_TIMERS_SLP_MIB3_PENDING_LSB                                       1
#define WIFI_TIMERS_SLP_MIB3_PENDING_MSB                                       1
#define WIFI_TIMERS_SLP_MIB3_PENDING_MASK                                      0x2
#define WIFI_TIMERS_SLP_MIB3_PENDING_GET(x)                                    (((x) & WIFI_TIMERS_SLP_MIB3_PENDING_MASK) >> WIFI_TIMERS_SLP_MIB3_PENDING_LSB)
#define WIFI_TIMERS_SLP_MIB3_PENDING_SET(x)                                    (((0 | (x)) << WIFI_TIMERS_SLP_MIB3_PENDING_LSB) & WIFI_TIMERS_SLP_MIB3_PENDING_MASK)
#define WIFI_TIMERS_SLP_MIB3_PENDING_RESET                                     0x0
#define WIFI_TIMERS_SLP_MIB3_CLR_CNT_LSB                                       0
#define WIFI_TIMERS_SLP_MIB3_CLR_CNT_MSB                                       0
#define WIFI_TIMERS_SLP_MIB3_CLR_CNT_MASK                                      0x1
#define WIFI_TIMERS_SLP_MIB3_CLR_CNT_GET(x)                                    (((x) & WIFI_TIMERS_SLP_MIB3_CLR_CNT_MASK) >> WIFI_TIMERS_SLP_MIB3_CLR_CNT_LSB)
#define WIFI_TIMERS_SLP_MIB3_CLR_CNT_SET(x)                                    (((0 | (x)) << WIFI_TIMERS_SLP_MIB3_CLR_CNT_LSB) & WIFI_TIMERS_SLP_MIB3_CLR_CNT_MASK)
#define WIFI_TIMERS_SLP_MIB3_CLR_CNT_RESET                                     0x0
#define WIFI_TIMERS_SLP_MIB3_ADDRESS                                           (0x14 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_SLP_MIB3_RSTMASK                                           0x3
#define WIFI_TIMERS_SLP_MIB3_RESET                                             0x0

// 0x18 (WIFI_TIMERS_TSF_L32)
#define WIFI_TIMERS_TSF_L32_VALUE_LSB                                          0
#define WIFI_TIMERS_TSF_L32_VALUE_MSB                                          31
#define WIFI_TIMERS_TSF_L32_VALUE_MASK                                         0xffffffff
#define WIFI_TIMERS_TSF_L32_VALUE_GET(x)                                       (((x) & WIFI_TIMERS_TSF_L32_VALUE_MASK) >> WIFI_TIMERS_TSF_L32_VALUE_LSB)
#define WIFI_TIMERS_TSF_L32_VALUE_SET(x)                                       (((0 | (x)) << WIFI_TIMERS_TSF_L32_VALUE_LSB) & WIFI_TIMERS_TSF_L32_VALUE_MASK)
#define WIFI_TIMERS_TSF_L32_VALUE_RESET                                        0xfffffff
#define WIFI_TIMERS_TSF_L32_ADDRESS                                            (0x18 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_TSF_L32_RSTMASK                                            0xffffffff
#define WIFI_TIMERS_TSF_L32_RESET                                              0xfffffff

// 0x1c (WIFI_TIMERS_TSF_U32)
#define WIFI_TIMERS_TSF_U32_VALUE_LSB                                          0
#define WIFI_TIMERS_TSF_U32_VALUE_MSB                                          31
#define WIFI_TIMERS_TSF_U32_VALUE_MASK                                         0xffffffff
#define WIFI_TIMERS_TSF_U32_VALUE_GET(x)                                       (((x) & WIFI_TIMERS_TSF_U32_VALUE_MASK) >> WIFI_TIMERS_TSF_U32_VALUE_LSB)
#define WIFI_TIMERS_TSF_U32_VALUE_SET(x)                                       (((0 | (x)) << WIFI_TIMERS_TSF_U32_VALUE_LSB) & WIFI_TIMERS_TSF_U32_VALUE_MASK)
#define WIFI_TIMERS_TSF_U32_VALUE_RESET                                        0xfffffff
#define WIFI_TIMERS_TSF_U32_ADDRESS                                            (0x1c + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_TSF_U32_RSTMASK                                            0xffffffff
#define WIFI_TIMERS_TSF_U32_RESET                                              0xfffffff

// 0x20 (WIFI_TIMERS_WBTIMER_0)
#define WIFI_TIMERS_WBTIMER_0_ENABLE_LSB                                       0
#define WIFI_TIMERS_WBTIMER_0_ENABLE_MSB                                       0
#define WIFI_TIMERS_WBTIMER_0_ENABLE_MASK                                      0x1
#define WIFI_TIMERS_WBTIMER_0_ENABLE_GET(x)                                    (((x) & WIFI_TIMERS_WBTIMER_0_ENABLE_MASK) >> WIFI_TIMERS_WBTIMER_0_ENABLE_LSB)
#define WIFI_TIMERS_WBTIMER_0_ENABLE_SET(x)                                    (((0 | (x)) << WIFI_TIMERS_WBTIMER_0_ENABLE_LSB) & WIFI_TIMERS_WBTIMER_0_ENABLE_MASK)
#define WIFI_TIMERS_WBTIMER_0_ENABLE_RESET                                     0x0
#define WIFI_TIMERS_WBTIMER_0_ADDRESS                                          (0x20 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_WBTIMER_0_RSTMASK                                          0x1
#define WIFI_TIMERS_WBTIMER_0_RESET                                            0x0

// 0x24 (WIFI_TIMERS_WBTIMER_1)
#define WIFI_TIMERS_WBTIMER_1_VALUE_LSB                                        0
#define WIFI_TIMERS_WBTIMER_1_VALUE_MSB                                        31
#define WIFI_TIMERS_WBTIMER_1_VALUE_MASK                                       0xffffffff
#define WIFI_TIMERS_WBTIMER_1_VALUE_GET(x)                                     (((x) & WIFI_TIMERS_WBTIMER_1_VALUE_MASK) >> WIFI_TIMERS_WBTIMER_1_VALUE_LSB)
#define WIFI_TIMERS_WBTIMER_1_VALUE_SET(x)                                     (((0 | (x)) << WIFI_TIMERS_WBTIMER_1_VALUE_LSB) & WIFI_TIMERS_WBTIMER_1_VALUE_MASK)
#define WIFI_TIMERS_WBTIMER_1_VALUE_RESET                                      0x0
#define WIFI_TIMERS_WBTIMER_1_ADDRESS                                          (0x24 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_WBTIMER_1_RSTMASK                                          0xffffffff
#define WIFI_TIMERS_WBTIMER_1_RESET                                            0x0

// 0x28 (WIFI_TIMERS_GENERIC_TIMERS)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_LSB                                    0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_MSB                                    31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_MASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_GET(x)                                 (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_SET(x)                                 (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_RESET                                  0x0
#define WIFI_TIMERS_GENERIC_TIMERS_ADDRESS                                     (0x28 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_RSTMASK                                     0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_RESET                                       0x0

// 0x28 (WIFI_TIMERS_GENERIC_TIMERS_0)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_0_LSB                                  0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_0_MSB                                  31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_0_MASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_0_GET(x)                               (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_0_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_0_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_0_SET(x)                               (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_0_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_0_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_0_RESET                                0x0
#define WIFI_TIMERS_GENERIC_TIMERS_0_ADDRESS                                   (0x28 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_0_RSTMASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_0_RESET                                     0x0

// 0x2c (WIFI_TIMERS_GENERIC_TIMERS_1)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_1_LSB                                  0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_1_MSB                                  31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_1_MASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_1_GET(x)                               (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_1_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_1_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_1_SET(x)                               (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_1_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_1_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_1_RESET                                0x0
#define WIFI_TIMERS_GENERIC_TIMERS_1_ADDRESS                                   (0x2c + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_1_RSTMASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_1_RESET                                     0x0

// 0x30 (WIFI_TIMERS_GENERIC_TIMERS_2)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_2_LSB                                  0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_2_MSB                                  31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_2_MASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_2_GET(x)                               (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_2_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_2_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_2_SET(x)                               (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_2_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_2_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_2_RESET                                0x0
#define WIFI_TIMERS_GENERIC_TIMERS_2_ADDRESS                                   (0x30 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_2_RSTMASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_2_RESET                                     0x0

// 0x34 (WIFI_TIMERS_GENERIC_TIMERS_3)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_3_LSB                                  0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_3_MSB                                  31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_3_MASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_3_GET(x)                               (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_3_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_3_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_3_SET(x)                               (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_3_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_3_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_3_RESET                                0x0
#define WIFI_TIMERS_GENERIC_TIMERS_3_ADDRESS                                   (0x34 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_3_RSTMASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_3_RESET                                     0x0

// 0x38 (WIFI_TIMERS_GENERIC_TIMERS_4)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_4_LSB                                  0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_4_MSB                                  31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_4_MASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_4_GET(x)                               (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_4_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_4_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_4_SET(x)                               (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_4_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_4_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_4_RESET                                0x0
#define WIFI_TIMERS_GENERIC_TIMERS_4_ADDRESS                                   (0x38 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_4_RSTMASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_4_RESET                                     0x0

// 0x3c (WIFI_TIMERS_GENERIC_TIMERS_5)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_5_LSB                                  0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_5_MSB                                  31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_5_MASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_5_GET(x)                               (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_5_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_5_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_5_SET(x)                               (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_5_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_5_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_5_RESET                                0x0
#define WIFI_TIMERS_GENERIC_TIMERS_5_ADDRESS                                   (0x3c + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_5_RSTMASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_5_RESET                                     0x0

// 0x40 (WIFI_TIMERS_GENERIC_TIMERS_6)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_6_LSB                                  0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_6_MSB                                  31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_6_MASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_6_GET(x)                               (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_6_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_6_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_6_SET(x)                               (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_6_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_6_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_6_RESET                                0x0
#define WIFI_TIMERS_GENERIC_TIMERS_6_ADDRESS                                   (0x40 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_6_RSTMASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_6_RESET                                     0x0

// 0x44 (WIFI_TIMERS_GENERIC_TIMERS_7)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_7_LSB                                  0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_7_MSB                                  31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_7_MASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_7_GET(x)                               (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_7_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_7_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_7_SET(x)                               (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_7_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_7_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_7_RESET                                0x0
#define WIFI_TIMERS_GENERIC_TIMERS_7_ADDRESS                                   (0x44 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_7_RSTMASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_7_RESET                                     0x0

// 0x48 (WIFI_TIMERS_GENERIC_TIMERS_8)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_8_LSB                                  0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_8_MSB                                  31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_8_MASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_8_GET(x)                               (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_8_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_8_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_8_SET(x)                               (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_8_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_8_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_8_RESET                                0x0
#define WIFI_TIMERS_GENERIC_TIMERS_8_ADDRESS                                   (0x48 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_8_RSTMASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_8_RESET                                     0x0

// 0x4c (WIFI_TIMERS_GENERIC_TIMERS_9)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_9_LSB                                  0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_9_MSB                                  31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_9_MASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_9_GET(x)                               (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_9_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_9_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_9_SET(x)                               (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_9_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_9_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_9_RESET                                0x0
#define WIFI_TIMERS_GENERIC_TIMERS_9_ADDRESS                                   (0x4c + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_9_RSTMASK                                   0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_9_RESET                                     0x0

// 0x50 (WIFI_TIMERS_GENERIC_TIMERS_10)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_10_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_10_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_10_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_10_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_10_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_10_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_10_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_10_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_10_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_10_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS_10_ADDRESS                                  (0x50 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_10_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_10_RESET                                    0x0

// 0x54 (WIFI_TIMERS_GENERIC_TIMERS_11)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_11_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_11_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_11_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_11_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_11_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_11_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_11_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_11_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_11_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_11_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS_11_ADDRESS                                  (0x54 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_11_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_11_RESET                                    0x0

// 0x58 (WIFI_TIMERS_GENERIC_TIMERS_12)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_12_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_12_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_12_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_12_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_12_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_12_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_12_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_12_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_12_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_12_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS_12_ADDRESS                                  (0x58 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_12_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_12_RESET                                    0x0

// 0x5c (WIFI_TIMERS_GENERIC_TIMERS_13)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_13_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_13_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_13_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_13_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_13_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_13_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_13_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_13_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_13_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_13_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS_13_ADDRESS                                  (0x5c + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_13_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_13_RESET                                    0x0

// 0x60 (WIFI_TIMERS_GENERIC_TIMERS_14)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_14_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_14_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_14_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_14_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_14_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_14_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_14_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_14_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_14_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_14_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS_14_ADDRESS                                  (0x60 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_14_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_14_RESET                                    0x0

// 0x64 (WIFI_TIMERS_GENERIC_TIMERS_15)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_15_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_15_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_15_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_15_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS_DATA_15_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_DATA_15_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_15_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_DATA_15_LSB) & WIFI_TIMERS_GENERIC_TIMERS_DATA_15_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_DATA_15_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS_15_ADDRESS                                  (0x64 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_15_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS_15_RESET                                    0x0

// 0x68 (WIFI_TIMERS_GENERIC_TIMERS_MODE)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_THRESH_LSB                             12
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_THRESH_MSB                             31
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_THRESH_MASK                            0xfffff000
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_THRESH_GET(x)                          (((x) & WIFI_TIMERS_GENERIC_TIMERS_MODE_THRESH_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_MODE_THRESH_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_THRESH_SET(x)                          (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_MODE_THRESH_LSB) & WIFI_TIMERS_GENERIC_TIMERS_MODE_THRESH_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_THRESH_RESET                           0x100
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_OVERFLOW_INDEX_LSB                     8
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_OVERFLOW_INDEX_MSB                     10
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_OVERFLOW_INDEX_MASK                    0x700
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_OVERFLOW_INDEX_GET(x)                  (((x) & WIFI_TIMERS_GENERIC_TIMERS_MODE_OVERFLOW_INDEX_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_MODE_OVERFLOW_INDEX_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_OVERFLOW_INDEX_SET(x)                  (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_MODE_OVERFLOW_INDEX_LSB) & WIFI_TIMERS_GENERIC_TIMERS_MODE_OVERFLOW_INDEX_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_OVERFLOW_INDEX_RESET                   0x0
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_ENABLE_LSB                             0
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_ENABLE_MSB                             7
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_ENABLE_MASK                            0xff
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_ENABLE_GET(x)                          (((x) & WIFI_TIMERS_GENERIC_TIMERS_MODE_ENABLE_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_MODE_ENABLE_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_ENABLE_SET(x)                          (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_MODE_ENABLE_LSB) & WIFI_TIMERS_GENERIC_TIMERS_MODE_ENABLE_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_ENABLE_RESET                           0x0
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_ADDRESS                                (0x68 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_RSTMASK                                0xfffff7ff
#define WIFI_TIMERS_GENERIC_TIMERS_MODE_RESET                                  0x100000

// 0x6c (WIFI_TIMERS_SLP1)
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_LSB                                       21
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_MSB                                       31
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_MASK                                      0xffe00000
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_GET(x)                                    (((x) & WIFI_TIMERS_SLP1_CAB_TIMEOUT_MASK) >> WIFI_TIMERS_SLP1_CAB_TIMEOUT_LSB)
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_SET(x)                                    (((0 | (x)) << WIFI_TIMERS_SLP1_CAB_TIMEOUT_LSB) & WIFI_TIMERS_SLP1_CAB_TIMEOUT_MASK)
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_RESET                                     0x5
#define WIFI_TIMERS_SLP1_BUG_59985_FIX_ENABLE_LSB                              20
#define WIFI_TIMERS_SLP1_BUG_59985_FIX_ENABLE_MSB                              20
#define WIFI_TIMERS_SLP1_BUG_59985_FIX_ENABLE_MASK                             0x100000
#define WIFI_TIMERS_SLP1_BUG_59985_FIX_ENABLE_GET(x)                           (((x) & WIFI_TIMERS_SLP1_BUG_59985_FIX_ENABLE_MASK) >> WIFI_TIMERS_SLP1_BUG_59985_FIX_ENABLE_LSB)
#define WIFI_TIMERS_SLP1_BUG_59985_FIX_ENABLE_SET(x)                           (((0 | (x)) << WIFI_TIMERS_SLP1_BUG_59985_FIX_ENABLE_LSB) & WIFI_TIMERS_SLP1_BUG_59985_FIX_ENABLE_MASK)
#define WIFI_TIMERS_SLP1_BUG_59985_FIX_ENABLE_RESET                            0x0
#define WIFI_TIMERS_SLP1_ASSUME_DTIM_LSB                                       19
#define WIFI_TIMERS_SLP1_ASSUME_DTIM_MSB                                       19
#define WIFI_TIMERS_SLP1_ASSUME_DTIM_MASK                                      0x80000
#define WIFI_TIMERS_SLP1_ASSUME_DTIM_GET(x)                                    (((x) & WIFI_TIMERS_SLP1_ASSUME_DTIM_MASK) >> WIFI_TIMERS_SLP1_ASSUME_DTIM_LSB)
#define WIFI_TIMERS_SLP1_ASSUME_DTIM_SET(x)                                    (((0 | (x)) << WIFI_TIMERS_SLP1_ASSUME_DTIM_LSB) & WIFI_TIMERS_SLP1_ASSUME_DTIM_MASK)
#define WIFI_TIMERS_SLP1_ASSUME_DTIM_RESET                                     0x0
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_EXT_LSB                                   0
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_EXT_MSB                                   4
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_EXT_MASK                                  0x1f
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_EXT_GET(x)                                (((x) & WIFI_TIMERS_SLP1_CAB_TIMEOUT_EXT_MASK) >> WIFI_TIMERS_SLP1_CAB_TIMEOUT_EXT_LSB)
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_EXT_SET(x)                                (((0 | (x)) << WIFI_TIMERS_SLP1_CAB_TIMEOUT_EXT_LSB) & WIFI_TIMERS_SLP1_CAB_TIMEOUT_EXT_MASK)
#define WIFI_TIMERS_SLP1_CAB_TIMEOUT_EXT_RESET                                 0x0
#define WIFI_TIMERS_SLP1_ADDRESS                                               (0x6c + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_SLP1_RSTMASK                                               0xfff8001f
#define WIFI_TIMERS_SLP1_RESET                                                 0xa00000

// 0x70 (WIFI_TIMERS_SLP2)
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_LSB                                    21
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_MSB                                    31
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_MASK                                   0xffe00000
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_GET(x)                                 (((x) & WIFI_TIMERS_SLP2_BEACON_TIMEOUT_MASK) >> WIFI_TIMERS_SLP2_BEACON_TIMEOUT_LSB)
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_SET(x)                                 (((0 | (x)) << WIFI_TIMERS_SLP2_BEACON_TIMEOUT_LSB) & WIFI_TIMERS_SLP2_BEACON_TIMEOUT_MASK)
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_RESET                                  0x2
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_EXT_LSB                                0
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_EXT_MSB                                4
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_EXT_MASK                               0x1f
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_EXT_GET(x)                             (((x) & WIFI_TIMERS_SLP2_BEACON_TIMEOUT_EXT_MASK) >> WIFI_TIMERS_SLP2_BEACON_TIMEOUT_EXT_LSB)
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_EXT_SET(x)                             (((0 | (x)) << WIFI_TIMERS_SLP2_BEACON_TIMEOUT_EXT_LSB) & WIFI_TIMERS_SLP2_BEACON_TIMEOUT_EXT_MASK)
#define WIFI_TIMERS_SLP2_BEACON_TIMEOUT_EXT_RESET                              0x0
#define WIFI_TIMERS_SLP2_ADDRESS                                               (0x70 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_SLP2_RSTMASK                                               0xffe0001f
#define WIFI_TIMERS_SLP2_RESET                                                 0x400000

// 0x74 (WIFI_TIMERS_SLP3)
#define WIFI_TIMERS_SLP3_CAB_AWAKE_ENABLE_LSB                                  16
#define WIFI_TIMERS_SLP3_CAB_AWAKE_ENABLE_MSB                                  16
#define WIFI_TIMERS_SLP3_CAB_AWAKE_ENABLE_MASK                                 0x10000
#define WIFI_TIMERS_SLP3_CAB_AWAKE_ENABLE_GET(x)                               (((x) & WIFI_TIMERS_SLP3_CAB_AWAKE_ENABLE_MASK) >> WIFI_TIMERS_SLP3_CAB_AWAKE_ENABLE_LSB)
#define WIFI_TIMERS_SLP3_CAB_AWAKE_ENABLE_SET(x)                               (((0 | (x)) << WIFI_TIMERS_SLP3_CAB_AWAKE_ENABLE_LSB) & WIFI_TIMERS_SLP3_CAB_AWAKE_ENABLE_MASK)
#define WIFI_TIMERS_SLP3_CAB_AWAKE_ENABLE_RESET                                0x0
#define WIFI_TIMERS_SLP3_CAB_AWAKE_DUR_LSB                                     0
#define WIFI_TIMERS_SLP3_CAB_AWAKE_DUR_MSB                                     15
#define WIFI_TIMERS_SLP3_CAB_AWAKE_DUR_MASK                                    0xffff
#define WIFI_TIMERS_SLP3_CAB_AWAKE_DUR_GET(x)                                  (((x) & WIFI_TIMERS_SLP3_CAB_AWAKE_DUR_MASK) >> WIFI_TIMERS_SLP3_CAB_AWAKE_DUR_LSB)
#define WIFI_TIMERS_SLP3_CAB_AWAKE_DUR_SET(x)                                  (((0 | (x)) << WIFI_TIMERS_SLP3_CAB_AWAKE_DUR_LSB) & WIFI_TIMERS_SLP3_CAB_AWAKE_DUR_MASK)
#define WIFI_TIMERS_SLP3_CAB_AWAKE_DUR_RESET                                   0x5
#define WIFI_TIMERS_SLP3_ADDRESS                                               (0x74 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_SLP3_RSTMASK                                               0x1ffff
#define WIFI_TIMERS_SLP3_RESET                                                 0x5

// 0x78 (WIFI_TIMERS_SLP4)
#define WIFI_TIMERS_SLP4_ASSUME_DTIM2_LSB                                      31
#define WIFI_TIMERS_SLP4_ASSUME_DTIM2_MSB                                      31
#define WIFI_TIMERS_SLP4_ASSUME_DTIM2_MASK                                     0x80000000
#define WIFI_TIMERS_SLP4_ASSUME_DTIM2_GET(x)                                   (((x) & WIFI_TIMERS_SLP4_ASSUME_DTIM2_MASK) >> WIFI_TIMERS_SLP4_ASSUME_DTIM2_LSB)
#define WIFI_TIMERS_SLP4_ASSUME_DTIM2_SET(x)                                   (((0 | (x)) << WIFI_TIMERS_SLP4_ASSUME_DTIM2_LSB) & WIFI_TIMERS_SLP4_ASSUME_DTIM2_MASK)
#define WIFI_TIMERS_SLP4_ASSUME_DTIM2_RESET                                    0x0
#define WIFI_TIMERS_SLP4_CAB2_TIMEOUT_LSB                                      16
#define WIFI_TIMERS_SLP4_CAB2_TIMEOUT_MSB                                      30
#define WIFI_TIMERS_SLP4_CAB2_TIMEOUT_MASK                                     0x7fff0000
#define WIFI_TIMERS_SLP4_CAB2_TIMEOUT_GET(x)                                   (((x) & WIFI_TIMERS_SLP4_CAB2_TIMEOUT_MASK) >> WIFI_TIMERS_SLP4_CAB2_TIMEOUT_LSB)
#define WIFI_TIMERS_SLP4_CAB2_TIMEOUT_SET(x)                                   (((0 | (x)) << WIFI_TIMERS_SLP4_CAB2_TIMEOUT_LSB) & WIFI_TIMERS_SLP4_CAB2_TIMEOUT_MASK)
#define WIFI_TIMERS_SLP4_CAB2_TIMEOUT_RESET                                    0x5
#define WIFI_TIMERS_SLP4_BEACON2_TIMEOUT_LSB                                   0
#define WIFI_TIMERS_SLP4_BEACON2_TIMEOUT_MSB                                   15
#define WIFI_TIMERS_SLP4_BEACON2_TIMEOUT_MASK                                  0xffff
#define WIFI_TIMERS_SLP4_BEACON2_TIMEOUT_GET(x)                                (((x) & WIFI_TIMERS_SLP4_BEACON2_TIMEOUT_MASK) >> WIFI_TIMERS_SLP4_BEACON2_TIMEOUT_LSB)
#define WIFI_TIMERS_SLP4_BEACON2_TIMEOUT_SET(x)                                (((0 | (x)) << WIFI_TIMERS_SLP4_BEACON2_TIMEOUT_LSB) & WIFI_TIMERS_SLP4_BEACON2_TIMEOUT_MASK)
#define WIFI_TIMERS_SLP4_BEACON2_TIMEOUT_RESET                                 0x2
#define WIFI_TIMERS_SLP4_ADDRESS                                               (0x78 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_SLP4_RSTMASK                                               0xffffffff
#define WIFI_TIMERS_SLP4_RESET                                                 0x50002

// 0x7c (WIFI_TIMERS_DIRECT_CONNECT)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_CLK_REQ_DISABLE_LSB                    10
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_CLK_REQ_DISABLE_MSB                    10
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_CLK_REQ_DISABLE_MASK                   0x400
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_CLK_REQ_DISABLE_GET(x)                 (((x) & WIFI_TIMERS_DIRECT_CONNECT_TSF2_CLK_REQ_DISABLE_MASK) >> WIFI_TIMERS_DIRECT_CONNECT_TSF2_CLK_REQ_DISABLE_LSB)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_CLK_REQ_DISABLE_SET(x)                 (((0 | (x)) << WIFI_TIMERS_DIRECT_CONNECT_TSF2_CLK_REQ_DISABLE_LSB) & WIFI_TIMERS_DIRECT_CONNECT_TSF2_CLK_REQ_DISABLE_MASK)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_CLK_REQ_DISABLE_RESET                  0x0
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_CLK_REQ_DISABLE_LSB                    9
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_CLK_REQ_DISABLE_MSB                    9
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_CLK_REQ_DISABLE_MASK                   0x200
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_CLK_REQ_DISABLE_GET(x)                 (((x) & WIFI_TIMERS_DIRECT_CONNECT_TSF1_CLK_REQ_DISABLE_MASK) >> WIFI_TIMERS_DIRECT_CONNECT_TSF1_CLK_REQ_DISABLE_LSB)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_CLK_REQ_DISABLE_SET(x)                 (((0 | (x)) << WIFI_TIMERS_DIRECT_CONNECT_TSF1_CLK_REQ_DISABLE_LSB) & WIFI_TIMERS_DIRECT_CONNECT_TSF1_CLK_REQ_DISABLE_MASK)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_CLK_REQ_DISABLE_RESET                  0x0
#define WIFI_TIMERS_DIRECT_CONNECT_BMISS_CNT_TSF_SEL_LSB                       6
#define WIFI_TIMERS_DIRECT_CONNECT_BMISS_CNT_TSF_SEL_MSB                       6
#define WIFI_TIMERS_DIRECT_CONNECT_BMISS_CNT_TSF_SEL_MASK                      0x40
#define WIFI_TIMERS_DIRECT_CONNECT_BMISS_CNT_TSF_SEL_GET(x)                    (((x) & WIFI_TIMERS_DIRECT_CONNECT_BMISS_CNT_TSF_SEL_MASK) >> WIFI_TIMERS_DIRECT_CONNECT_BMISS_CNT_TSF_SEL_LSB)
#define WIFI_TIMERS_DIRECT_CONNECT_BMISS_CNT_TSF_SEL_SET(x)                    (((0 | (x)) << WIFI_TIMERS_DIRECT_CONNECT_BMISS_CNT_TSF_SEL_LSB) & WIFI_TIMERS_DIRECT_CONNECT_BMISS_CNT_TSF_SEL_MASK)
#define WIFI_TIMERS_DIRECT_CONNECT_BMISS_CNT_TSF_SEL_RESET                     0x0
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_UPDATE_LSB                             3
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_UPDATE_MSB                             3
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_UPDATE_MASK                            0x8
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_UPDATE_GET(x)                          (((x) & WIFI_TIMERS_DIRECT_CONNECT_TSF2_UPDATE_MASK) >> WIFI_TIMERS_DIRECT_CONNECT_TSF2_UPDATE_LSB)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_UPDATE_SET(x)                          (((0 | (x)) << WIFI_TIMERS_DIRECT_CONNECT_TSF2_UPDATE_LSB) & WIFI_TIMERS_DIRECT_CONNECT_TSF2_UPDATE_MASK)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_UPDATE_RESET                           0x0
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_UPDATE_LSB                             2
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_UPDATE_MSB                             2
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_UPDATE_MASK                            0x4
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_UPDATE_GET(x)                          (((x) & WIFI_TIMERS_DIRECT_CONNECT_TSF1_UPDATE_MASK) >> WIFI_TIMERS_DIRECT_CONNECT_TSF1_UPDATE_LSB)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_UPDATE_SET(x)                          (((0 | (x)) << WIFI_TIMERS_DIRECT_CONNECT_TSF1_UPDATE_LSB) & WIFI_TIMERS_DIRECT_CONNECT_TSF1_UPDATE_MASK)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF1_UPDATE_RESET                           0x1
#define WIFI_TIMERS_DIRECT_CONNECT_TS_TSF_SEL_LSB                              1
#define WIFI_TIMERS_DIRECT_CONNECT_TS_TSF_SEL_MSB                              1
#define WIFI_TIMERS_DIRECT_CONNECT_TS_TSF_SEL_MASK                             0x2
#define WIFI_TIMERS_DIRECT_CONNECT_TS_TSF_SEL_GET(x)                           (((x) & WIFI_TIMERS_DIRECT_CONNECT_TS_TSF_SEL_MASK) >> WIFI_TIMERS_DIRECT_CONNECT_TS_TSF_SEL_LSB)
#define WIFI_TIMERS_DIRECT_CONNECT_TS_TSF_SEL_SET(x)                           (((0 | (x)) << WIFI_TIMERS_DIRECT_CONNECT_TS_TSF_SEL_LSB) & WIFI_TIMERS_DIRECT_CONNECT_TS_TSF_SEL_MASK)
#define WIFI_TIMERS_DIRECT_CONNECT_TS_TSF_SEL_RESET                            0x0
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_ENABLE_LSB                             0
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_ENABLE_MSB                             0
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_ENABLE_MASK                            0x1
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_ENABLE_GET(x)                          (((x) & WIFI_TIMERS_DIRECT_CONNECT_TSF2_ENABLE_MASK) >> WIFI_TIMERS_DIRECT_CONNECT_TSF2_ENABLE_LSB)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_ENABLE_SET(x)                          (((0 | (x)) << WIFI_TIMERS_DIRECT_CONNECT_TSF2_ENABLE_LSB) & WIFI_TIMERS_DIRECT_CONNECT_TSF2_ENABLE_MASK)
#define WIFI_TIMERS_DIRECT_CONNECT_TSF2_ENABLE_RESET                           0x0
#define WIFI_TIMERS_DIRECT_CONNECT_ADDRESS                                     (0x7c + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_DIRECT_CONNECT_RSTMASK                                     0x64f
#define WIFI_TIMERS_DIRECT_CONNECT_RESET                                       0x4

// 0x8c (WIFI_TIMERS_RESET_TSF)
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT2_LSB                                    25
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT2_MSB                                    25
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT2_MASK                                   0x2000000
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT2_GET(x)                                 (((x) & WIFI_TIMERS_RESET_TSF_ONE_SHOT2_MASK) >> WIFI_TIMERS_RESET_TSF_ONE_SHOT2_LSB)
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT2_SET(x)                                 (((0 | (x)) << WIFI_TIMERS_RESET_TSF_ONE_SHOT2_LSB) & WIFI_TIMERS_RESET_TSF_ONE_SHOT2_MASK)
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT2_RESET                                  0x0
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT_LSB                                     24
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT_MSB                                     24
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT_MASK                                    0x1000000
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT_GET(x)                                  (((x) & WIFI_TIMERS_RESET_TSF_ONE_SHOT_MASK) >> WIFI_TIMERS_RESET_TSF_ONE_SHOT_LSB)
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT_SET(x)                                  (((0 | (x)) << WIFI_TIMERS_RESET_TSF_ONE_SHOT_LSB) & WIFI_TIMERS_RESET_TSF_ONE_SHOT_MASK)
#define WIFI_TIMERS_RESET_TSF_ONE_SHOT_RESET                                   0x0
#define WIFI_TIMERS_RESET_TSF_ADDRESS                                          (0x8c + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_RESET_TSF_RSTMASK                                          0x3000000
#define WIFI_TIMERS_RESET_TSF_RESET                                            0x0

// 0x90 (WIFI_TIMERS_TSF2_L32)
#define WIFI_TIMERS_TSF2_L32_VALUE_LSB                                         0
#define WIFI_TIMERS_TSF2_L32_VALUE_MSB                                         31
#define WIFI_TIMERS_TSF2_L32_VALUE_MASK                                        0xffffffff
#define WIFI_TIMERS_TSF2_L32_VALUE_GET(x)                                      (((x) & WIFI_TIMERS_TSF2_L32_VALUE_MASK) >> WIFI_TIMERS_TSF2_L32_VALUE_LSB)
#define WIFI_TIMERS_TSF2_L32_VALUE_SET(x)                                      (((0 | (x)) << WIFI_TIMERS_TSF2_L32_VALUE_LSB) & WIFI_TIMERS_TSF2_L32_VALUE_MASK)
#define WIFI_TIMERS_TSF2_L32_VALUE_RESET                                       0xfffffff
#define WIFI_TIMERS_TSF2_L32_ADDRESS                                           (0x90 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_TSF2_L32_RSTMASK                                           0xffffffff
#define WIFI_TIMERS_TSF2_L32_RESET                                             0xfffffff

// 0x94 (WIFI_TIMERS_TSF2_U32)
#define WIFI_TIMERS_TSF2_U32_VALUE_LSB                                         0
#define WIFI_TIMERS_TSF2_U32_VALUE_MSB                                         31
#define WIFI_TIMERS_TSF2_U32_VALUE_MASK                                        0xffffffff
#define WIFI_TIMERS_TSF2_U32_VALUE_GET(x)                                      (((x) & WIFI_TIMERS_TSF2_U32_VALUE_MASK) >> WIFI_TIMERS_TSF2_U32_VALUE_LSB)
#define WIFI_TIMERS_TSF2_U32_VALUE_SET(x)                                      (((0 | (x)) << WIFI_TIMERS_TSF2_U32_VALUE_LSB) & WIFI_TIMERS_TSF2_U32_VALUE_MASK)
#define WIFI_TIMERS_TSF2_U32_VALUE_RESET                                       0xfffffff
#define WIFI_TIMERS_TSF2_U32_ADDRESS                                           (0x94 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_TSF2_U32_RSTMASK                                           0xffffffff
#define WIFI_TIMERS_TSF2_U32_RESET                                             0xfffffff

// 0x98 (WIFI_TIMERS_GENERIC_TIMERS2)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_LSB                                   0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_MSB                                   31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_MASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_GET(x)                                (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_SET(x)                                (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_RESET                                 0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_ADDRESS                                    (0x98 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_RSTMASK                                    0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_RESET                                      0x0

// 0x98 (WIFI_TIMERS_GENERIC_TIMERS2_0)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_0_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_0_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_0_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_0_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_0_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_0_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_0_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_0_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_0_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_0_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_0_ADDRESS                                  (0x98 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_0_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_0_RESET                                    0x0

// 0x9c (WIFI_TIMERS_GENERIC_TIMERS2_1)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_1_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_1_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_1_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_1_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_1_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_1_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_1_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_1_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_1_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_1_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_1_ADDRESS                                  (0x9c + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_1_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_1_RESET                                    0x0

// 0xa0 (WIFI_TIMERS_GENERIC_TIMERS2_2)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_2_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_2_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_2_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_2_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_2_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_2_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_2_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_2_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_2_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_2_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_2_ADDRESS                                  (0xa0 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_2_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_2_RESET                                    0x0

// 0xa4 (WIFI_TIMERS_GENERIC_TIMERS2_3)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_3_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_3_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_3_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_3_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_3_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_3_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_3_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_3_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_3_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_3_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_3_ADDRESS                                  (0xa4 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_3_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_3_RESET                                    0x0

// 0xa8 (WIFI_TIMERS_GENERIC_TIMERS2_4)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_4_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_4_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_4_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_4_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_4_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_4_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_4_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_4_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_4_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_4_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_4_ADDRESS                                  (0xa8 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_4_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_4_RESET                                    0x0

// 0xac (WIFI_TIMERS_GENERIC_TIMERS2_5)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_5_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_5_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_5_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_5_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_5_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_5_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_5_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_5_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_5_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_5_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_5_ADDRESS                                  (0xac + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_5_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_5_RESET                                    0x0

// 0xb0 (WIFI_TIMERS_GENERIC_TIMERS2_6)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_6_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_6_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_6_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_6_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_6_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_6_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_6_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_6_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_6_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_6_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_6_ADDRESS                                  (0xb0 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_6_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_6_RESET                                    0x0

// 0xb4 (WIFI_TIMERS_GENERIC_TIMERS2_7)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_7_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_7_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_7_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_7_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_7_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_7_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_7_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_7_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_7_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_7_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_7_ADDRESS                                  (0xb4 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_7_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_7_RESET                                    0x0

// 0xb8 (WIFI_TIMERS_GENERIC_TIMERS2_8)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_8_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_8_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_8_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_8_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_8_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_8_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_8_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_8_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_8_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_8_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_8_ADDRESS                                  (0xb8 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_8_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_8_RESET                                    0x0

// 0xbc (WIFI_TIMERS_GENERIC_TIMERS2_9)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_9_LSB                                 0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_9_MSB                                 31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_9_MASK                                0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_9_GET(x)                              (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_9_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_9_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_9_SET(x)                              (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_9_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_9_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_9_RESET                               0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_9_ADDRESS                                  (0xbc + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_9_RSTMASK                                  0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_9_RESET                                    0x0

// 0xc0 (WIFI_TIMERS_GENERIC_TIMERS2_10)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_10_LSB                                0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_10_MSB                                31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_10_MASK                               0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_10_GET(x)                             (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_10_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_10_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_10_SET(x)                             (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_10_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_10_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_10_RESET                              0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_10_ADDRESS                                 (0xc0 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_10_RSTMASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_10_RESET                                   0x0

// 0xc4 (WIFI_TIMERS_GENERIC_TIMERS2_11)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_11_LSB                                0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_11_MSB                                31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_11_MASK                               0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_11_GET(x)                             (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_11_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_11_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_11_SET(x)                             (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_11_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_11_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_11_RESET                              0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_11_ADDRESS                                 (0xc4 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_11_RSTMASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_11_RESET                                   0x0

// 0xc8 (WIFI_TIMERS_GENERIC_TIMERS2_12)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_12_LSB                                0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_12_MSB                                31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_12_MASK                               0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_12_GET(x)                             (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_12_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_12_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_12_SET(x)                             (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_12_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_12_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_12_RESET                              0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_12_ADDRESS                                 (0xc8 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_12_RSTMASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_12_RESET                                   0x0

// 0xcc (WIFI_TIMERS_GENERIC_TIMERS2_13)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_13_LSB                                0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_13_MSB                                31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_13_MASK                               0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_13_GET(x)                             (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_13_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_13_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_13_SET(x)                             (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_13_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_13_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_13_RESET                              0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_13_ADDRESS                                 (0xcc + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_13_RSTMASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_13_RESET                                   0x0

// 0xd0 (WIFI_TIMERS_GENERIC_TIMERS2_14)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_14_LSB                                0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_14_MSB                                31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_14_MASK                               0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_14_GET(x)                             (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_14_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_14_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_14_SET(x)                             (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_14_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_14_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_14_RESET                              0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_14_ADDRESS                                 (0xd0 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_14_RSTMASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_14_RESET                                   0x0

// 0xd4 (WIFI_TIMERS_GENERIC_TIMERS2_15)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_15_LSB                                0
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_15_MSB                                31
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_15_MASK                               0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_15_GET(x)                             (((x) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_15_MASK) >> WIFI_TIMERS_GENERIC_TIMERS2_DATA_15_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_15_SET(x)                             (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS2_DATA_15_LSB) & WIFI_TIMERS_GENERIC_TIMERS2_DATA_15_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS2_DATA_15_RESET                              0x0
#define WIFI_TIMERS_GENERIC_TIMERS2_15_ADDRESS                                 (0xd4 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS2_15_RSTMASK                                 0xffffffff
#define WIFI_TIMERS_GENERIC_TIMERS2_15_RESET                                   0x0

// 0xd8 (WIFI_TIMERS_GENERIC_TIMERS_MODE2)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX2_LSB                   12
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX2_MSB                   15
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX2_MASK                  0xf000
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX2_GET(x)                (((x) & WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX2_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX2_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX2_SET(x)                (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX2_LSB) & WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX2_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX2_RESET                 0x0
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX_LSB                    8
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX_MSB                    11
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX_MASK                   0xf00
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX_GET(x)                 (((x) & WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX_SET(x)                 (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX_LSB) & WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_OVERFLOW_INDEX_RESET                  0x0
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_ENABLE_LSB                            0
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_ENABLE_MSB                            7
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_ENABLE_MASK                           0xff
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_ENABLE_GET(x)                         (((x) & WIFI_TIMERS_GENERIC_TIMERS_MODE2_ENABLE_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_MODE2_ENABLE_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_ENABLE_SET(x)                         (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_MODE2_ENABLE_LSB) & WIFI_TIMERS_GENERIC_TIMERS_MODE2_ENABLE_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_ENABLE_RESET                          0x0
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_ADDRESS                               (0xd8 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_RSTMASK                               0xffff
#define WIFI_TIMERS_GENERIC_TIMERS_MODE2_RESET                                 0x0

// 0xdc (WIFI_TIMERS_TSF_THRESHOLD)
#define WIFI_TIMERS_TSF_THRESHOLD_VALUE_LSB                                    0
#define WIFI_TIMERS_TSF_THRESHOLD_VALUE_MSB                                    15
#define WIFI_TIMERS_TSF_THRESHOLD_VALUE_MASK                                   0xffff
#define WIFI_TIMERS_TSF_THRESHOLD_VALUE_GET(x)                                 (((x) & WIFI_TIMERS_TSF_THRESHOLD_VALUE_MASK) >> WIFI_TIMERS_TSF_THRESHOLD_VALUE_LSB)
#define WIFI_TIMERS_TSF_THRESHOLD_VALUE_SET(x)                                 (((0 | (x)) << WIFI_TIMERS_TSF_THRESHOLD_VALUE_LSB) & WIFI_TIMERS_TSF_THRESHOLD_VALUE_MASK)
#define WIFI_TIMERS_TSF_THRESHOLD_VALUE_RESET                                  0xffff
#define WIFI_TIMERS_TSF_THRESHOLD_ADDRESS                                      (0xdc + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_TSF_THRESHOLD_RSTMASK                                      0xffff
#define WIFI_TIMERS_TSF_THRESHOLD_RESET                                        0xffff

// 0xe0 (WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL)
#define WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_VALUE_LSB                           0
#define WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_VALUE_MSB                           15
#define WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_VALUE_MASK                          0xffff
#define WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_VALUE_GET(x)                        (((x) & WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_VALUE_MASK) >> WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_VALUE_LSB)
#define WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_VALUE_SET(x)                        (((0 | (x)) << WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_VALUE_LSB) & WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_VALUE_MASK)
#define WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_VALUE_RESET                         0x0
#define WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_ADDRESS                             (0xe0 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_RSTMASK                             0xffff
#define WIFI_TIMERS_GENERIC_TIMERS_TSF_SEL_RESET                               0x0

// 0xe4 (WIFI_TIMERS_BMISS_TIMEOUT)
#define WIFI_TIMERS_BMISS_TIMEOUT_ENABLE_LSB                                   24
#define WIFI_TIMERS_BMISS_TIMEOUT_ENABLE_MSB                                   24
#define WIFI_TIMERS_BMISS_TIMEOUT_ENABLE_MASK                                  0x1000000
#define WIFI_TIMERS_BMISS_TIMEOUT_ENABLE_GET(x)                                (((x) & WIFI_TIMERS_BMISS_TIMEOUT_ENABLE_MASK) >> WIFI_TIMERS_BMISS_TIMEOUT_ENABLE_LSB)
#define WIFI_TIMERS_BMISS_TIMEOUT_ENABLE_SET(x)                                (((0 | (x)) << WIFI_TIMERS_BMISS_TIMEOUT_ENABLE_LSB) & WIFI_TIMERS_BMISS_TIMEOUT_ENABLE_MASK)
#define WIFI_TIMERS_BMISS_TIMEOUT_ENABLE_RESET                                 0x0
#define WIFI_TIMERS_BMISS_TIMEOUT_VALUE_LSB                                    0
#define WIFI_TIMERS_BMISS_TIMEOUT_VALUE_MSB                                    23
#define WIFI_TIMERS_BMISS_TIMEOUT_VALUE_MASK                                   0xffffff
#define WIFI_TIMERS_BMISS_TIMEOUT_VALUE_GET(x)                                 (((x) & WIFI_TIMERS_BMISS_TIMEOUT_VALUE_MASK) >> WIFI_TIMERS_BMISS_TIMEOUT_VALUE_LSB)
#define WIFI_TIMERS_BMISS_TIMEOUT_VALUE_SET(x)                                 (((0 | (x)) << WIFI_TIMERS_BMISS_TIMEOUT_VALUE_LSB) & WIFI_TIMERS_BMISS_TIMEOUT_VALUE_MASK)
#define WIFI_TIMERS_BMISS_TIMEOUT_VALUE_RESET                                  0xffffff
#define WIFI_TIMERS_BMISS_TIMEOUT_ADDRESS                                      (0xe4 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_BMISS_TIMEOUT_RSTMASK                                      0x1ffffff
#define WIFI_TIMERS_BMISS_TIMEOUT_RESET                                        0xffffff

// 0xe8 (WIFI_TIMERS_BMISS2_TIMEOUT)
#define WIFI_TIMERS_BMISS2_TIMEOUT_ENABLE_LSB                                  24
#define WIFI_TIMERS_BMISS2_TIMEOUT_ENABLE_MSB                                  24
#define WIFI_TIMERS_BMISS2_TIMEOUT_ENABLE_MASK                                 0x1000000
#define WIFI_TIMERS_BMISS2_TIMEOUT_ENABLE_GET(x)                               (((x) & WIFI_TIMERS_BMISS2_TIMEOUT_ENABLE_MASK) >> WIFI_TIMERS_BMISS2_TIMEOUT_ENABLE_LSB)
#define WIFI_TIMERS_BMISS2_TIMEOUT_ENABLE_SET(x)                               (((0 | (x)) << WIFI_TIMERS_BMISS2_TIMEOUT_ENABLE_LSB) & WIFI_TIMERS_BMISS2_TIMEOUT_ENABLE_MASK)
#define WIFI_TIMERS_BMISS2_TIMEOUT_ENABLE_RESET                                0x0
#define WIFI_TIMERS_BMISS2_TIMEOUT_VALUE_LSB                                   0
#define WIFI_TIMERS_BMISS2_TIMEOUT_VALUE_MSB                                   23
#define WIFI_TIMERS_BMISS2_TIMEOUT_VALUE_MASK                                  0xffffff
#define WIFI_TIMERS_BMISS2_TIMEOUT_VALUE_GET(x)                                (((x) & WIFI_TIMERS_BMISS2_TIMEOUT_VALUE_MASK) >> WIFI_TIMERS_BMISS2_TIMEOUT_VALUE_LSB)
#define WIFI_TIMERS_BMISS2_TIMEOUT_VALUE_SET(x)                                (((0 | (x)) << WIFI_TIMERS_BMISS2_TIMEOUT_VALUE_LSB) & WIFI_TIMERS_BMISS2_TIMEOUT_VALUE_MASK)
#define WIFI_TIMERS_BMISS2_TIMEOUT_VALUE_RESET                                 0xffffff
#define WIFI_TIMERS_BMISS2_TIMEOUT_ADDRESS                                     (0xe8 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_BMISS2_TIMEOUT_RSTMASK                                     0x1ffffff
#define WIFI_TIMERS_BMISS2_TIMEOUT_RESET                                       0xffffff

// 0xec (WIFI_TIMERS_QUIET_TIME_2)
#define WIFI_TIMERS_QUIET_TIME_2_DURATION_LSB                                  16
#define WIFI_TIMERS_QUIET_TIME_2_DURATION_MSB                                  31
#define WIFI_TIMERS_QUIET_TIME_2_DURATION_MASK                                 0xffff0000
#define WIFI_TIMERS_QUIET_TIME_2_DURATION_GET(x)                               (((x) & WIFI_TIMERS_QUIET_TIME_2_DURATION_MASK) >> WIFI_TIMERS_QUIET_TIME_2_DURATION_LSB)
#define WIFI_TIMERS_QUIET_TIME_2_DURATION_SET(x)                               (((0 | (x)) << WIFI_TIMERS_QUIET_TIME_2_DURATION_LSB) & WIFI_TIMERS_QUIET_TIME_2_DURATION_MASK)
#define WIFI_TIMERS_QUIET_TIME_2_DURATION_RESET                                0x0
#define WIFI_TIMERS_QUIET_TIME_2_DURATION2_LSB                                 0
#define WIFI_TIMERS_QUIET_TIME_2_DURATION2_MSB                                 15
#define WIFI_TIMERS_QUIET_TIME_2_DURATION2_MASK                                0xffff
#define WIFI_TIMERS_QUIET_TIME_2_DURATION2_GET(x)                              (((x) & WIFI_TIMERS_QUIET_TIME_2_DURATION2_MASK) >> WIFI_TIMERS_QUIET_TIME_2_DURATION2_LSB)
#define WIFI_TIMERS_QUIET_TIME_2_DURATION2_SET(x)                              (((0 | (x)) << WIFI_TIMERS_QUIET_TIME_2_DURATION2_LSB) & WIFI_TIMERS_QUIET_TIME_2_DURATION2_MASK)
#define WIFI_TIMERS_QUIET_TIME_2_DURATION2_RESET                               0x0
#define WIFI_TIMERS_QUIET_TIME_2_ADDRESS                                       (0xec + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_QUIET_TIME_2_RSTMASK                                       0xffffffff
#define WIFI_TIMERS_QUIET_TIME_2_RESET                                         0x0

// 0xf0 (WIFI_TIMERS_HCF_TIMEOUT)
#define WIFI_TIMERS_HCF_TIMEOUT_VALUE_LSB                                      0
#define WIFI_TIMERS_HCF_TIMEOUT_VALUE_MSB                                      15
#define WIFI_TIMERS_HCF_TIMEOUT_VALUE_MASK                                     0xffff
#define WIFI_TIMERS_HCF_TIMEOUT_VALUE_GET(x)                                   (((x) & WIFI_TIMERS_HCF_TIMEOUT_VALUE_MASK) >> WIFI_TIMERS_HCF_TIMEOUT_VALUE_LSB)
#define WIFI_TIMERS_HCF_TIMEOUT_VALUE_SET(x)                                   (((0 | (x)) << WIFI_TIMERS_HCF_TIMEOUT_VALUE_LSB) & WIFI_TIMERS_HCF_TIMEOUT_VALUE_MASK)
#define WIFI_TIMERS_HCF_TIMEOUT_VALUE_RESET                                    0x0
#define WIFI_TIMERS_HCF_TIMEOUT_ADDRESS                                        (0xf0 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_HCF_TIMEOUT_RSTMASK                                        0xffff
#define WIFI_TIMERS_HCF_TIMEOUT_RESET                                          0x0

// 0xf4 (WIFI_TIMERS_MISC_MODE)
#define WIFI_TIMERS_MISC_MODE_FORCE_QUIET_COLLISION_LSB                        18
#define WIFI_TIMERS_MISC_MODE_FORCE_QUIET_COLLISION_MSB                        18
#define WIFI_TIMERS_MISC_MODE_FORCE_QUIET_COLLISION_MASK                       0x40000
#define WIFI_TIMERS_MISC_MODE_FORCE_QUIET_COLLISION_GET(x)                     (((x) & WIFI_TIMERS_MISC_MODE_FORCE_QUIET_COLLISION_MASK) >> WIFI_TIMERS_MISC_MODE_FORCE_QUIET_COLLISION_LSB)
#define WIFI_TIMERS_MISC_MODE_FORCE_QUIET_COLLISION_SET(x)                     (((0 | (x)) << WIFI_TIMERS_MISC_MODE_FORCE_QUIET_COLLISION_LSB) & WIFI_TIMERS_MISC_MODE_FORCE_QUIET_COLLISION_MASK)
#define WIFI_TIMERS_MISC_MODE_FORCE_QUIET_COLLISION_RESET                      0x0
#define WIFI_TIMERS_MISC_MODE_TBTT_PROTECT_LSB                                 0
#define WIFI_TIMERS_MISC_MODE_TBTT_PROTECT_MSB                                 0
#define WIFI_TIMERS_MISC_MODE_TBTT_PROTECT_MASK                                0x1
#define WIFI_TIMERS_MISC_MODE_TBTT_PROTECT_GET(x)                              (((x) & WIFI_TIMERS_MISC_MODE_TBTT_PROTECT_MASK) >> WIFI_TIMERS_MISC_MODE_TBTT_PROTECT_LSB)
#define WIFI_TIMERS_MISC_MODE_TBTT_PROTECT_SET(x)                              (((0 | (x)) << WIFI_TIMERS_MISC_MODE_TBTT_PROTECT_LSB) & WIFI_TIMERS_MISC_MODE_TBTT_PROTECT_MASK)
#define WIFI_TIMERS_MISC_MODE_TBTT_PROTECT_RESET                               0x1
#define WIFI_TIMERS_MISC_MODE_ADDRESS                                          (0xf4 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_MISC_MODE_RSTMASK                                          0x40001
#define WIFI_TIMERS_MISC_MODE_RESET                                            0x1

// 0xf8 (WIFI_TIMERS_USEC_LATENCY)
#define WIFI_TIMERS_USEC_LATENCY_USEC_LSB                                      0
#define WIFI_TIMERS_USEC_LATENCY_USEC_MSB                                      7
#define WIFI_TIMERS_USEC_LATENCY_USEC_MASK                                     0xff
#define WIFI_TIMERS_USEC_LATENCY_USEC_GET(x)                                   (((x) & WIFI_TIMERS_USEC_LATENCY_USEC_MASK) >> WIFI_TIMERS_USEC_LATENCY_USEC_LSB)
#define WIFI_TIMERS_USEC_LATENCY_USEC_SET(x)                                   (((0 | (x)) << WIFI_TIMERS_USEC_LATENCY_USEC_LSB) & WIFI_TIMERS_USEC_LATENCY_USEC_MASK)
#define WIFI_TIMERS_USEC_LATENCY_USEC_RESET                                    0x77
#define WIFI_TIMERS_USEC_LATENCY_ADDRESS                                       (0xf8 + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_USEC_LATENCY_RSTMASK                                       0xff
#define WIFI_TIMERS_USEC_LATENCY_RESET                                         0x77

// 0xfc (WIFI_TIMERS_MAX_CFP_DUR)
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_DENOMINATOR_LSB                      24
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_DENOMINATOR_MSB                      27
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_DENOMINATOR_MASK                     0xf000000
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_DENOMINATOR_GET(x)                   (((x) & WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_DENOMINATOR_MASK) >> WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_DENOMINATOR_LSB)
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_DENOMINATOR_SET(x)                   (((0 | (x)) << WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_DENOMINATOR_LSB) & WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_DENOMINATOR_MASK)
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_DENOMINATOR_RESET                    0x0
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_NUMERATOR_LSB                        16
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_NUMERATOR_MSB                        19
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_NUMERATOR_MASK                       0xf0000
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_NUMERATOR_GET(x)                     (((x) & WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_NUMERATOR_MASK) >> WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_NUMERATOR_LSB)
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_NUMERATOR_SET(x)                     (((0 | (x)) << WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_NUMERATOR_LSB) & WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_NUMERATOR_MASK)
#define WIFI_TIMERS_MAX_CFP_DUR_USEC_FRAC_NUMERATOR_RESET                      0x0
#define WIFI_TIMERS_MAX_CFP_DUR_VALUE_LSB                                      0
#define WIFI_TIMERS_MAX_CFP_DUR_VALUE_MSB                                      15
#define WIFI_TIMERS_MAX_CFP_DUR_VALUE_MASK                                     0xffff
#define WIFI_TIMERS_MAX_CFP_DUR_VALUE_GET(x)                                   (((x) & WIFI_TIMERS_MAX_CFP_DUR_VALUE_MASK) >> WIFI_TIMERS_MAX_CFP_DUR_VALUE_LSB)
#define WIFI_TIMERS_MAX_CFP_DUR_VALUE_SET(x)                                   (((0 | (x)) << WIFI_TIMERS_MAX_CFP_DUR_VALUE_LSB) & WIFI_TIMERS_MAX_CFP_DUR_VALUE_MASK)
#define WIFI_TIMERS_MAX_CFP_DUR_VALUE_RESET                                    0x0
#define WIFI_TIMERS_MAX_CFP_DUR_ADDRESS                                        (0xfc + __WIFI_TIMERS_REG_BASE_ADDRESS)
#define WIFI_TIMERS_MAX_CFP_DUR_RSTMASK                                        0xf0fffff
#define WIFI_TIMERS_MAX_CFP_DUR_RESET                                          0x0



#endif /* _WIFI_TIMERS_REG_H_ */
