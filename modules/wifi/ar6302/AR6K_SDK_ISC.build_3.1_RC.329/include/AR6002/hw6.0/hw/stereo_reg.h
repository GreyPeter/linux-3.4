// ------------------------------------------------------------------
// Copyright (c) 2004-2007 Atheros Corporation.  All rights reserved.
// 
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
// WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
// ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
// WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
// OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//
//
// ------------------------------------------------------------------
//===================================================================
// Author(s): ="Atheros"
//===================================================================

/* Copyright (C) 2010 Denali Software Inc.  All rights reserved              */
/* THIS FILE IS AUTOMATICALLY GENERATED BY DENALI BLUEPRINT, DO NOT EDIT     */


#ifndef _STEREO_REG_REG_H_
#define _STEREO_REG_REG_H_


/* macros for STEREO0_CONFIG */
#define STEREO0_CONFIG_ADDRESS                                                            0x00000000
#define STEREO0_CONFIG_OFFSET                                                             0x00000000
#define STEREO0_CONFIG_POSEDGE_MSB                                                                 7
#define STEREO0_CONFIG_POSEDGE_LSB                                                                 0
#define STEREO0_CONFIG_POSEDGE_MASK                                                       0x000000ff
#define STEREO0_CONFIG_POSEDGE_GET(x)                                      (((x) & 0x000000ff) >> 0)
#define STEREO0_CONFIG_POSEDGE_SET(x)                                      (((x) << 0) & 0x000000ff)
#define STEREO0_CONFIG_MASTER_MSB                                                                  8
#define STEREO0_CONFIG_MASTER_LSB                                                                  8
#define STEREO0_CONFIG_MASTER_MASK                                                        0x00000100
#define STEREO0_CONFIG_MASTER_GET(x)                                       (((x) & 0x00000100) >> 8)
#define STEREO0_CONFIG_MASTER_SET(x)                                       (((x) << 8) & 0x00000100)
#define STEREO0_CONFIG_SAMPLE_CNT_CLEAR_TYPE_MSB                                                   9
#define STEREO0_CONFIG_SAMPLE_CNT_CLEAR_TYPE_LSB                                                   9
#define STEREO0_CONFIG_SAMPLE_CNT_CLEAR_TYPE_MASK                                         0x00000200
#define STEREO0_CONFIG_SAMPLE_CNT_CLEAR_TYPE_GET(x)                        (((x) & 0x00000200) >> 9)
#define STEREO0_CONFIG_SAMPLE_CNT_CLEAR_TYPE_SET(x)                        (((x) << 9) & 0x00000200)
#define STEREO0_CONFIG_MCK_SEL_MSB                                                                10
#define STEREO0_CONFIG_MCK_SEL_LSB                                                                10
#define STEREO0_CONFIG_MCK_SEL_MASK                                                       0x00000400
#define STEREO0_CONFIG_MCK_SEL_GET(x)                                     (((x) & 0x00000400) >> 10)
#define STEREO0_CONFIG_MCK_SEL_SET(x)                                     (((x) << 10) & 0x00000400)
#define STEREO0_CONFIG_I2S_WORD_SIZE_MSB                                                          11
#define STEREO0_CONFIG_I2S_WORD_SIZE_LSB                                                          11
#define STEREO0_CONFIG_I2S_WORD_SIZE_MASK                                                 0x00000800
#define STEREO0_CONFIG_I2S_WORD_SIZE_GET(x)                               (((x) & 0x00000800) >> 11)
#define STEREO0_CONFIG_I2S_WORD_SIZE_SET(x)                               (((x) << 11) & 0x00000800)
#define STEREO0_CONFIG_DATA_WORD_SIZE_MSB                                                         13
#define STEREO0_CONFIG_DATA_WORD_SIZE_LSB                                                         12
#define STEREO0_CONFIG_DATA_WORD_SIZE_MASK                                                0x00003000
#define STEREO0_CONFIG_DATA_WORD_SIZE_GET(x)                              (((x) & 0x00003000) >> 12)
#define STEREO0_CONFIG_DATA_WORD_SIZE_SET(x)                              (((x) << 12) & 0x00003000)
#define STEREO0_CONFIG_STEREO_MONO_MSB                                                            15
#define STEREO0_CONFIG_STEREO_MONO_LSB                                                            14
#define STEREO0_CONFIG_STEREO_MONO_MASK                                                   0x0000c000
#define STEREO0_CONFIG_STEREO_MONO_GET(x)                                 (((x) & 0x0000c000) >> 14)
#define STEREO0_CONFIG_STEREO_MONO_SET(x)                                 (((x) << 14) & 0x0000c000)
#define STEREO0_CONFIG_MIC_WORD_SIZE_MSB                                                          16
#define STEREO0_CONFIG_MIC_WORD_SIZE_LSB                                                          16
#define STEREO0_CONFIG_MIC_WORD_SIZE_MASK                                                 0x00010000
#define STEREO0_CONFIG_MIC_WORD_SIZE_GET(x)                               (((x) & 0x00010000) >> 16)
#define STEREO0_CONFIG_MIC_WORD_SIZE_SET(x)                               (((x) << 16) & 0x00010000)
#define STEREO0_CONFIG_PCM_SWAP_MSB                                                               17
#define STEREO0_CONFIG_PCM_SWAP_LSB                                                               17
#define STEREO0_CONFIG_PCM_SWAP_MASK                                                      0x00020000
#define STEREO0_CONFIG_PCM_SWAP_GET(x)                                    (((x) & 0x00020000) >> 17)
#define STEREO0_CONFIG_PCM_SWAP_SET(x)                                    (((x) << 17) & 0x00020000)
#define STEREO0_CONFIG_I2S_DELAY_MSB                                                              18
#define STEREO0_CONFIG_I2S_DELAY_LSB                                                              18
#define STEREO0_CONFIG_I2S_DELAY_MASK                                                     0x00040000
#define STEREO0_CONFIG_I2S_DELAY_GET(x)                                   (((x) & 0x00040000) >> 18)
#define STEREO0_CONFIG_I2S_DELAY_SET(x)                                   (((x) << 18) & 0x00040000)
#define STEREO0_CONFIG_RESET_MSB                                                                  19
#define STEREO0_CONFIG_RESET_LSB                                                                  19
#define STEREO0_CONFIG_RESET_MASK                                                         0x00080000
#define STEREO0_CONFIG_RESET_GET(x)                                       (((x) & 0x00080000) >> 19)
#define STEREO0_CONFIG_RESET_SET(x)                                       (((x) << 19) & 0x00080000)
#define STEREO0_CONFIG_MIC_RESET_MSB                                                              20
#define STEREO0_CONFIG_MIC_RESET_LSB                                                              20
#define STEREO0_CONFIG_MIC_RESET_MASK                                                     0x00100000
#define STEREO0_CONFIG_MIC_RESET_GET(x)                                   (((x) & 0x00100000) >> 20)
#define STEREO0_CONFIG_MIC_RESET_SET(x)                                   (((x) << 20) & 0x00100000)
#define STEREO0_CONFIG_ENABLE_MSB                                                                 21
#define STEREO0_CONFIG_ENABLE_LSB                                                                 21
#define STEREO0_CONFIG_ENABLE_MASK                                                        0x00200000
#define STEREO0_CONFIG_ENABLE_GET(x)                                      (((x) & 0x00200000) >> 21)
#define STEREO0_CONFIG_ENABLE_SET(x)                                      (((x) << 21) & 0x00200000)
#define STEREO0_CONFIG_REFCLK_SEL_MSB                                                             22
#define STEREO0_CONFIG_REFCLK_SEL_LSB                                                             22
#define STEREO0_CONFIG_REFCLK_SEL_MASK                                                    0x00400000
#define STEREO0_CONFIG_REFCLK_SEL_GET(x)                                  (((x) & 0x00400000) >> 22)
#define STEREO0_CONFIG_REFCLK_SEL_SET(x)                                  (((x) << 22) & 0x00400000)
#define STEREO0_CONFIG_SPDIF_ENABLE_MSB                                                           23
#define STEREO0_CONFIG_SPDIF_ENABLE_LSB                                                           23
#define STEREO0_CONFIG_SPDIF_ENABLE_MASK                                                  0x00800000
#define STEREO0_CONFIG_SPDIF_ENABLE_GET(x)                                (((x) & 0x00800000) >> 23)
#define STEREO0_CONFIG_SPDIF_ENABLE_SET(x)                                (((x) << 23) & 0x00800000)

/* macros for STEREO0_VOLUME */
#define STEREO0_VOLUME_ADDRESS                                                            0x00000004
#define STEREO0_VOLUME_OFFSET                                                             0x00000004
#define STEREO0_VOLUME_CHANNEL0_MSB                                                                4
#define STEREO0_VOLUME_CHANNEL0_LSB                                                                0
#define STEREO0_VOLUME_CHANNEL0_MASK                                                      0x0000001f
#define STEREO0_VOLUME_CHANNEL0_GET(x)                                     (((x) & 0x0000001f) >> 0)
#define STEREO0_VOLUME_CHANNEL0_SET(x)                                     (((x) << 0) & 0x0000001f)
#define STEREO0_VOLUME_CHANNEL1_MSB                                                               12
#define STEREO0_VOLUME_CHANNEL1_LSB                                                                8
#define STEREO0_VOLUME_CHANNEL1_MASK                                                      0x00001f00
#define STEREO0_VOLUME_CHANNEL1_GET(x)                                     (((x) & 0x00001f00) >> 8)
#define STEREO0_VOLUME_CHANNEL1_SET(x)                                     (((x) << 8) & 0x00001f00)

/* macros for STEREO_MASTER_CLOCK */
#define STEREO_MASTER_CLOCK_ADDRESS                                                       0x00000008
#define STEREO_MASTER_CLOCK_OFFSET                                                        0x00000008
#define STEREO_MASTER_CLOCK_MCK_SEL_MSB                                                            0
#define STEREO_MASTER_CLOCK_MCK_SEL_LSB                                                            0
#define STEREO_MASTER_CLOCK_MCK_SEL_MASK                                                  0x00000001
#define STEREO_MASTER_CLOCK_MCK_SEL_GET(x)                                 (((x) & 0x00000001) >> 0)
#define STEREO_MASTER_CLOCK_MCK_SEL_SET(x)                                 (((x) << 0) & 0x00000001)

/* macros for STEREO0_TX_SAMPLE_CNT_LSB */
#define STEREO0_TX_SAMPLE_CNT_LSB_ADDRESS                                                 0x0000000c
#define STEREO0_TX_SAMPLE_CNT_LSB_OFFSET                                                  0x0000000c
#define STEREO0_TX_SAMPLE_CNT_LSB_CH0_MSB                                                         15
#define STEREO0_TX_SAMPLE_CNT_LSB_CH0_LSB                                                          0
#define STEREO0_TX_SAMPLE_CNT_LSB_CH0_MASK                                                0x0000ffff
#define STEREO0_TX_SAMPLE_CNT_LSB_CH0_GET(x)                               (((x) & 0x0000ffff) >> 0)
#define STEREO0_TX_SAMPLE_CNT_LSB_CH0_SET(x)                               (((x) << 0) & 0x0000ffff)
#define STEREO0_TX_SAMPLE_CNT_LSB_CH1_MSB                                                         31
#define STEREO0_TX_SAMPLE_CNT_LSB_CH1_LSB                                                         16
#define STEREO0_TX_SAMPLE_CNT_LSB_CH1_MASK                                                0xffff0000
#define STEREO0_TX_SAMPLE_CNT_LSB_CH1_GET(x)                              (((x) & 0xffff0000) >> 16)
#define STEREO0_TX_SAMPLE_CNT_LSB_CH1_SET(x)                              (((x) << 16) & 0xffff0000)

/* macros for STEREO0_TX_SAMPLE_CNT_MSB */
#define STEREO0_TX_SAMPLE_CNT_MSB_ADDRESS                                                 0x00000010
#define STEREO0_TX_SAMPLE_CNT_MSB_OFFSET                                                  0x00000010
#define STEREO0_TX_SAMPLE_CNT_MSB_CH0_MSB                                                         15
#define STEREO0_TX_SAMPLE_CNT_MSB_CH0_LSB                                                          0
#define STEREO0_TX_SAMPLE_CNT_MSB_CH0_MASK                                                0x0000ffff
#define STEREO0_TX_SAMPLE_CNT_MSB_CH0_GET(x)                               (((x) & 0x0000ffff) >> 0)
#define STEREO0_TX_SAMPLE_CNT_MSB_CH0_SET(x)                               (((x) << 0) & 0x0000ffff)
#define STEREO0_TX_SAMPLE_CNT_MSB_CH1_MSB                                                         31
#define STEREO0_TX_SAMPLE_CNT_MSB_CH1_LSB                                                         16
#define STEREO0_TX_SAMPLE_CNT_MSB_CH1_MASK                                                0xffff0000
#define STEREO0_TX_SAMPLE_CNT_MSB_CH1_GET(x)                              (((x) & 0xffff0000) >> 16)
#define STEREO0_TX_SAMPLE_CNT_MSB_CH1_SET(x)                              (((x) << 16) & 0xffff0000)

/* macros for STEREO0_RX_SAMPLE_CNT_LSB */
#define STEREO0_RX_SAMPLE_CNT_LSB_ADDRESS                                                 0x00000014
#define STEREO0_RX_SAMPLE_CNT_LSB_OFFSET                                                  0x00000014
#define STEREO0_RX_SAMPLE_CNT_LSB_CH0_MSB                                                         15
#define STEREO0_RX_SAMPLE_CNT_LSB_CH0_LSB                                                          0
#define STEREO0_RX_SAMPLE_CNT_LSB_CH0_MASK                                                0x0000ffff
#define STEREO0_RX_SAMPLE_CNT_LSB_CH0_GET(x)                               (((x) & 0x0000ffff) >> 0)
#define STEREO0_RX_SAMPLE_CNT_LSB_CH0_SET(x)                               (((x) << 0) & 0x0000ffff)
#define STEREO0_RX_SAMPLE_CNT_LSB_CH1_MSB                                                         31
#define STEREO0_RX_SAMPLE_CNT_LSB_CH1_LSB                                                         16
#define STEREO0_RX_SAMPLE_CNT_LSB_CH1_MASK                                                0xffff0000
#define STEREO0_RX_SAMPLE_CNT_LSB_CH1_GET(x)                              (((x) & 0xffff0000) >> 16)
#define STEREO0_RX_SAMPLE_CNT_LSB_CH1_SET(x)                              (((x) << 16) & 0xffff0000)

/* macros for STEREO0_RX_SAMPLE_CNT_MSB */
#define STEREO0_RX_SAMPLE_CNT_MSB_ADDRESS                                                 0x00000018
#define STEREO0_RX_SAMPLE_CNT_MSB_OFFSET                                                  0x00000018
#define STEREO0_RX_SAMPLE_CNT_MSB_CH0_MSB                                                         15
#define STEREO0_RX_SAMPLE_CNT_MSB_CH0_LSB                                                          0
#define STEREO0_RX_SAMPLE_CNT_MSB_CH0_MASK                                                0x0000ffff
#define STEREO0_RX_SAMPLE_CNT_MSB_CH0_GET(x)                               (((x) & 0x0000ffff) >> 0)
#define STEREO0_RX_SAMPLE_CNT_MSB_CH0_SET(x)                               (((x) << 0) & 0x0000ffff)
#define STEREO0_RX_SAMPLE_CNT_MSB_CH1_MSB                                                         31
#define STEREO0_RX_SAMPLE_CNT_MSB_CH1_LSB                                                         16
#define STEREO0_RX_SAMPLE_CNT_MSB_CH1_MASK                                                0xffff0000
#define STEREO0_RX_SAMPLE_CNT_MSB_CH1_GET(x)                              (((x) & 0xffff0000) >> 16)
#define STEREO0_RX_SAMPLE_CNT_MSB_CH1_SET(x)                              (((x) << 16) & 0xffff0000)


#ifndef __ASSEMBLER__

typedef struct stereo_reg_reg_s {
  volatile unsigned int STEREO0_CONFIG;                                /*        0x0 - 0x4        */
  volatile unsigned int STEREO0_VOLUME;                                /*        0x4 - 0x8        */
  volatile unsigned int STEREO_MASTER_CLOCK;                           /*        0x8 - 0xc        */
  volatile unsigned int STEREO0_TX_SAMPLE_CNT_LSB;                     /*        0xc - 0x10       */
  volatile unsigned int STEREO0_TX_SAMPLE_CNT_MSB;                     /*       0x10 - 0x14       */
  volatile unsigned int STEREO0_RX_SAMPLE_CNT_LSB;                     /*       0x14 - 0x18       */
  volatile unsigned int STEREO0_RX_SAMPLE_CNT_MSB;                     /*       0x18 - 0x1c       */
} stereo_reg_reg_t;

#endif /* __ASSEMBLER__ */

#endif /* _STEREO_REG_REG_H_ */
