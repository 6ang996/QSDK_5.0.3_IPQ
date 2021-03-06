/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _RFFE_M_CSR_H_
#define _RFFE_M_CSR_H_


#ifndef __RFFE_M_CSR_BASE_ADDRESS
#define __RFFE_M_CSR_BASE_ADDRESS (0x50000)
#endif


// 0x0 (RFFE_INTE)
#define RFFE_INTE_RFFE_INTE_ERR_LSB                                            1
#define RFFE_INTE_RFFE_INTE_ERR_MSB                                            1
#define RFFE_INTE_RFFE_INTE_ERR_MASK                                           0x2
#define RFFE_INTE_RFFE_INTE_ERR_GET(x)                                         (((x) & RFFE_INTE_RFFE_INTE_ERR_MASK) >> RFFE_INTE_RFFE_INTE_ERR_LSB)
#define RFFE_INTE_RFFE_INTE_ERR_SET(x)                                         (((0 | (x)) << RFFE_INTE_RFFE_INTE_ERR_LSB) & RFFE_INTE_RFFE_INTE_ERR_MASK)
#define RFFE_INTE_RFFE_INTE_ERR_RESET                                          0x0
#define RFFE_INTE_RFFE_INTE_DONE_LSB                                           0
#define RFFE_INTE_RFFE_INTE_DONE_MSB                                           0
#define RFFE_INTE_RFFE_INTE_DONE_MASK                                          0x1
#define RFFE_INTE_RFFE_INTE_DONE_GET(x)                                        (((x) & RFFE_INTE_RFFE_INTE_DONE_MASK) >> RFFE_INTE_RFFE_INTE_DONE_LSB)
#define RFFE_INTE_RFFE_INTE_DONE_SET(x)                                        (((0 | (x)) << RFFE_INTE_RFFE_INTE_DONE_LSB) & RFFE_INTE_RFFE_INTE_DONE_MASK)
#define RFFE_INTE_RFFE_INTE_DONE_RESET                                         0x0
#define RFFE_INTE_ADDRESS                                                      (0x0 + __RFFE_M_CSR_BASE_ADDRESS)
#define RFFE_INTE_RSTMASK                                                      0x3
#define RFFE_INTE_RESET                                                        0x0

// 0x4 (RFFE_INTF)
#define RFFE_INTF_RFFE_INTF_ERR_LSB                                            1
#define RFFE_INTF_RFFE_INTF_ERR_MSB                                            1
#define RFFE_INTF_RFFE_INTF_ERR_MASK                                           0x2
#define RFFE_INTF_RFFE_INTF_ERR_GET(x)                                         (((x) & RFFE_INTF_RFFE_INTF_ERR_MASK) >> RFFE_INTF_RFFE_INTF_ERR_LSB)
#define RFFE_INTF_RFFE_INTF_ERR_SET(x)                                         (((0 | (x)) << RFFE_INTF_RFFE_INTF_ERR_LSB) & RFFE_INTF_RFFE_INTF_ERR_MASK)
#define RFFE_INTF_RFFE_INTF_ERR_RESET                                          0x0
#define RFFE_INTF_RFFE_INTF_DONE_LSB                                           0
#define RFFE_INTF_RFFE_INTF_DONE_MSB                                           0
#define RFFE_INTF_RFFE_INTF_DONE_MASK                                          0x1
#define RFFE_INTF_RFFE_INTF_DONE_GET(x)                                        (((x) & RFFE_INTF_RFFE_INTF_DONE_MASK) >> RFFE_INTF_RFFE_INTF_DONE_LSB)
#define RFFE_INTF_RFFE_INTF_DONE_SET(x)                                        (((0 | (x)) << RFFE_INTF_RFFE_INTF_DONE_LSB) & RFFE_INTF_RFFE_INTF_DONE_MASK)
#define RFFE_INTF_RFFE_INTF_DONE_RESET                                         0x0
#define RFFE_INTF_ADDRESS                                                      (0x4 + __RFFE_M_CSR_BASE_ADDRESS)
#define RFFE_INTF_RSTMASK                                                      0x3
#define RFFE_INTF_RESET                                                        0x0

// 0x8 (RFFE_STAT)
#define RFFE_STAT_RFFE_STAT_PERR3_LSB                                          7
#define RFFE_STAT_RFFE_STAT_PERR3_MSB                                          7
#define RFFE_STAT_RFFE_STAT_PERR3_MASK                                         0x80
#define RFFE_STAT_RFFE_STAT_PERR3_GET(x)                                       (((x) & RFFE_STAT_RFFE_STAT_PERR3_MASK) >> RFFE_STAT_RFFE_STAT_PERR3_LSB)
#define RFFE_STAT_RFFE_STAT_PERR3_SET(x)                                       (((0 | (x)) << RFFE_STAT_RFFE_STAT_PERR3_LSB) & RFFE_STAT_RFFE_STAT_PERR3_MASK)
#define RFFE_STAT_RFFE_STAT_PERR3_RESET                                        0x0
#define RFFE_STAT_RFFE_STAT_PERR2_LSB                                          6
#define RFFE_STAT_RFFE_STAT_PERR2_MSB                                          6
#define RFFE_STAT_RFFE_STAT_PERR2_MASK                                         0x40
#define RFFE_STAT_RFFE_STAT_PERR2_GET(x)                                       (((x) & RFFE_STAT_RFFE_STAT_PERR2_MASK) >> RFFE_STAT_RFFE_STAT_PERR2_LSB)
#define RFFE_STAT_RFFE_STAT_PERR2_SET(x)                                       (((0 | (x)) << RFFE_STAT_RFFE_STAT_PERR2_LSB) & RFFE_STAT_RFFE_STAT_PERR2_MASK)
#define RFFE_STAT_RFFE_STAT_PERR2_RESET                                        0x0
#define RFFE_STAT_RFFE_STAT_PERR1_LSB                                          5
#define RFFE_STAT_RFFE_STAT_PERR1_MSB                                          5
#define RFFE_STAT_RFFE_STAT_PERR1_MASK                                         0x20
#define RFFE_STAT_RFFE_STAT_PERR1_GET(x)                                       (((x) & RFFE_STAT_RFFE_STAT_PERR1_MASK) >> RFFE_STAT_RFFE_STAT_PERR1_LSB)
#define RFFE_STAT_RFFE_STAT_PERR1_SET(x)                                       (((0 | (x)) << RFFE_STAT_RFFE_STAT_PERR1_LSB) & RFFE_STAT_RFFE_STAT_PERR1_MASK)
#define RFFE_STAT_RFFE_STAT_PERR1_RESET                                        0x0
#define RFFE_STAT_RFFE_STAT_PERR0_LSB                                          4
#define RFFE_STAT_RFFE_STAT_PERR0_MSB                                          4
#define RFFE_STAT_RFFE_STAT_PERR0_MASK                                         0x10
#define RFFE_STAT_RFFE_STAT_PERR0_GET(x)                                       (((x) & RFFE_STAT_RFFE_STAT_PERR0_MASK) >> RFFE_STAT_RFFE_STAT_PERR0_LSB)
#define RFFE_STAT_RFFE_STAT_PERR0_SET(x)                                       (((0 | (x)) << RFFE_STAT_RFFE_STAT_PERR0_LSB) & RFFE_STAT_RFFE_STAT_PERR0_MASK)
#define RFFE_STAT_RFFE_STAT_PERR0_RESET                                        0x0
#define RFFE_STAT_RFFE_CFG_GPIO_SDATA_IN_LSB                                   1
#define RFFE_STAT_RFFE_CFG_GPIO_SDATA_IN_MSB                                   1
#define RFFE_STAT_RFFE_CFG_GPIO_SDATA_IN_MASK                                  0x2
#define RFFE_STAT_RFFE_CFG_GPIO_SDATA_IN_GET(x)                                (((x) & RFFE_STAT_RFFE_CFG_GPIO_SDATA_IN_MASK) >> RFFE_STAT_RFFE_CFG_GPIO_SDATA_IN_LSB)
#define RFFE_STAT_RFFE_CFG_GPIO_SDATA_IN_SET(x)                                (((0 | (x)) << RFFE_STAT_RFFE_CFG_GPIO_SDATA_IN_LSB) & RFFE_STAT_RFFE_CFG_GPIO_SDATA_IN_MASK)
#define RFFE_STAT_RFFE_CFG_GPIO_SDATA_IN_RESET                                 0x0
#define RFFE_STAT_RFFE_STAT_ACT_LSB                                            0
#define RFFE_STAT_RFFE_STAT_ACT_MSB                                            0
#define RFFE_STAT_RFFE_STAT_ACT_MASK                                           0x1
#define RFFE_STAT_RFFE_STAT_ACT_GET(x)                                         (((x) & RFFE_STAT_RFFE_STAT_ACT_MASK) >> RFFE_STAT_RFFE_STAT_ACT_LSB)
#define RFFE_STAT_RFFE_STAT_ACT_SET(x)                                         (((0 | (x)) << RFFE_STAT_RFFE_STAT_ACT_LSB) & RFFE_STAT_RFFE_STAT_ACT_MASK)
#define RFFE_STAT_RFFE_STAT_ACT_RESET                                          0x0
#define RFFE_STAT_ADDRESS                                                      (0x8 + __RFFE_M_CSR_BASE_ADDRESS)
#define RFFE_STAT_RSTMASK                                                      0xf3
#define RFFE_STAT_RESET                                                        0x0

// 0xc (RFFE_CFG)
#define RFFE_CFG_RFFE_CFG_SPARE0_LSB                                           10
#define RFFE_CFG_RFFE_CFG_SPARE0_MSB                                           15
#define RFFE_CFG_RFFE_CFG_SPARE0_MASK                                          0xfc00
#define RFFE_CFG_RFFE_CFG_SPARE0_GET(x)                                        (((x) & RFFE_CFG_RFFE_CFG_SPARE0_MASK) >> RFFE_CFG_RFFE_CFG_SPARE0_LSB)
#define RFFE_CFG_RFFE_CFG_SPARE0_SET(x)                                        (((0 | (x)) << RFFE_CFG_RFFE_CFG_SPARE0_LSB) & RFFE_CFG_RFFE_CFG_SPARE0_MASK)
#define RFFE_CFG_RFFE_CFG_SPARE0_RESET                                         0x0
#define RFFE_CFG_RFFE_CFG_SW_RESET_LSB                                         9
#define RFFE_CFG_RFFE_CFG_SW_RESET_MSB                                         9
#define RFFE_CFG_RFFE_CFG_SW_RESET_MASK                                        0x200
#define RFFE_CFG_RFFE_CFG_SW_RESET_GET(x)                                      (((x) & RFFE_CFG_RFFE_CFG_SW_RESET_MASK) >> RFFE_CFG_RFFE_CFG_SW_RESET_LSB)
#define RFFE_CFG_RFFE_CFG_SW_RESET_SET(x)                                      (((0 | (x)) << RFFE_CFG_RFFE_CFG_SW_RESET_LSB) & RFFE_CFG_RFFE_CFG_SW_RESET_MASK)
#define RFFE_CFG_RFFE_CFG_SW_RESET_RESET                                       0x0
#define RFFE_CFG_RFFE_CFG_DIVIDER_LSB                                          4
#define RFFE_CFG_RFFE_CFG_DIVIDER_MSB                                          8
#define RFFE_CFG_RFFE_CFG_DIVIDER_MASK                                         0x1f0
#define RFFE_CFG_RFFE_CFG_DIVIDER_GET(x)                                       (((x) & RFFE_CFG_RFFE_CFG_DIVIDER_MASK) >> RFFE_CFG_RFFE_CFG_DIVIDER_LSB)
#define RFFE_CFG_RFFE_CFG_DIVIDER_SET(x)                                       (((0 | (x)) << RFFE_CFG_RFFE_CFG_DIVIDER_LSB) & RFFE_CFG_RFFE_CFG_DIVIDER_MASK)
#define RFFE_CFG_RFFE_CFG_DIVIDER_RESET                                        0x3
#define RFFE_CFG_RFFE_CFG_GPIO_SCLK_OUT_LSB                                    3
#define RFFE_CFG_RFFE_CFG_GPIO_SCLK_OUT_MSB                                    3
#define RFFE_CFG_RFFE_CFG_GPIO_SCLK_OUT_MASK                                   0x8
#define RFFE_CFG_RFFE_CFG_GPIO_SCLK_OUT_GET(x)                                 (((x) & RFFE_CFG_RFFE_CFG_GPIO_SCLK_OUT_MASK) >> RFFE_CFG_RFFE_CFG_GPIO_SCLK_OUT_LSB)
#define RFFE_CFG_RFFE_CFG_GPIO_SCLK_OUT_SET(x)                                 (((0 | (x)) << RFFE_CFG_RFFE_CFG_GPIO_SCLK_OUT_LSB) & RFFE_CFG_RFFE_CFG_GPIO_SCLK_OUT_MASK)
#define RFFE_CFG_RFFE_CFG_GPIO_SCLK_OUT_RESET                                  0x0
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OUT_LSB                                   2
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OUT_MSB                                   2
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OUT_MASK                                  0x4
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OUT_GET(x)                                (((x) & RFFE_CFG_RFFE_CFG_GPIO_SDATA_OUT_MASK) >> RFFE_CFG_RFFE_CFG_GPIO_SDATA_OUT_LSB)
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OUT_SET(x)                                (((0 | (x)) << RFFE_CFG_RFFE_CFG_GPIO_SDATA_OUT_LSB) & RFFE_CFG_RFFE_CFG_GPIO_SDATA_OUT_MASK)
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OUT_RESET                                 0x0
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OE_LSB                                    1
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OE_MSB                                    1
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OE_MASK                                   0x2
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OE_GET(x)                                 (((x) & RFFE_CFG_RFFE_CFG_GPIO_SDATA_OE_MASK) >> RFFE_CFG_RFFE_CFG_GPIO_SDATA_OE_LSB)
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OE_SET(x)                                 (((0 | (x)) << RFFE_CFG_RFFE_CFG_GPIO_SDATA_OE_LSB) & RFFE_CFG_RFFE_CFG_GPIO_SDATA_OE_MASK)
#define RFFE_CFG_RFFE_CFG_GPIO_SDATA_OE_RESET                                  0x0
#define RFFE_CFG_RFFE_CFG_GPIO_MODE_LSB                                        0
#define RFFE_CFG_RFFE_CFG_GPIO_MODE_MSB                                        0
#define RFFE_CFG_RFFE_CFG_GPIO_MODE_MASK                                       0x1
#define RFFE_CFG_RFFE_CFG_GPIO_MODE_GET(x)                                     (((x) & RFFE_CFG_RFFE_CFG_GPIO_MODE_MASK) >> RFFE_CFG_RFFE_CFG_GPIO_MODE_LSB)
#define RFFE_CFG_RFFE_CFG_GPIO_MODE_SET(x)                                     (((0 | (x)) << RFFE_CFG_RFFE_CFG_GPIO_MODE_LSB) & RFFE_CFG_RFFE_CFG_GPIO_MODE_MASK)
#define RFFE_CFG_RFFE_CFG_GPIO_MODE_RESET                                      0x0
#define RFFE_CFG_ADDRESS                                                       (0xc + __RFFE_M_CSR_BASE_ADDRESS)
#define RFFE_CFG_RSTMASK                                                       0xffff
#define RFFE_CFG_RESET                                                         0x30

// 0x10 (RFFE_CTRL)
#define RFFE_CTRL_RFFE_CTRL_AUTOX_LSB                                          28
#define RFFE_CTRL_RFFE_CTRL_AUTOX_MSB                                          28
#define RFFE_CTRL_RFFE_CTRL_AUTOX_MASK                                         0x10000000
#define RFFE_CTRL_RFFE_CTRL_AUTOX_GET(x)                                       (((x) & RFFE_CTRL_RFFE_CTRL_AUTOX_MASK) >> RFFE_CTRL_RFFE_CTRL_AUTOX_LSB)
#define RFFE_CTRL_RFFE_CTRL_AUTOX_SET(x)                                       (((0 | (x)) << RFFE_CTRL_RFFE_CTRL_AUTOX_LSB) & RFFE_CTRL_RFFE_CTRL_AUTOX_MASK)
#define RFFE_CTRL_RFFE_CTRL_AUTOX_RESET                                        0x0
#define RFFE_CTRL_RFFE_CTRL_CMD_LSB                                            26
#define RFFE_CTRL_RFFE_CTRL_CMD_MSB                                            27
#define RFFE_CTRL_RFFE_CTRL_CMD_MASK                                           0xc000000
#define RFFE_CTRL_RFFE_CTRL_CMD_GET(x)                                         (((x) & RFFE_CTRL_RFFE_CTRL_CMD_MASK) >> RFFE_CTRL_RFFE_CTRL_CMD_LSB)
#define RFFE_CTRL_RFFE_CTRL_CMD_SET(x)                                         (((0 | (x)) << RFFE_CTRL_RFFE_CTRL_CMD_LSB) & RFFE_CTRL_RFFE_CTRL_CMD_MASK)
#define RFFE_CTRL_RFFE_CTRL_CMD_RESET                                          0x0
#define RFFE_CTRL_RFFE_CTRL_RBHRATE_LSB                                        24
#define RFFE_CTRL_RFFE_CTRL_RBHRATE_MSB                                        24
#define RFFE_CTRL_RFFE_CTRL_RBHRATE_MASK                                       0x1000000
#define RFFE_CTRL_RFFE_CTRL_RBHRATE_GET(x)                                     (((x) & RFFE_CTRL_RFFE_CTRL_RBHRATE_MASK) >> RFFE_CTRL_RFFE_CTRL_RBHRATE_LSB)
#define RFFE_CTRL_RFFE_CTRL_RBHRATE_SET(x)                                     (((0 | (x)) << RFFE_CTRL_RFFE_CTRL_RBHRATE_LSB) & RFFE_CTRL_RFFE_CTRL_RBHRATE_MASK)
#define RFFE_CTRL_RFFE_CTRL_RBHRATE_RESET                                      0x0
#define RFFE_CTRL_RFFE_CTRL_SID_LSB                                            20
#define RFFE_CTRL_RFFE_CTRL_SID_MSB                                            23
#define RFFE_CTRL_RFFE_CTRL_SID_MASK                                           0xf00000
#define RFFE_CTRL_RFFE_CTRL_SID_GET(x)                                         (((x) & RFFE_CTRL_RFFE_CTRL_SID_MASK) >> RFFE_CTRL_RFFE_CTRL_SID_LSB)
#define RFFE_CTRL_RFFE_CTRL_SID_SET(x)                                         (((0 | (x)) << RFFE_CTRL_RFFE_CTRL_SID_LSB) & RFFE_CTRL_RFFE_CTRL_SID_MASK)
#define RFFE_CTRL_RFFE_CTRL_SID_RESET                                          0x0
#define RFFE_CTRL_RFFE_CTRL_XCNT_LSB                                           18
#define RFFE_CTRL_RFFE_CTRL_XCNT_MSB                                           19
#define RFFE_CTRL_RFFE_CTRL_XCNT_MASK                                          0xc0000
#define RFFE_CTRL_RFFE_CTRL_XCNT_GET(x)                                        (((x) & RFFE_CTRL_RFFE_CTRL_XCNT_MASK) >> RFFE_CTRL_RFFE_CTRL_XCNT_LSB)
#define RFFE_CTRL_RFFE_CTRL_XCNT_SET(x)                                        (((0 | (x)) << RFFE_CTRL_RFFE_CTRL_XCNT_LSB) & RFFE_CTRL_RFFE_CTRL_XCNT_MASK)
#define RFFE_CTRL_RFFE_CTRL_XCNT_RESET                                         0x0
#define RFFE_CTRL_RFFE_CTRL_MODE_LSB                                           16
#define RFFE_CTRL_RFFE_CTRL_MODE_MSB                                           17
#define RFFE_CTRL_RFFE_CTRL_MODE_MASK                                          0x30000
#define RFFE_CTRL_RFFE_CTRL_MODE_GET(x)                                        (((x) & RFFE_CTRL_RFFE_CTRL_MODE_MASK) >> RFFE_CTRL_RFFE_CTRL_MODE_LSB)
#define RFFE_CTRL_RFFE_CTRL_MODE_SET(x)                                        (((0 | (x)) << RFFE_CTRL_RFFE_CTRL_MODE_LSB) & RFFE_CTRL_RFFE_CTRL_MODE_MASK)
#define RFFE_CTRL_RFFE_CTRL_MODE_RESET                                         0x0
#define RFFE_CTRL_RFFE_CTRL_ADDR16_LSB                                         0
#define RFFE_CTRL_RFFE_CTRL_ADDR16_MSB                                         15
#define RFFE_CTRL_RFFE_CTRL_ADDR16_MASK                                        0xffff
#define RFFE_CTRL_RFFE_CTRL_ADDR16_GET(x)                                      (((x) & RFFE_CTRL_RFFE_CTRL_ADDR16_MASK) >> RFFE_CTRL_RFFE_CTRL_ADDR16_LSB)
#define RFFE_CTRL_RFFE_CTRL_ADDR16_SET(x)                                      (((0 | (x)) << RFFE_CTRL_RFFE_CTRL_ADDR16_LSB) & RFFE_CTRL_RFFE_CTRL_ADDR16_MASK)
#define RFFE_CTRL_RFFE_CTRL_ADDR16_RESET                                       0x0
#define RFFE_CTRL_ADDRESS                                                      (0x10 + __RFFE_M_CSR_BASE_ADDRESS)
#define RFFE_CTRL_RSTMASK                                                      0x1dffffff
#define RFFE_CTRL_RESET                                                        0x0

// 0x14 (RFFE_DATA)
#define RFFE_DATA_RFFE_DATA_LSB                                                0
#define RFFE_DATA_RFFE_DATA_MSB                                                31
#define RFFE_DATA_RFFE_DATA_MASK                                               0xffffffff
#define RFFE_DATA_RFFE_DATA_GET(x)                                             (((x) & RFFE_DATA_RFFE_DATA_MASK) >> RFFE_DATA_RFFE_DATA_LSB)
#define RFFE_DATA_RFFE_DATA_SET(x)                                             (((0 | (x)) << RFFE_DATA_RFFE_DATA_LSB) & RFFE_DATA_RFFE_DATA_MASK)
#define RFFE_DATA_RFFE_DATA_RESET                                              0x0
#define RFFE_DATA_ADDRESS                                                      (0x14 + __RFFE_M_CSR_BASE_ADDRESS)
#define RFFE_DATA_RSTMASK                                                      0xffffffff
#define RFFE_DATA_RESET                                                        0x0



#endif /* _RFFE_M_CSR_H_ */
