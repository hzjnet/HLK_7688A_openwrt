/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _MAC_CRYPTO_REG_H_
#define _MAC_CRYPTO_REG_H_


#ifndef __MAC_CRYPTO_REG_BASE_ADDRESS
#define __MAC_CRYPTO_REG_BASE_ADDRESS (0x3f000)
#endif


// 0x0 (AES_MUTE_MASK_0)
#define AES_MUTE_MASK_0_QOS_LSB                                                16
#define AES_MUTE_MASK_0_QOS_MSB                                                31
#define AES_MUTE_MASK_0_QOS_MASK                                               0xffff0000
#define AES_MUTE_MASK_0_QOS_GET(x)                                             (((x) & AES_MUTE_MASK_0_QOS_MASK) >> AES_MUTE_MASK_0_QOS_LSB)
#define AES_MUTE_MASK_0_QOS_SET(x)                                             (((0 | (x)) << AES_MUTE_MASK_0_QOS_LSB) & AES_MUTE_MASK_0_QOS_MASK)
#define AES_MUTE_MASK_0_QOS_RESET                                              0xf
#define AES_MUTE_MASK_0_FC_LSB                                                 0
#define AES_MUTE_MASK_0_FC_MSB                                                 15
#define AES_MUTE_MASK_0_FC_MASK                                                0xffff
#define AES_MUTE_MASK_0_FC_GET(x)                                              (((x) & AES_MUTE_MASK_0_FC_MASK) >> AES_MUTE_MASK_0_FC_LSB)
#define AES_MUTE_MASK_0_FC_SET(x)                                              (((0 | (x)) << AES_MUTE_MASK_0_FC_LSB) & AES_MUTE_MASK_0_FC_MASK)
#define AES_MUTE_MASK_0_FC_RESET                                               0x478f
#define AES_MUTE_MASK_0_ADDRESS                                                (0x0 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define AES_MUTE_MASK_0_RSTMASK                                                0xffffffff
#define AES_MUTE_MASK_0_RESET                                                  0xf478f

// 0x4 (AES_MUTE_MASK_1)
#define AES_MUTE_MASK_1_FC_MGMT_LSB                                            16
#define AES_MUTE_MASK_1_FC_MGMT_MSB                                            31
#define AES_MUTE_MASK_1_FC_MGMT_MASK                                           0xffff0000
#define AES_MUTE_MASK_1_FC_MGMT_GET(x)                                         (((x) & AES_MUTE_MASK_1_FC_MGMT_MASK) >> AES_MUTE_MASK_1_FC_MGMT_LSB)
#define AES_MUTE_MASK_1_FC_MGMT_SET(x)                                         (((0 | (x)) << AES_MUTE_MASK_1_FC_MGMT_LSB) & AES_MUTE_MASK_1_FC_MGMT_MASK)
#define AES_MUTE_MASK_1_FC_MGMT_RESET                                          0xe7ff
#define AES_MUTE_MASK_1_SEQ_LSB                                                0
#define AES_MUTE_MASK_1_SEQ_MSB                                                15
#define AES_MUTE_MASK_1_SEQ_MASK                                               0xffff
#define AES_MUTE_MASK_1_SEQ_GET(x)                                             (((x) & AES_MUTE_MASK_1_SEQ_MASK) >> AES_MUTE_MASK_1_SEQ_LSB)
#define AES_MUTE_MASK_1_SEQ_SET(x)                                             (((0 | (x)) << AES_MUTE_MASK_1_SEQ_LSB) & AES_MUTE_MASK_1_SEQ_MASK)
#define AES_MUTE_MASK_1_SEQ_RESET                                              0xf
#define AES_MUTE_MASK_1_ADDRESS                                                (0x4 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define AES_MUTE_MASK_1_RSTMASK                                                0xffffffff
#define AES_MUTE_MASK_1_RESET                                                  0xe7ff000f

// 0x8 (MIC_QOS_CONTROL)
#define MIC_QOS_CONTROL_MIC_QOS_CONTROL_LSB                                    0
#define MIC_QOS_CONTROL_MIC_QOS_CONTROL_MSB                                    15
#define MIC_QOS_CONTROL_MIC_QOS_CONTROL_MASK                                   0xffff
#define MIC_QOS_CONTROL_MIC_QOS_CONTROL_GET(x)                                 (((x) & MIC_QOS_CONTROL_MIC_QOS_CONTROL_MASK) >> MIC_QOS_CONTROL_MIC_QOS_CONTROL_LSB)
#define MIC_QOS_CONTROL_MIC_QOS_CONTROL_SET(x)                                 (((0 | (x)) << MIC_QOS_CONTROL_MIC_QOS_CONTROL_LSB) & MIC_QOS_CONTROL_MIC_QOS_CONTROL_MASK)
#define MIC_QOS_CONTROL_MIC_QOS_CONTROL_RESET                                  0xaa
#define MIC_QOS_CONTROL_ADDRESS                                                (0x8 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define MIC_QOS_CONTROL_RSTMASK                                                0xffff
#define MIC_QOS_CONTROL_RESET                                                  0xaa

// 0xc (MIC_QOS_SELECT)
#define MIC_QOS_SELECT_MIC_QOS_SELECT_LSB                                      0
#define MIC_QOS_SELECT_MIC_QOS_SELECT_MSB                                      31
#define MIC_QOS_SELECT_MIC_QOS_SELECT_MASK                                     0xffffffff
#define MIC_QOS_SELECT_MIC_QOS_SELECT_GET(x)                                   (((x) & MIC_QOS_SELECT_MIC_QOS_SELECT_MASK) >> MIC_QOS_SELECT_MIC_QOS_SELECT_LSB)
#define MIC_QOS_SELECT_MIC_QOS_SELECT_SET(x)                                   (((0 | (x)) << MIC_QOS_SELECT_MIC_QOS_SELECT_LSB) & MIC_QOS_SELECT_MIC_QOS_SELECT_MASK)
#define MIC_QOS_SELECT_MIC_QOS_SELECT_RESET                                    0x3210
#define MIC_QOS_SELECT_ADDRESS                                                 (0xc + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define MIC_QOS_SELECT_RSTMASK                                                 0xffffffff
#define MIC_QOS_SELECT_RESET                                                   0x3210

// 0x10 (ALT_AES_MUTE_MASK)
#define ALT_AES_MUTE_MASK_QOS_LSB                                              0
#define ALT_AES_MUTE_MASK_QOS_MSB                                              15
#define ALT_AES_MUTE_MASK_QOS_MASK                                             0xffff
#define ALT_AES_MUTE_MASK_QOS_GET(x)                                           (((x) & ALT_AES_MUTE_MASK_QOS_MASK) >> ALT_AES_MUTE_MASK_QOS_LSB)
#define ALT_AES_MUTE_MASK_QOS_SET(x)                                           (((0 | (x)) << ALT_AES_MUTE_MASK_QOS_LSB) & ALT_AES_MUTE_MASK_QOS_MASK)
#define ALT_AES_MUTE_MASK_QOS_RESET                                            0x8f
#define ALT_AES_MUTE_MASK_ADDRESS                                              (0x10 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define ALT_AES_MUTE_MASK_RSTMASK                                              0xffff
#define ALT_AES_MUTE_MASK_RESET                                                0x8f

// 0x14 (CRYPTO_MISC_CONTROL)
#define CRYPTO_MISC_CONTROL_MGMT_QOS_LSB                                       16
#define CRYPTO_MISC_CONTROL_MGMT_QOS_MSB                                       23
#define CRYPTO_MISC_CONTROL_MGMT_QOS_MASK                                      0xff0000
#define CRYPTO_MISC_CONTROL_MGMT_QOS_GET(x)                                    (((x) & CRYPTO_MISC_CONTROL_MGMT_QOS_MASK) >> CRYPTO_MISC_CONTROL_MGMT_QOS_LSB)
#define CRYPTO_MISC_CONTROL_MGMT_QOS_SET(x)                                    (((0 | (x)) << CRYPTO_MISC_CONTROL_MGMT_QOS_LSB) & CRYPTO_MISC_CONTROL_MGMT_QOS_MASK)
#define CRYPTO_MISC_CONTROL_MGMT_QOS_RESET                                     0x10
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_LSB                               7
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_MSB                               7
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_MASK                              0x80
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_GET(x)                            (((x) & CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_MASK) >> CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_LSB)
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_SET(x)                            (((0 | (x)) << CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_LSB) & CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_MASK)
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_RESET                             0x0
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_EN_LSB                            6
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_EN_MSB                            6
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_EN_MASK                           0x40
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_EN_GET(x)                         (((x) & CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_EN_MASK) >> CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_EN_LSB)
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_EN_SET(x)                         (((0 | (x)) << CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_EN_LSB) & CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_EN_MASK)
#define CRYPTO_MISC_CONTROL_BC_MC_WAPI_MODE2_EN_RESET                          0x0
#define CRYPTO_MISC_CONTROL_NO_CRYPTO_FOR_NON_DATA_PKT_LSB                     5
#define CRYPTO_MISC_CONTROL_NO_CRYPTO_FOR_NON_DATA_PKT_MSB                     5
#define CRYPTO_MISC_CONTROL_NO_CRYPTO_FOR_NON_DATA_PKT_MASK                    0x20
#define CRYPTO_MISC_CONTROL_NO_CRYPTO_FOR_NON_DATA_PKT_GET(x)                  (((x) & CRYPTO_MISC_CONTROL_NO_CRYPTO_FOR_NON_DATA_PKT_MASK) >> CRYPTO_MISC_CONTROL_NO_CRYPTO_FOR_NON_DATA_PKT_LSB)
#define CRYPTO_MISC_CONTROL_NO_CRYPTO_FOR_NON_DATA_PKT_SET(x)                  (((0 | (x)) << CRYPTO_MISC_CONTROL_NO_CRYPTO_FOR_NON_DATA_PKT_LSB) & CRYPTO_MISC_CONTROL_NO_CRYPTO_FOR_NON_DATA_PKT_MASK)
#define CRYPTO_MISC_CONTROL_NO_CRYPTO_FOR_NON_DATA_PKT_RESET                   0x0
#define CRYPTO_MISC_CONTROL_CRPT_MIC_ENABLE_LSB                                4
#define CRYPTO_MISC_CONTROL_CRPT_MIC_ENABLE_MSB                                4
#define CRYPTO_MISC_CONTROL_CRPT_MIC_ENABLE_MASK                               0x10
#define CRYPTO_MISC_CONTROL_CRPT_MIC_ENABLE_GET(x)                             (((x) & CRYPTO_MISC_CONTROL_CRPT_MIC_ENABLE_MASK) >> CRYPTO_MISC_CONTROL_CRPT_MIC_ENABLE_LSB)
#define CRYPTO_MISC_CONTROL_CRPT_MIC_ENABLE_SET(x)                             (((0 | (x)) << CRYPTO_MISC_CONTROL_CRPT_MIC_ENABLE_LSB) & CRYPTO_MISC_CONTROL_CRPT_MIC_ENABLE_MASK)
#define CRYPTO_MISC_CONTROL_CRPT_MIC_ENABLE_RESET                              0x0
#define CRYPTO_MISC_CONTROL_ZEROLEN_CRYPTO_ENABLE_LSB                          3
#define CRYPTO_MISC_CONTROL_ZEROLEN_CRYPTO_ENABLE_MSB                          3
#define CRYPTO_MISC_CONTROL_ZEROLEN_CRYPTO_ENABLE_MASK                         0x8
#define CRYPTO_MISC_CONTROL_ZEROLEN_CRYPTO_ENABLE_GET(x)                       (((x) & CRYPTO_MISC_CONTROL_ZEROLEN_CRYPTO_ENABLE_MASK) >> CRYPTO_MISC_CONTROL_ZEROLEN_CRYPTO_ENABLE_LSB)
#define CRYPTO_MISC_CONTROL_ZEROLEN_CRYPTO_ENABLE_SET(x)                       (((0 | (x)) << CRYPTO_MISC_CONTROL_ZEROLEN_CRYPTO_ENABLE_LSB) & CRYPTO_MISC_CONTROL_ZEROLEN_CRYPTO_ENABLE_MASK)
#define CRYPTO_MISC_CONTROL_ZEROLEN_CRYPTO_ENABLE_RESET                        0x1
#define CRYPTO_MISC_CONTROL_WAPI_ORDER_MASK_LSB                                2
#define CRYPTO_MISC_CONTROL_WAPI_ORDER_MASK_MSB                                2
#define CRYPTO_MISC_CONTROL_WAPI_ORDER_MASK_MASK                               0x4
#define CRYPTO_MISC_CONTROL_WAPI_ORDER_MASK_GET(x)                             (((x) & CRYPTO_MISC_CONTROL_WAPI_ORDER_MASK_MASK) >> CRYPTO_MISC_CONTROL_WAPI_ORDER_MASK_LSB)
#define CRYPTO_MISC_CONTROL_WAPI_ORDER_MASK_SET(x)                             (((0 | (x)) << CRYPTO_MISC_CONTROL_WAPI_ORDER_MASK_LSB) & CRYPTO_MISC_CONTROL_WAPI_ORDER_MASK_MASK)
#define CRYPTO_MISC_CONTROL_WAPI_ORDER_MASK_RESET                              0x0
#define CRYPTO_MISC_CONTROL_SM_STATE_CONTROL_LSB                               1
#define CRYPTO_MISC_CONTROL_SM_STATE_CONTROL_MSB                               1
#define CRYPTO_MISC_CONTROL_SM_STATE_CONTROL_MASK                              0x2
#define CRYPTO_MISC_CONTROL_SM_STATE_CONTROL_GET(x)                            (((x) & CRYPTO_MISC_CONTROL_SM_STATE_CONTROL_MASK) >> CRYPTO_MISC_CONTROL_SM_STATE_CONTROL_LSB)
#define CRYPTO_MISC_CONTROL_SM_STATE_CONTROL_SET(x)                            (((0 | (x)) << CRYPTO_MISC_CONTROL_SM_STATE_CONTROL_LSB) & CRYPTO_MISC_CONTROL_SM_STATE_CONTROL_MASK)
#define CRYPTO_MISC_CONTROL_SM_STATE_CONTROL_RESET                             0x0
#define CRYPTO_MISC_CONTROL_MGMT_CRYPTO_ENABLE_LSB                             0
#define CRYPTO_MISC_CONTROL_MGMT_CRYPTO_ENABLE_MSB                             0
#define CRYPTO_MISC_CONTROL_MGMT_CRYPTO_ENABLE_MASK                            0x1
#define CRYPTO_MISC_CONTROL_MGMT_CRYPTO_ENABLE_GET(x)                          (((x) & CRYPTO_MISC_CONTROL_MGMT_CRYPTO_ENABLE_MASK) >> CRYPTO_MISC_CONTROL_MGMT_CRYPTO_ENABLE_LSB)
#define CRYPTO_MISC_CONTROL_MGMT_CRYPTO_ENABLE_SET(x)                          (((0 | (x)) << CRYPTO_MISC_CONTROL_MGMT_CRYPTO_ENABLE_LSB) & CRYPTO_MISC_CONTROL_MGMT_CRYPTO_ENABLE_MASK)
#define CRYPTO_MISC_CONTROL_MGMT_CRYPTO_ENABLE_RESET                           0x1
#define CRYPTO_MISC_CONTROL_ADDRESS                                            (0x14 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define CRYPTO_MISC_CONTROL_RSTMASK                                            0xff00ff
#define CRYPTO_MISC_CONTROL_RESET                                              0x100009

// 0x18 (CRYPTO_SM_STATES)
#define CRYPTO_SM_STATES_SM_STATES_LSB                                         0
#define CRYPTO_SM_STATES_SM_STATES_MSB                                         31
#define CRYPTO_SM_STATES_SM_STATES_MASK                                        0xffffffff
#define CRYPTO_SM_STATES_SM_STATES_GET(x)                                      (((x) & CRYPTO_SM_STATES_SM_STATES_MASK) >> CRYPTO_SM_STATES_SM_STATES_LSB)
#define CRYPTO_SM_STATES_SM_STATES_SET(x)                                      (((0 | (x)) << CRYPTO_SM_STATES_SM_STATES_LSB) & CRYPTO_SM_STATES_SM_STATES_MASK)
#define CRYPTO_SM_STATES_SM_STATES_RESET                                       0x0
#define CRYPTO_SM_STATES_ADDRESS                                               (0x18 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define CRYPTO_SM_STATES_RSTMASK                                               0xffffffff
#define CRYPTO_SM_STATES_RESET                                                 0x0

// 0x1c (CRYPTO_TESTBUS_SEL)
#define CRYPTO_TESTBUS_SEL_WAPI_TESTSEL_LSB                                    5
#define CRYPTO_TESTBUS_SEL_WAPI_TESTSEL_MSB                                    7
#define CRYPTO_TESTBUS_SEL_WAPI_TESTSEL_MASK                                   0xe0
#define CRYPTO_TESTBUS_SEL_WAPI_TESTSEL_GET(x)                                 (((x) & CRYPTO_TESTBUS_SEL_WAPI_TESTSEL_MASK) >> CRYPTO_TESTBUS_SEL_WAPI_TESTSEL_LSB)
#define CRYPTO_TESTBUS_SEL_WAPI_TESTSEL_SET(x)                                 (((0 | (x)) << CRYPTO_TESTBUS_SEL_WAPI_TESTSEL_LSB) & CRYPTO_TESTBUS_SEL_WAPI_TESTSEL_MASK)
#define CRYPTO_TESTBUS_SEL_WAPI_TESTSEL_RESET                                  0x0
#define CRYPTO_TESTBUS_SEL_TESTBUS_SEL_LSB                                     0
#define CRYPTO_TESTBUS_SEL_TESTBUS_SEL_MSB                                     4
#define CRYPTO_TESTBUS_SEL_TESTBUS_SEL_MASK                                    0x1f
#define CRYPTO_TESTBUS_SEL_TESTBUS_SEL_GET(x)                                  (((x) & CRYPTO_TESTBUS_SEL_TESTBUS_SEL_MASK) >> CRYPTO_TESTBUS_SEL_TESTBUS_SEL_LSB)
#define CRYPTO_TESTBUS_SEL_TESTBUS_SEL_SET(x)                                  (((0 | (x)) << CRYPTO_TESTBUS_SEL_TESTBUS_SEL_LSB) & CRYPTO_TESTBUS_SEL_TESTBUS_SEL_MASK)
#define CRYPTO_TESTBUS_SEL_TESTBUS_SEL_RESET                                   0x0
#define CRYPTO_TESTBUS_SEL_ADDRESS                                             (0x1c + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define CRYPTO_TESTBUS_SEL_RSTMASK                                             0xff
#define CRYPTO_TESTBUS_SEL_RESET                                               0x0

// 0x20 (CRYPTO_TESTBUS_LSB)
#define CRYPTO_TESTBUS_LSB_TESTBUS_LSB                                         0
#define CRYPTO_TESTBUS_LSB_TESTBUS_MSB                                         31
#define CRYPTO_TESTBUS_LSB_TESTBUS_MASK                                        0xffffffff
#define CRYPTO_TESTBUS_LSB_TESTBUS_GET(x)                                      (((x) & CRYPTO_TESTBUS_LSB_TESTBUS_MASK) >> CRYPTO_TESTBUS_LSB_TESTBUS_LSB)
#define CRYPTO_TESTBUS_LSB_TESTBUS_SET(x)                                      (((0 | (x)) << CRYPTO_TESTBUS_LSB_TESTBUS_LSB) & CRYPTO_TESTBUS_LSB_TESTBUS_MASK)
#define CRYPTO_TESTBUS_LSB_TESTBUS_RESET                                       0x0
#define CRYPTO_TESTBUS_LSB_ADDRESS                                             (0x20 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define CRYPTO_TESTBUS_LSB_RSTMASK                                             0xffffffff
#define CRYPTO_TESTBUS_LSB_RESET                                               0x0

// 0x24 (CRYPTO_TESTBUS_MSB)
#define CRYPTO_TESTBUS_MSB_TESTBUS_LSB                                         0
#define CRYPTO_TESTBUS_MSB_TESTBUS_MSB                                         7
#define CRYPTO_TESTBUS_MSB_TESTBUS_MASK                                        0xff
#define CRYPTO_TESTBUS_MSB_TESTBUS_GET(x)                                      (((x) & CRYPTO_TESTBUS_MSB_TESTBUS_MASK) >> CRYPTO_TESTBUS_MSB_TESTBUS_LSB)
#define CRYPTO_TESTBUS_MSB_TESTBUS_SET(x)                                      (((0 | (x)) << CRYPTO_TESTBUS_MSB_TESTBUS_LSB) & CRYPTO_TESTBUS_MSB_TESTBUS_MASK)
#define CRYPTO_TESTBUS_MSB_TESTBUS_RESET                                       0x0
#define CRYPTO_TESTBUS_MSB_ADDRESS                                             (0x24 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define CRYPTO_TESTBUS_MSB_RSTMASK                                             0xff
#define CRYPTO_TESTBUS_MSB_RESET                                               0x0

// 0x28 (DEBUG_INTERRUPT_STATUS)
#define DEBUG_INTERRUPT_STATUS_INTERRUPT_STATUS_LSB                            0
#define DEBUG_INTERRUPT_STATUS_INTERRUPT_STATUS_MSB                            15
#define DEBUG_INTERRUPT_STATUS_INTERRUPT_STATUS_MASK                           0xffff
#define DEBUG_INTERRUPT_STATUS_INTERRUPT_STATUS_GET(x)                         (((x) & DEBUG_INTERRUPT_STATUS_INTERRUPT_STATUS_MASK) >> DEBUG_INTERRUPT_STATUS_INTERRUPT_STATUS_LSB)
#define DEBUG_INTERRUPT_STATUS_INTERRUPT_STATUS_SET(x)                         (((0 | (x)) << DEBUG_INTERRUPT_STATUS_INTERRUPT_STATUS_LSB) & DEBUG_INTERRUPT_STATUS_INTERRUPT_STATUS_MASK)
#define DEBUG_INTERRUPT_STATUS_INTERRUPT_STATUS_RESET                          0x0
#define DEBUG_INTERRUPT_STATUS_ADDRESS                                         (0x28 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define DEBUG_INTERRUPT_STATUS_RSTMASK                                         0xffff
#define DEBUG_INTERRUPT_STATUS_RESET                                           0x0

// 0x2c (CRYPTO_CLOCK_GATE_ENABLE)
#define CRYPTO_CLOCK_GATE_ENABLE_TKIP_CLK_GATE_ENABLE_LSB                      6
#define CRYPTO_CLOCK_GATE_ENABLE_TKIP_CLK_GATE_ENABLE_MSB                      6
#define CRYPTO_CLOCK_GATE_ENABLE_TKIP_CLK_GATE_ENABLE_MASK                     0x40
#define CRYPTO_CLOCK_GATE_ENABLE_TKIP_CLK_GATE_ENABLE_GET(x)                   (((x) & CRYPTO_CLOCK_GATE_ENABLE_TKIP_CLK_GATE_ENABLE_MASK) >> CRYPTO_CLOCK_GATE_ENABLE_TKIP_CLK_GATE_ENABLE_LSB)
#define CRYPTO_CLOCK_GATE_ENABLE_TKIP_CLK_GATE_ENABLE_SET(x)                   (((0 | (x)) << CRYPTO_CLOCK_GATE_ENABLE_TKIP_CLK_GATE_ENABLE_LSB) & CRYPTO_CLOCK_GATE_ENABLE_TKIP_CLK_GATE_ENABLE_MASK)
#define CRYPTO_CLOCK_GATE_ENABLE_TKIP_CLK_GATE_ENABLE_RESET                    0x0
#define CRYPTO_CLOCK_GATE_ENABLE_RC4_CLK_GATE_ENABLE_LSB                       5
#define CRYPTO_CLOCK_GATE_ENABLE_RC4_CLK_GATE_ENABLE_MSB                       5
#define CRYPTO_CLOCK_GATE_ENABLE_RC4_CLK_GATE_ENABLE_MASK                      0x20
#define CRYPTO_CLOCK_GATE_ENABLE_RC4_CLK_GATE_ENABLE_GET(x)                    (((x) & CRYPTO_CLOCK_GATE_ENABLE_RC4_CLK_GATE_ENABLE_MASK) >> CRYPTO_CLOCK_GATE_ENABLE_RC4_CLK_GATE_ENABLE_LSB)
#define CRYPTO_CLOCK_GATE_ENABLE_RC4_CLK_GATE_ENABLE_SET(x)                    (((0 | (x)) << CRYPTO_CLOCK_GATE_ENABLE_RC4_CLK_GATE_ENABLE_LSB) & CRYPTO_CLOCK_GATE_ENABLE_RC4_CLK_GATE_ENABLE_MASK)
#define CRYPTO_CLOCK_GATE_ENABLE_RC4_CLK_GATE_ENABLE_RESET                     0x0
#define CRYPTO_CLOCK_GATE_ENABLE_WAPI_CLK_GATE_ENABLE_LSB                      4
#define CRYPTO_CLOCK_GATE_ENABLE_WAPI_CLK_GATE_ENABLE_MSB                      4
#define CRYPTO_CLOCK_GATE_ENABLE_WAPI_CLK_GATE_ENABLE_MASK                     0x10
#define CRYPTO_CLOCK_GATE_ENABLE_WAPI_CLK_GATE_ENABLE_GET(x)                   (((x) & CRYPTO_CLOCK_GATE_ENABLE_WAPI_CLK_GATE_ENABLE_MASK) >> CRYPTO_CLOCK_GATE_ENABLE_WAPI_CLK_GATE_ENABLE_LSB)
#define CRYPTO_CLOCK_GATE_ENABLE_WAPI_CLK_GATE_ENABLE_SET(x)                   (((0 | (x)) << CRYPTO_CLOCK_GATE_ENABLE_WAPI_CLK_GATE_ENABLE_LSB) & CRYPTO_CLOCK_GATE_ENABLE_WAPI_CLK_GATE_ENABLE_MASK)
#define CRYPTO_CLOCK_GATE_ENABLE_WAPI_CLK_GATE_ENABLE_RESET                    0x0
#define CRYPTO_CLOCK_GATE_ENABLE_AES2_CLK_GATE_ENABLE_LSB                      3
#define CRYPTO_CLOCK_GATE_ENABLE_AES2_CLK_GATE_ENABLE_MSB                      3
#define CRYPTO_CLOCK_GATE_ENABLE_AES2_CLK_GATE_ENABLE_MASK                     0x8
#define CRYPTO_CLOCK_GATE_ENABLE_AES2_CLK_GATE_ENABLE_GET(x)                   (((x) & CRYPTO_CLOCK_GATE_ENABLE_AES2_CLK_GATE_ENABLE_MASK) >> CRYPTO_CLOCK_GATE_ENABLE_AES2_CLK_GATE_ENABLE_LSB)
#define CRYPTO_CLOCK_GATE_ENABLE_AES2_CLK_GATE_ENABLE_SET(x)                   (((0 | (x)) << CRYPTO_CLOCK_GATE_ENABLE_AES2_CLK_GATE_ENABLE_LSB) & CRYPTO_CLOCK_GATE_ENABLE_AES2_CLK_GATE_ENABLE_MASK)
#define CRYPTO_CLOCK_GATE_ENABLE_AES2_CLK_GATE_ENABLE_RESET                    0x0
#define CRYPTO_CLOCK_GATE_ENABLE_AES1_CLK_GATE_ENABLE_LSB                      2
#define CRYPTO_CLOCK_GATE_ENABLE_AES1_CLK_GATE_ENABLE_MSB                      2
#define CRYPTO_CLOCK_GATE_ENABLE_AES1_CLK_GATE_ENABLE_MASK                     0x4
#define CRYPTO_CLOCK_GATE_ENABLE_AES1_CLK_GATE_ENABLE_GET(x)                   (((x) & CRYPTO_CLOCK_GATE_ENABLE_AES1_CLK_GATE_ENABLE_MASK) >> CRYPTO_CLOCK_GATE_ENABLE_AES1_CLK_GATE_ENABLE_LSB)
#define CRYPTO_CLOCK_GATE_ENABLE_AES1_CLK_GATE_ENABLE_SET(x)                   (((0 | (x)) << CRYPTO_CLOCK_GATE_ENABLE_AES1_CLK_GATE_ENABLE_LSB) & CRYPTO_CLOCK_GATE_ENABLE_AES1_CLK_GATE_ENABLE_MASK)
#define CRYPTO_CLOCK_GATE_ENABLE_AES1_CLK_GATE_ENABLE_RESET                    0x0
#define CRYPTO_CLOCK_GATE_ENABLE_AES0_CLK_GATE_ENABLE_LSB                      1
#define CRYPTO_CLOCK_GATE_ENABLE_AES0_CLK_GATE_ENABLE_MSB                      1
#define CRYPTO_CLOCK_GATE_ENABLE_AES0_CLK_GATE_ENABLE_MASK                     0x2
#define CRYPTO_CLOCK_GATE_ENABLE_AES0_CLK_GATE_ENABLE_GET(x)                   (((x) & CRYPTO_CLOCK_GATE_ENABLE_AES0_CLK_GATE_ENABLE_MASK) >> CRYPTO_CLOCK_GATE_ENABLE_AES0_CLK_GATE_ENABLE_LSB)
#define CRYPTO_CLOCK_GATE_ENABLE_AES0_CLK_GATE_ENABLE_SET(x)                   (((0 | (x)) << CRYPTO_CLOCK_GATE_ENABLE_AES0_CLK_GATE_ENABLE_LSB) & CRYPTO_CLOCK_GATE_ENABLE_AES0_CLK_GATE_ENABLE_MASK)
#define CRYPTO_CLOCK_GATE_ENABLE_AES0_CLK_GATE_ENABLE_RESET                    0x0
#define CRYPTO_CLOCK_GATE_ENABLE_AES_CLK_GATE_ENABLE_LSB                       0
#define CRYPTO_CLOCK_GATE_ENABLE_AES_CLK_GATE_ENABLE_MSB                       0
#define CRYPTO_CLOCK_GATE_ENABLE_AES_CLK_GATE_ENABLE_MASK                      0x1
#define CRYPTO_CLOCK_GATE_ENABLE_AES_CLK_GATE_ENABLE_GET(x)                    (((x) & CRYPTO_CLOCK_GATE_ENABLE_AES_CLK_GATE_ENABLE_MASK) >> CRYPTO_CLOCK_GATE_ENABLE_AES_CLK_GATE_ENABLE_LSB)
#define CRYPTO_CLOCK_GATE_ENABLE_AES_CLK_GATE_ENABLE_SET(x)                    (((0 | (x)) << CRYPTO_CLOCK_GATE_ENABLE_AES_CLK_GATE_ENABLE_LSB) & CRYPTO_CLOCK_GATE_ENABLE_AES_CLK_GATE_ENABLE_MASK)
#define CRYPTO_CLOCK_GATE_ENABLE_AES_CLK_GATE_ENABLE_RESET                     0x0
#define CRYPTO_CLOCK_GATE_ENABLE_ADDRESS                                       (0x2c + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define CRYPTO_CLOCK_GATE_ENABLE_RSTMASK                                       0x7f
#define CRYPTO_CLOCK_GATE_ENABLE_RESET                                         0x0

// 0x30 (WATCHDOG_TIMER_VALUE)
#define WATCHDOG_TIMER_VALUE_WATCHDOG_VALUE_LSB                                0
#define WATCHDOG_TIMER_VALUE_WATCHDOG_VALUE_MSB                                31
#define WATCHDOG_TIMER_VALUE_WATCHDOG_VALUE_MASK                               0xffffffff
#define WATCHDOG_TIMER_VALUE_WATCHDOG_VALUE_GET(x)                             (((x) & WATCHDOG_TIMER_VALUE_WATCHDOG_VALUE_MASK) >> WATCHDOG_TIMER_VALUE_WATCHDOG_VALUE_LSB)
#define WATCHDOG_TIMER_VALUE_WATCHDOG_VALUE_SET(x)                             (((0 | (x)) << WATCHDOG_TIMER_VALUE_WATCHDOG_VALUE_LSB) & WATCHDOG_TIMER_VALUE_WATCHDOG_VALUE_MASK)
#define WATCHDOG_TIMER_VALUE_WATCHDOG_VALUE_RESET                              0x0
#define WATCHDOG_TIMER_VALUE_ADDRESS                                           (0x30 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define WATCHDOG_TIMER_VALUE_RSTMASK                                           0xffffffff
#define WATCHDOG_TIMER_VALUE_RESET                                             0x0

// 0x34 (DBG_CRYPTO_COUNTERS_CONTROL)
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_ABORT_CNT_ENABLE_LSB                    7
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_ABORT_CNT_ENABLE_MSB                    7
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_ABORT_CNT_ENABLE_MASK                   0x80
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_ABORT_CNT_ENABLE_GET(x)                 (((x) & DBG_CRYPTO_COUNTERS_CONTROL_RX_ABORT_CNT_ENABLE_MASK) >> DBG_CRYPTO_COUNTERS_CONTROL_RX_ABORT_CNT_ENABLE_LSB)
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_ABORT_CNT_ENABLE_SET(x)                 (((0 | (x)) << DBG_CRYPTO_COUNTERS_CONTROL_RX_ABORT_CNT_ENABLE_LSB) & DBG_CRYPTO_COUNTERS_CONTROL_RX_ABORT_CNT_ENABLE_MASK)
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_ABORT_CNT_ENABLE_RESET                  0x0
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_DECR_FRAME_CNT_ENABLE_LSB               6
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_DECR_FRAME_CNT_ENABLE_MSB               6
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_DECR_FRAME_CNT_ENABLE_MASK              0x40
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_DECR_FRAME_CNT_ENABLE_GET(x)            (((x) & DBG_CRYPTO_COUNTERS_CONTROL_RX_DECR_FRAME_CNT_ENABLE_MASK) >> DBG_CRYPTO_COUNTERS_CONTROL_RX_DECR_FRAME_CNT_ENABLE_LSB)
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_DECR_FRAME_CNT_ENABLE_SET(x)            (((0 | (x)) << DBG_CRYPTO_COUNTERS_CONTROL_RX_DECR_FRAME_CNT_ENABLE_LSB) & DBG_CRYPTO_COUNTERS_CONTROL_RX_DECR_FRAME_CNT_ENABLE_MASK)
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_DECR_FRAME_CNT_ENABLE_RESET             0x0
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_MPDU_CNT_ENABLE_LSB                     5
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_MPDU_CNT_ENABLE_MSB                     5
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_MPDU_CNT_ENABLE_MASK                    0x20
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_MPDU_CNT_ENABLE_GET(x)                  (((x) & DBG_CRYPTO_COUNTERS_CONTROL_RX_MPDU_CNT_ENABLE_MASK) >> DBG_CRYPTO_COUNTERS_CONTROL_RX_MPDU_CNT_ENABLE_LSB)
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_MPDU_CNT_ENABLE_SET(x)                  (((0 | (x)) << DBG_CRYPTO_COUNTERS_CONTROL_RX_MPDU_CNT_ENABLE_LSB) & DBG_CRYPTO_COUNTERS_CONTROL_RX_MPDU_CNT_ENABLE_MASK)
#define DBG_CRYPTO_COUNTERS_CONTROL_RX_MPDU_CNT_ENABLE_RESET                   0x1
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ABORT_CNT_ENABLE_LSB                    4
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ABORT_CNT_ENABLE_MSB                    4
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ABORT_CNT_ENABLE_MASK                   0x10
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ABORT_CNT_ENABLE_GET(x)                 (((x) & DBG_CRYPTO_COUNTERS_CONTROL_TX_ABORT_CNT_ENABLE_MASK) >> DBG_CRYPTO_COUNTERS_CONTROL_TX_ABORT_CNT_ENABLE_LSB)
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ABORT_CNT_ENABLE_SET(x)                 (((0 | (x)) << DBG_CRYPTO_COUNTERS_CONTROL_TX_ABORT_CNT_ENABLE_LSB) & DBG_CRYPTO_COUNTERS_CONTROL_TX_ABORT_CNT_ENABLE_MASK)
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ABORT_CNT_ENABLE_RESET                  0x0
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_REQ_CNT_ENABLE_LSB                3
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_REQ_CNT_ENABLE_MSB                3
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_REQ_CNT_ENABLE_MASK               0x8
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_REQ_CNT_ENABLE_GET(x)             (((x) & DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_REQ_CNT_ENABLE_MASK) >> DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_REQ_CNT_ENABLE_LSB)
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_REQ_CNT_ENABLE_SET(x)             (((0 | (x)) << DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_REQ_CNT_ENABLE_LSB) & DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_REQ_CNT_ENABLE_MASK)
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_REQ_CNT_ENABLE_RESET              0x0
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_RCV_CNT_ENABLE_LSB                2
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_RCV_CNT_ENABLE_MSB                2
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_RCV_CNT_ENABLE_MASK               0x4
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_RCV_CNT_ENABLE_GET(x)             (((x) & DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_RCV_CNT_ENABLE_MASK) >> DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_RCV_CNT_ENABLE_LSB)
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_RCV_CNT_ENABLE_SET(x)             (((0 | (x)) << DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_RCV_CNT_ENABLE_LSB) & DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_RCV_CNT_ENABLE_MASK)
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_FLUSH_RCV_CNT_ENABLE_RESET              0x0
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ENCR_FRAME_CNT_ENABLE_LSB               1
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ENCR_FRAME_CNT_ENABLE_MSB               1
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ENCR_FRAME_CNT_ENABLE_MASK              0x2
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ENCR_FRAME_CNT_ENABLE_GET(x)            (((x) & DBG_CRYPTO_COUNTERS_CONTROL_TX_ENCR_FRAME_CNT_ENABLE_MASK) >> DBG_CRYPTO_COUNTERS_CONTROL_TX_ENCR_FRAME_CNT_ENABLE_LSB)
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ENCR_FRAME_CNT_ENABLE_SET(x)            (((0 | (x)) << DBG_CRYPTO_COUNTERS_CONTROL_TX_ENCR_FRAME_CNT_ENABLE_LSB) & DBG_CRYPTO_COUNTERS_CONTROL_TX_ENCR_FRAME_CNT_ENABLE_MASK)
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_ENCR_FRAME_CNT_ENABLE_RESET             0x0
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_MPDU_CNT_ENABLE_LSB                     0
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_MPDU_CNT_ENABLE_MSB                     0
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_MPDU_CNT_ENABLE_MASK                    0x1
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_MPDU_CNT_ENABLE_GET(x)                  (((x) & DBG_CRYPTO_COUNTERS_CONTROL_TX_MPDU_CNT_ENABLE_MASK) >> DBG_CRYPTO_COUNTERS_CONTROL_TX_MPDU_CNT_ENABLE_LSB)
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_MPDU_CNT_ENABLE_SET(x)                  (((0 | (x)) << DBG_CRYPTO_COUNTERS_CONTROL_TX_MPDU_CNT_ENABLE_LSB) & DBG_CRYPTO_COUNTERS_CONTROL_TX_MPDU_CNT_ENABLE_MASK)
#define DBG_CRYPTO_COUNTERS_CONTROL_TX_MPDU_CNT_ENABLE_RESET                   0x1
#define DBG_CRYPTO_COUNTERS_CONTROL_ADDRESS                                    (0x34 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define DBG_CRYPTO_COUNTERS_CONTROL_RSTMASK                                    0xff
#define DBG_CRYPTO_COUNTERS_CONTROL_RESET                                      0x21

// 0x38 (DBG_TX_MPDU_CNT)
#define DBG_TX_MPDU_CNT_TX_MPDU_CNT_LSB                                        0
#define DBG_TX_MPDU_CNT_TX_MPDU_CNT_MSB                                        31
#define DBG_TX_MPDU_CNT_TX_MPDU_CNT_MASK                                       0xffffffff
#define DBG_TX_MPDU_CNT_TX_MPDU_CNT_GET(x)                                     (((x) & DBG_TX_MPDU_CNT_TX_MPDU_CNT_MASK) >> DBG_TX_MPDU_CNT_TX_MPDU_CNT_LSB)
#define DBG_TX_MPDU_CNT_TX_MPDU_CNT_SET(x)                                     (((0 | (x)) << DBG_TX_MPDU_CNT_TX_MPDU_CNT_LSB) & DBG_TX_MPDU_CNT_TX_MPDU_CNT_MASK)
#define DBG_TX_MPDU_CNT_TX_MPDU_CNT_RESET                                      0x0
#define DBG_TX_MPDU_CNT_ADDRESS                                                (0x38 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define DBG_TX_MPDU_CNT_RSTMASK                                                0xffffffff
#define DBG_TX_MPDU_CNT_RESET                                                  0x0

// 0x3c (DBG_TX_ENCR_FRAME_CNT)
#define DBG_TX_ENCR_FRAME_CNT_TX_ENCR_FRAME_CNT_LSB                            0
#define DBG_TX_ENCR_FRAME_CNT_TX_ENCR_FRAME_CNT_MSB                            31
#define DBG_TX_ENCR_FRAME_CNT_TX_ENCR_FRAME_CNT_MASK                           0xffffffff
#define DBG_TX_ENCR_FRAME_CNT_TX_ENCR_FRAME_CNT_GET(x)                         (((x) & DBG_TX_ENCR_FRAME_CNT_TX_ENCR_FRAME_CNT_MASK) >> DBG_TX_ENCR_FRAME_CNT_TX_ENCR_FRAME_CNT_LSB)
#define DBG_TX_ENCR_FRAME_CNT_TX_ENCR_FRAME_CNT_SET(x)                         (((0 | (x)) << DBG_TX_ENCR_FRAME_CNT_TX_ENCR_FRAME_CNT_LSB) & DBG_TX_ENCR_FRAME_CNT_TX_ENCR_FRAME_CNT_MASK)
#define DBG_TX_ENCR_FRAME_CNT_TX_ENCR_FRAME_CNT_RESET                          0x0
#define DBG_TX_ENCR_FRAME_CNT_ADDRESS                                          (0x3c + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define DBG_TX_ENCR_FRAME_CNT_RSTMASK                                          0xffffffff
#define DBG_TX_ENCR_FRAME_CNT_RESET                                            0x0

// 0x40 (DBG_TX_FLUSH_RCV_CNT)
#define DBG_TX_FLUSH_RCV_CNT_TX_FLUSH_RCV_CNT_LSB                              0
#define DBG_TX_FLUSH_RCV_CNT_TX_FLUSH_RCV_CNT_MSB                              15
#define DBG_TX_FLUSH_RCV_CNT_TX_FLUSH_RCV_CNT_MASK                             0xffff
#define DBG_TX_FLUSH_RCV_CNT_TX_FLUSH_RCV_CNT_GET(x)                           (((x) & DBG_TX_FLUSH_RCV_CNT_TX_FLUSH_RCV_CNT_MASK) >> DBG_TX_FLUSH_RCV_CNT_TX_FLUSH_RCV_CNT_LSB)
#define DBG_TX_FLUSH_RCV_CNT_TX_FLUSH_RCV_CNT_SET(x)                           (((0 | (x)) << DBG_TX_FLUSH_RCV_CNT_TX_FLUSH_RCV_CNT_LSB) & DBG_TX_FLUSH_RCV_CNT_TX_FLUSH_RCV_CNT_MASK)
#define DBG_TX_FLUSH_RCV_CNT_TX_FLUSH_RCV_CNT_RESET                            0x0
#define DBG_TX_FLUSH_RCV_CNT_ADDRESS                                           (0x40 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define DBG_TX_FLUSH_RCV_CNT_RSTMASK                                           0xffff
#define DBG_TX_FLUSH_RCV_CNT_RESET                                             0x0

// 0x44 (DBG_TX_FLUSH_REQ_CNT)
#define DBG_TX_FLUSH_REQ_CNT_TX_FLUSH_REQ_CNT_LSB                              0
#define DBG_TX_FLUSH_REQ_CNT_TX_FLUSH_REQ_CNT_MSB                              15
#define DBG_TX_FLUSH_REQ_CNT_TX_FLUSH_REQ_CNT_MASK                             0xffff
#define DBG_TX_FLUSH_REQ_CNT_TX_FLUSH_REQ_CNT_GET(x)                           (((x) & DBG_TX_FLUSH_REQ_CNT_TX_FLUSH_REQ_CNT_MASK) >> DBG_TX_FLUSH_REQ_CNT_TX_FLUSH_REQ_CNT_LSB)
#define DBG_TX_FLUSH_REQ_CNT_TX_FLUSH_REQ_CNT_SET(x)                           (((0 | (x)) << DBG_TX_FLUSH_REQ_CNT_TX_FLUSH_REQ_CNT_LSB) & DBG_TX_FLUSH_REQ_CNT_TX_FLUSH_REQ_CNT_MASK)
#define DBG_TX_FLUSH_REQ_CNT_TX_FLUSH_REQ_CNT_RESET                            0x0
#define DBG_TX_FLUSH_REQ_CNT_ADDRESS                                           (0x44 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define DBG_TX_FLUSH_REQ_CNT_RSTMASK                                           0xffff
#define DBG_TX_FLUSH_REQ_CNT_RESET                                             0x0

// 0x48 (DBG_TX_ABORT_CNT)
#define DBG_TX_ABORT_CNT_TX_ABORT_CNT_LSB                                      0
#define DBG_TX_ABORT_CNT_TX_ABORT_CNT_MSB                                      15
#define DBG_TX_ABORT_CNT_TX_ABORT_CNT_MASK                                     0xffff
#define DBG_TX_ABORT_CNT_TX_ABORT_CNT_GET(x)                                   (((x) & DBG_TX_ABORT_CNT_TX_ABORT_CNT_MASK) >> DBG_TX_ABORT_CNT_TX_ABORT_CNT_LSB)
#define DBG_TX_ABORT_CNT_TX_ABORT_CNT_SET(x)                                   (((0 | (x)) << DBG_TX_ABORT_CNT_TX_ABORT_CNT_LSB) & DBG_TX_ABORT_CNT_TX_ABORT_CNT_MASK)
#define DBG_TX_ABORT_CNT_TX_ABORT_CNT_RESET                                    0x0
#define DBG_TX_ABORT_CNT_ADDRESS                                               (0x48 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define DBG_TX_ABORT_CNT_RSTMASK                                               0xffff
#define DBG_TX_ABORT_CNT_RESET                                                 0x0

// 0x4c (DBG_RX_MPDU_CNT)
#define DBG_RX_MPDU_CNT_RX_MPDU_CNT_LSB                                        0
#define DBG_RX_MPDU_CNT_RX_MPDU_CNT_MSB                                        31
#define DBG_RX_MPDU_CNT_RX_MPDU_CNT_MASK                                       0xffffffff
#define DBG_RX_MPDU_CNT_RX_MPDU_CNT_GET(x)                                     (((x) & DBG_RX_MPDU_CNT_RX_MPDU_CNT_MASK) >> DBG_RX_MPDU_CNT_RX_MPDU_CNT_LSB)
#define DBG_RX_MPDU_CNT_RX_MPDU_CNT_SET(x)                                     (((0 | (x)) << DBG_RX_MPDU_CNT_RX_MPDU_CNT_LSB) & DBG_RX_MPDU_CNT_RX_MPDU_CNT_MASK)
#define DBG_RX_MPDU_CNT_RX_MPDU_CNT_RESET                                      0x0
#define DBG_RX_MPDU_CNT_ADDRESS                                                (0x4c + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define DBG_RX_MPDU_CNT_RSTMASK                                                0xffffffff
#define DBG_RX_MPDU_CNT_RESET                                                  0x0

// 0x50 (DBG_RX_DECR_FRAME_CNT)
#define DBG_RX_DECR_FRAME_CNT_RX_DECR_FRAME_CNT_LSB                            0
#define DBG_RX_DECR_FRAME_CNT_RX_DECR_FRAME_CNT_MSB                            31
#define DBG_RX_DECR_FRAME_CNT_RX_DECR_FRAME_CNT_MASK                           0xffffffff
#define DBG_RX_DECR_FRAME_CNT_RX_DECR_FRAME_CNT_GET(x)                         (((x) & DBG_RX_DECR_FRAME_CNT_RX_DECR_FRAME_CNT_MASK) >> DBG_RX_DECR_FRAME_CNT_RX_DECR_FRAME_CNT_LSB)
#define DBG_RX_DECR_FRAME_CNT_RX_DECR_FRAME_CNT_SET(x)                         (((0 | (x)) << DBG_RX_DECR_FRAME_CNT_RX_DECR_FRAME_CNT_LSB) & DBG_RX_DECR_FRAME_CNT_RX_DECR_FRAME_CNT_MASK)
#define DBG_RX_DECR_FRAME_CNT_RX_DECR_FRAME_CNT_RESET                          0x0
#define DBG_RX_DECR_FRAME_CNT_ADDRESS                                          (0x50 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define DBG_RX_DECR_FRAME_CNT_RSTMASK                                          0xffffffff
#define DBG_RX_DECR_FRAME_CNT_RESET                                            0x0

// 0x54 (DBG_RX_ABORT_CNT)
#define DBG_RX_ABORT_CNT_RX_ABORT_CNT_LSB                                      0
#define DBG_RX_ABORT_CNT_RX_ABORT_CNT_MSB                                      15
#define DBG_RX_ABORT_CNT_RX_ABORT_CNT_MASK                                     0xffff
#define DBG_RX_ABORT_CNT_RX_ABORT_CNT_GET(x)                                   (((x) & DBG_RX_ABORT_CNT_RX_ABORT_CNT_MASK) >> DBG_RX_ABORT_CNT_RX_ABORT_CNT_LSB)
#define DBG_RX_ABORT_CNT_RX_ABORT_CNT_SET(x)                                   (((0 | (x)) << DBG_RX_ABORT_CNT_RX_ABORT_CNT_LSB) & DBG_RX_ABORT_CNT_RX_ABORT_CNT_MASK)
#define DBG_RX_ABORT_CNT_RX_ABORT_CNT_RESET                                    0x0
#define DBG_RX_ABORT_CNT_ADDRESS                                               (0x54 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define DBG_RX_ABORT_CNT_RSTMASK                                               0xffff
#define DBG_RX_ABORT_CNT_RESET                                                 0x0

// 0x58 (SPARE_REG)
#define SPARE_REG_SPARE_BITS_LSB                                               0
#define SPARE_REG_SPARE_BITS_MSB                                               15
#define SPARE_REG_SPARE_BITS_MASK                                              0xffff
#define SPARE_REG_SPARE_BITS_GET(x)                                            (((x) & SPARE_REG_SPARE_BITS_MASK) >> SPARE_REG_SPARE_BITS_LSB)
#define SPARE_REG_SPARE_BITS_SET(x)                                            (((0 | (x)) << SPARE_REG_SPARE_BITS_LSB) & SPARE_REG_SPARE_BITS_MASK)
#define SPARE_REG_SPARE_BITS_RESET                                             0x4
#define SPARE_REG_ADDRESS                                                      (0x58 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define SPARE_REG_RSTMASK                                                      0xffff
#define SPARE_REG_RESET                                                        0x4

// 0x5c (FIPS_CONTROL)
#define FIPS_CONTROL_AES_ENG_1_2_LSB                                           2
#define FIPS_CONTROL_AES_ENG_1_2_MSB                                           2
#define FIPS_CONTROL_AES_ENG_1_2_MASK                                          0x4
#define FIPS_CONTROL_AES_ENG_1_2_GET(x)                                        (((x) & FIPS_CONTROL_AES_ENG_1_2_MASK) >> FIPS_CONTROL_AES_ENG_1_2_LSB)
#define FIPS_CONTROL_AES_ENG_1_2_SET(x)                                        (((0 | (x)) << FIPS_CONTROL_AES_ENG_1_2_LSB) & FIPS_CONTROL_AES_ENG_1_2_MASK)
#define FIPS_CONTROL_AES_ENG_1_2_RESET                                         0x0
#define FIPS_CONTROL_AES_KEY_128_256_LSB                                       1
#define FIPS_CONTROL_AES_KEY_128_256_MSB                                       1
#define FIPS_CONTROL_AES_KEY_128_256_MASK                                      0x2
#define FIPS_CONTROL_AES_KEY_128_256_GET(x)                                    (((x) & FIPS_CONTROL_AES_KEY_128_256_MASK) >> FIPS_CONTROL_AES_KEY_128_256_LSB)
#define FIPS_CONTROL_AES_KEY_128_256_SET(x)                                    (((0 | (x)) << FIPS_CONTROL_AES_KEY_128_256_LSB) & FIPS_CONTROL_AES_KEY_128_256_MASK)
#define FIPS_CONTROL_AES_KEY_128_256_RESET                                     0x0
#define FIPS_CONTROL_FIPS_TEST_ENABLE_LSB                                      0
#define FIPS_CONTROL_FIPS_TEST_ENABLE_MSB                                      0
#define FIPS_CONTROL_FIPS_TEST_ENABLE_MASK                                     0x1
#define FIPS_CONTROL_FIPS_TEST_ENABLE_GET(x)                                   (((x) & FIPS_CONTROL_FIPS_TEST_ENABLE_MASK) >> FIPS_CONTROL_FIPS_TEST_ENABLE_LSB)
#define FIPS_CONTROL_FIPS_TEST_ENABLE_SET(x)                                   (((0 | (x)) << FIPS_CONTROL_FIPS_TEST_ENABLE_LSB) & FIPS_CONTROL_FIPS_TEST_ENABLE_MASK)
#define FIPS_CONTROL_FIPS_TEST_ENABLE_RESET                                    0x0
#define FIPS_CONTROL_ADDRESS                                                   (0x5c + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_CONTROL_RSTMASK                                                   0x7
#define FIPS_CONTROL_RESET                                                     0x0

// 0x60 (FIPS_AES_KEY)
#define FIPS_AES_KEY_AES_KEY_LSB                                               0
#define FIPS_AES_KEY_AES_KEY_MSB                                               31
#define FIPS_AES_KEY_AES_KEY_MASK                                              0xffffffff
#define FIPS_AES_KEY_AES_KEY_GET(x)                                            (((x) & FIPS_AES_KEY_AES_KEY_MASK) >> FIPS_AES_KEY_AES_KEY_LSB)
#define FIPS_AES_KEY_AES_KEY_SET(x)                                            (((0 | (x)) << FIPS_AES_KEY_AES_KEY_LSB) & FIPS_AES_KEY_AES_KEY_MASK)
#define FIPS_AES_KEY_AES_KEY_RESET                                             0x0
#define FIPS_AES_KEY_ADDRESS                                                   (0x60 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_KEY_RSTMASK                                                   0xffffffff
#define FIPS_AES_KEY_RESET                                                     0x0

// 0x60 (FIPS_AES_KEY_0)
#define FIPS_AES_KEY_AES_KEY_0_LSB                                             0
#define FIPS_AES_KEY_AES_KEY_0_MSB                                             31
#define FIPS_AES_KEY_AES_KEY_0_MASK                                            0xffffffff
#define FIPS_AES_KEY_AES_KEY_0_GET(x)                                          (((x) & FIPS_AES_KEY_AES_KEY_0_MASK) >> FIPS_AES_KEY_AES_KEY_0_LSB)
#define FIPS_AES_KEY_AES_KEY_0_SET(x)                                          (((0 | (x)) << FIPS_AES_KEY_AES_KEY_0_LSB) & FIPS_AES_KEY_AES_KEY_0_MASK)
#define FIPS_AES_KEY_AES_KEY_0_RESET                                           0x0
#define FIPS_AES_KEY_0_ADDRESS                                                 (0x60 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_KEY_0_RSTMASK                                                 0xffffffff
#define FIPS_AES_KEY_0_RESET                                                   0x0

// 0x64 (FIPS_AES_KEY_1)
#define FIPS_AES_KEY_AES_KEY_1_LSB                                             0
#define FIPS_AES_KEY_AES_KEY_1_MSB                                             31
#define FIPS_AES_KEY_AES_KEY_1_MASK                                            0xffffffff
#define FIPS_AES_KEY_AES_KEY_1_GET(x)                                          (((x) & FIPS_AES_KEY_AES_KEY_1_MASK) >> FIPS_AES_KEY_AES_KEY_1_LSB)
#define FIPS_AES_KEY_AES_KEY_1_SET(x)                                          (((0 | (x)) << FIPS_AES_KEY_AES_KEY_1_LSB) & FIPS_AES_KEY_AES_KEY_1_MASK)
#define FIPS_AES_KEY_AES_KEY_1_RESET                                           0x0
#define FIPS_AES_KEY_1_ADDRESS                                                 (0x64 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_KEY_1_RSTMASK                                                 0xffffffff
#define FIPS_AES_KEY_1_RESET                                                   0x0

// 0x68 (FIPS_AES_KEY_2)
#define FIPS_AES_KEY_AES_KEY_2_LSB                                             0
#define FIPS_AES_KEY_AES_KEY_2_MSB                                             31
#define FIPS_AES_KEY_AES_KEY_2_MASK                                            0xffffffff
#define FIPS_AES_KEY_AES_KEY_2_GET(x)                                          (((x) & FIPS_AES_KEY_AES_KEY_2_MASK) >> FIPS_AES_KEY_AES_KEY_2_LSB)
#define FIPS_AES_KEY_AES_KEY_2_SET(x)                                          (((0 | (x)) << FIPS_AES_KEY_AES_KEY_2_LSB) & FIPS_AES_KEY_AES_KEY_2_MASK)
#define FIPS_AES_KEY_AES_KEY_2_RESET                                           0x0
#define FIPS_AES_KEY_2_ADDRESS                                                 (0x68 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_KEY_2_RSTMASK                                                 0xffffffff
#define FIPS_AES_KEY_2_RESET                                                   0x0

// 0x6c (FIPS_AES_KEY_3)
#define FIPS_AES_KEY_AES_KEY_3_LSB                                             0
#define FIPS_AES_KEY_AES_KEY_3_MSB                                             31
#define FIPS_AES_KEY_AES_KEY_3_MASK                                            0xffffffff
#define FIPS_AES_KEY_AES_KEY_3_GET(x)                                          (((x) & FIPS_AES_KEY_AES_KEY_3_MASK) >> FIPS_AES_KEY_AES_KEY_3_LSB)
#define FIPS_AES_KEY_AES_KEY_3_SET(x)                                          (((0 | (x)) << FIPS_AES_KEY_AES_KEY_3_LSB) & FIPS_AES_KEY_AES_KEY_3_MASK)
#define FIPS_AES_KEY_AES_KEY_3_RESET                                           0x0
#define FIPS_AES_KEY_3_ADDRESS                                                 (0x6c + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_KEY_3_RSTMASK                                                 0xffffffff
#define FIPS_AES_KEY_3_RESET                                                   0x0

// 0x70 (FIPS_AES_KEY_4)
#define FIPS_AES_KEY_AES_KEY_4_LSB                                             0
#define FIPS_AES_KEY_AES_KEY_4_MSB                                             31
#define FIPS_AES_KEY_AES_KEY_4_MASK                                            0xffffffff
#define FIPS_AES_KEY_AES_KEY_4_GET(x)                                          (((x) & FIPS_AES_KEY_AES_KEY_4_MASK) >> FIPS_AES_KEY_AES_KEY_4_LSB)
#define FIPS_AES_KEY_AES_KEY_4_SET(x)                                          (((0 | (x)) << FIPS_AES_KEY_AES_KEY_4_LSB) & FIPS_AES_KEY_AES_KEY_4_MASK)
#define FIPS_AES_KEY_AES_KEY_4_RESET                                           0x0
#define FIPS_AES_KEY_4_ADDRESS                                                 (0x70 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_KEY_4_RSTMASK                                                 0xffffffff
#define FIPS_AES_KEY_4_RESET                                                   0x0

// 0x74 (FIPS_AES_KEY_5)
#define FIPS_AES_KEY_AES_KEY_5_LSB                                             0
#define FIPS_AES_KEY_AES_KEY_5_MSB                                             31
#define FIPS_AES_KEY_AES_KEY_5_MASK                                            0xffffffff
#define FIPS_AES_KEY_AES_KEY_5_GET(x)                                          (((x) & FIPS_AES_KEY_AES_KEY_5_MASK) >> FIPS_AES_KEY_AES_KEY_5_LSB)
#define FIPS_AES_KEY_AES_KEY_5_SET(x)                                          (((0 | (x)) << FIPS_AES_KEY_AES_KEY_5_LSB) & FIPS_AES_KEY_AES_KEY_5_MASK)
#define FIPS_AES_KEY_AES_KEY_5_RESET                                           0x0
#define FIPS_AES_KEY_5_ADDRESS                                                 (0x74 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_KEY_5_RSTMASK                                                 0xffffffff
#define FIPS_AES_KEY_5_RESET                                                   0x0

// 0x78 (FIPS_AES_KEY_6)
#define FIPS_AES_KEY_AES_KEY_6_LSB                                             0
#define FIPS_AES_KEY_AES_KEY_6_MSB                                             31
#define FIPS_AES_KEY_AES_KEY_6_MASK                                            0xffffffff
#define FIPS_AES_KEY_AES_KEY_6_GET(x)                                          (((x) & FIPS_AES_KEY_AES_KEY_6_MASK) >> FIPS_AES_KEY_AES_KEY_6_LSB)
#define FIPS_AES_KEY_AES_KEY_6_SET(x)                                          (((0 | (x)) << FIPS_AES_KEY_AES_KEY_6_LSB) & FIPS_AES_KEY_AES_KEY_6_MASK)
#define FIPS_AES_KEY_AES_KEY_6_RESET                                           0x0
#define FIPS_AES_KEY_6_ADDRESS                                                 (0x78 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_KEY_6_RSTMASK                                                 0xffffffff
#define FIPS_AES_KEY_6_RESET                                                   0x0

// 0x7c (FIPS_AES_KEY_7)
#define FIPS_AES_KEY_AES_KEY_7_LSB                                             0
#define FIPS_AES_KEY_AES_KEY_7_MSB                                             31
#define FIPS_AES_KEY_AES_KEY_7_MASK                                            0xffffffff
#define FIPS_AES_KEY_AES_KEY_7_GET(x)                                          (((x) & FIPS_AES_KEY_AES_KEY_7_MASK) >> FIPS_AES_KEY_AES_KEY_7_LSB)
#define FIPS_AES_KEY_AES_KEY_7_SET(x)                                          (((0 | (x)) << FIPS_AES_KEY_AES_KEY_7_LSB) & FIPS_AES_KEY_AES_KEY_7_MASK)
#define FIPS_AES_KEY_AES_KEY_7_RESET                                           0x0
#define FIPS_AES_KEY_7_ADDRESS                                                 (0x7c + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_KEY_7_RSTMASK                                                 0xffffffff
#define FIPS_AES_KEY_7_RESET                                                   0x0

// 0x80 (FIPS_AES_DATA_IN)
#define FIPS_AES_DATA_IN_AES_DATA_IN_LSB                                       0
#define FIPS_AES_DATA_IN_AES_DATA_IN_MSB                                       31
#define FIPS_AES_DATA_IN_AES_DATA_IN_MASK                                      0xffffffff
#define FIPS_AES_DATA_IN_AES_DATA_IN_GET(x)                                    (((x) & FIPS_AES_DATA_IN_AES_DATA_IN_MASK) >> FIPS_AES_DATA_IN_AES_DATA_IN_LSB)
#define FIPS_AES_DATA_IN_AES_DATA_IN_SET(x)                                    (((0 | (x)) << FIPS_AES_DATA_IN_AES_DATA_IN_LSB) & FIPS_AES_DATA_IN_AES_DATA_IN_MASK)
#define FIPS_AES_DATA_IN_AES_DATA_IN_RESET                                     0x0
#define FIPS_AES_DATA_IN_ADDRESS                                               (0x80 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_DATA_IN_RSTMASK                                               0xffffffff
#define FIPS_AES_DATA_IN_RESET                                                 0x0

// 0x80 (FIPS_AES_DATA_IN_0)
#define FIPS_AES_DATA_IN_AES_DATA_IN_0_LSB                                     0
#define FIPS_AES_DATA_IN_AES_DATA_IN_0_MSB                                     31
#define FIPS_AES_DATA_IN_AES_DATA_IN_0_MASK                                    0xffffffff
#define FIPS_AES_DATA_IN_AES_DATA_IN_0_GET(x)                                  (((x) & FIPS_AES_DATA_IN_AES_DATA_IN_0_MASK) >> FIPS_AES_DATA_IN_AES_DATA_IN_0_LSB)
#define FIPS_AES_DATA_IN_AES_DATA_IN_0_SET(x)                                  (((0 | (x)) << FIPS_AES_DATA_IN_AES_DATA_IN_0_LSB) & FIPS_AES_DATA_IN_AES_DATA_IN_0_MASK)
#define FIPS_AES_DATA_IN_AES_DATA_IN_0_RESET                                   0x0
#define FIPS_AES_DATA_IN_0_ADDRESS                                             (0x80 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_DATA_IN_0_RSTMASK                                             0xffffffff
#define FIPS_AES_DATA_IN_0_RESET                                               0x0

// 0x84 (FIPS_AES_DATA_IN_1)
#define FIPS_AES_DATA_IN_AES_DATA_IN_1_LSB                                     0
#define FIPS_AES_DATA_IN_AES_DATA_IN_1_MSB                                     31
#define FIPS_AES_DATA_IN_AES_DATA_IN_1_MASK                                    0xffffffff
#define FIPS_AES_DATA_IN_AES_DATA_IN_1_GET(x)                                  (((x) & FIPS_AES_DATA_IN_AES_DATA_IN_1_MASK) >> FIPS_AES_DATA_IN_AES_DATA_IN_1_LSB)
#define FIPS_AES_DATA_IN_AES_DATA_IN_1_SET(x)                                  (((0 | (x)) << FIPS_AES_DATA_IN_AES_DATA_IN_1_LSB) & FIPS_AES_DATA_IN_AES_DATA_IN_1_MASK)
#define FIPS_AES_DATA_IN_AES_DATA_IN_1_RESET                                   0x0
#define FIPS_AES_DATA_IN_1_ADDRESS                                             (0x84 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_DATA_IN_1_RSTMASK                                             0xffffffff
#define FIPS_AES_DATA_IN_1_RESET                                               0x0

// 0x88 (FIPS_AES_DATA_IN_2)
#define FIPS_AES_DATA_IN_AES_DATA_IN_2_LSB                                     0
#define FIPS_AES_DATA_IN_AES_DATA_IN_2_MSB                                     31
#define FIPS_AES_DATA_IN_AES_DATA_IN_2_MASK                                    0xffffffff
#define FIPS_AES_DATA_IN_AES_DATA_IN_2_GET(x)                                  (((x) & FIPS_AES_DATA_IN_AES_DATA_IN_2_MASK) >> FIPS_AES_DATA_IN_AES_DATA_IN_2_LSB)
#define FIPS_AES_DATA_IN_AES_DATA_IN_2_SET(x)                                  (((0 | (x)) << FIPS_AES_DATA_IN_AES_DATA_IN_2_LSB) & FIPS_AES_DATA_IN_AES_DATA_IN_2_MASK)
#define FIPS_AES_DATA_IN_AES_DATA_IN_2_RESET                                   0x0
#define FIPS_AES_DATA_IN_2_ADDRESS                                             (0x88 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_DATA_IN_2_RSTMASK                                             0xffffffff
#define FIPS_AES_DATA_IN_2_RESET                                               0x0

// 0x8c (FIPS_AES_DATA_IN_3)
#define FIPS_AES_DATA_IN_AES_DATA_IN_3_LSB                                     0
#define FIPS_AES_DATA_IN_AES_DATA_IN_3_MSB                                     31
#define FIPS_AES_DATA_IN_AES_DATA_IN_3_MASK                                    0xffffffff
#define FIPS_AES_DATA_IN_AES_DATA_IN_3_GET(x)                                  (((x) & FIPS_AES_DATA_IN_AES_DATA_IN_3_MASK) >> FIPS_AES_DATA_IN_AES_DATA_IN_3_LSB)
#define FIPS_AES_DATA_IN_AES_DATA_IN_3_SET(x)                                  (((0 | (x)) << FIPS_AES_DATA_IN_AES_DATA_IN_3_LSB) & FIPS_AES_DATA_IN_AES_DATA_IN_3_MASK)
#define FIPS_AES_DATA_IN_AES_DATA_IN_3_RESET                                   0x0
#define FIPS_AES_DATA_IN_3_ADDRESS                                             (0x8c + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_DATA_IN_3_RSTMASK                                             0xffffffff
#define FIPS_AES_DATA_IN_3_RESET                                               0x0

// 0x90 (FIPS_AES_DATA_OUT)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_LSB                                     0
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_MSB                                     31
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_MASK                                    0xffffffff
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_GET(x)                                  (((x) & FIPS_AES_DATA_OUT_AES_DATA_OUT_MASK) >> FIPS_AES_DATA_OUT_AES_DATA_OUT_LSB)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_SET(x)                                  (((0 | (x)) << FIPS_AES_DATA_OUT_AES_DATA_OUT_LSB) & FIPS_AES_DATA_OUT_AES_DATA_OUT_MASK)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_RESET                                   0x0
#define FIPS_AES_DATA_OUT_ADDRESS                                              (0x90 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_DATA_OUT_RSTMASK                                              0xffffffff
#define FIPS_AES_DATA_OUT_RESET                                                0x0

// 0x90 (FIPS_AES_DATA_OUT_0)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_0_LSB                                   0
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_0_MSB                                   31
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_0_MASK                                  0xffffffff
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_0_GET(x)                                (((x) & FIPS_AES_DATA_OUT_AES_DATA_OUT_0_MASK) >> FIPS_AES_DATA_OUT_AES_DATA_OUT_0_LSB)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_0_SET(x)                                (((0 | (x)) << FIPS_AES_DATA_OUT_AES_DATA_OUT_0_LSB) & FIPS_AES_DATA_OUT_AES_DATA_OUT_0_MASK)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_0_RESET                                 0x0
#define FIPS_AES_DATA_OUT_0_ADDRESS                                            (0x90 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_DATA_OUT_0_RSTMASK                                            0xffffffff
#define FIPS_AES_DATA_OUT_0_RESET                                              0x0

// 0x94 (FIPS_AES_DATA_OUT_1)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_1_LSB                                   0
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_1_MSB                                   31
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_1_MASK                                  0xffffffff
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_1_GET(x)                                (((x) & FIPS_AES_DATA_OUT_AES_DATA_OUT_1_MASK) >> FIPS_AES_DATA_OUT_AES_DATA_OUT_1_LSB)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_1_SET(x)                                (((0 | (x)) << FIPS_AES_DATA_OUT_AES_DATA_OUT_1_LSB) & FIPS_AES_DATA_OUT_AES_DATA_OUT_1_MASK)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_1_RESET                                 0x0
#define FIPS_AES_DATA_OUT_1_ADDRESS                                            (0x94 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_DATA_OUT_1_RSTMASK                                            0xffffffff
#define FIPS_AES_DATA_OUT_1_RESET                                              0x0

// 0x98 (FIPS_AES_DATA_OUT_2)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_2_LSB                                   0
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_2_MSB                                   31
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_2_MASK                                  0xffffffff
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_2_GET(x)                                (((x) & FIPS_AES_DATA_OUT_AES_DATA_OUT_2_MASK) >> FIPS_AES_DATA_OUT_AES_DATA_OUT_2_LSB)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_2_SET(x)                                (((0 | (x)) << FIPS_AES_DATA_OUT_AES_DATA_OUT_2_LSB) & FIPS_AES_DATA_OUT_AES_DATA_OUT_2_MASK)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_2_RESET                                 0x0
#define FIPS_AES_DATA_OUT_2_ADDRESS                                            (0x98 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_DATA_OUT_2_RSTMASK                                            0xffffffff
#define FIPS_AES_DATA_OUT_2_RESET                                              0x0

// 0x9c (FIPS_AES_DATA_OUT_3)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_3_LSB                                   0
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_3_MSB                                   31
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_3_MASK                                  0xffffffff
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_3_GET(x)                                (((x) & FIPS_AES_DATA_OUT_AES_DATA_OUT_3_MASK) >> FIPS_AES_DATA_OUT_AES_DATA_OUT_3_LSB)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_3_SET(x)                                (((0 | (x)) << FIPS_AES_DATA_OUT_AES_DATA_OUT_3_LSB) & FIPS_AES_DATA_OUT_AES_DATA_OUT_3_MASK)
#define FIPS_AES_DATA_OUT_AES_DATA_OUT_3_RESET                                 0x0
#define FIPS_AES_DATA_OUT_3_ADDRESS                                            (0x9c + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define FIPS_AES_DATA_OUT_3_RSTMASK                                            0xffffffff
#define FIPS_AES_DATA_OUT_3_RESET                                              0x0

// 0xa0 (EVENTBUS_MASK)
#define EVENTBUS_MASK_EVENTBUS_MASK_LSB                                        0
#define EVENTBUS_MASK_EVENTBUS_MASK_MSB                                        31
#define EVENTBUS_MASK_EVENTBUS_MASK_MASK                                       0xffffffff
#define EVENTBUS_MASK_EVENTBUS_MASK_GET(x)                                     (((x) & EVENTBUS_MASK_EVENTBUS_MASK_MASK) >> EVENTBUS_MASK_EVENTBUS_MASK_LSB)
#define EVENTBUS_MASK_EVENTBUS_MASK_SET(x)                                     (((0 | (x)) << EVENTBUS_MASK_EVENTBUS_MASK_LSB) & EVENTBUS_MASK_EVENTBUS_MASK_MASK)
#define EVENTBUS_MASK_EVENTBUS_MASK_RESET                                      0xffffffff
#define EVENTBUS_MASK_ADDRESS                                                  (0xa0 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define EVENTBUS_MASK_RSTMASK                                                  0xffffffff
#define EVENTBUS_MASK_RESET                                                    0xffffffff

// 0xa4 (WATCHDOG_TIMER_THRESHOLD)
#define WATCHDOG_TIMER_THRESHOLD_WATCHDOG_THRESHOLD_LSB                        0
#define WATCHDOG_TIMER_THRESHOLD_WATCHDOG_THRESHOLD_MSB                        31
#define WATCHDOG_TIMER_THRESHOLD_WATCHDOG_THRESHOLD_MASK                       0xffffffff
#define WATCHDOG_TIMER_THRESHOLD_WATCHDOG_THRESHOLD_GET(x)                     (((x) & WATCHDOG_TIMER_THRESHOLD_WATCHDOG_THRESHOLD_MASK) >> WATCHDOG_TIMER_THRESHOLD_WATCHDOG_THRESHOLD_LSB)
#define WATCHDOG_TIMER_THRESHOLD_WATCHDOG_THRESHOLD_SET(x)                     (((0 | (x)) << WATCHDOG_TIMER_THRESHOLD_WATCHDOG_THRESHOLD_LSB) & WATCHDOG_TIMER_THRESHOLD_WATCHDOG_THRESHOLD_MASK)
#define WATCHDOG_TIMER_THRESHOLD_WATCHDOG_THRESHOLD_RESET                      0x0
#define WATCHDOG_TIMER_THRESHOLD_ADDRESS                                       (0xa4 + __MAC_CRYPTO_REG_BASE_ADDRESS)
#define WATCHDOG_TIMER_THRESHOLD_RSTMASK                                       0xffffffff
#define WATCHDOG_TIMER_THRESHOLD_RESET                                         0x0



#endif /* _MAC_CRYPTO_REG_H_ */