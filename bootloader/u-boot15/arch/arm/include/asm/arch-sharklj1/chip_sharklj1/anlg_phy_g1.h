/*
 * Copyright (C) 2015 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 * updated at 2017-05-30 15:03:06
 *
 */


#ifndef ANLG_PHY_G1_H
#define ANLG_PHY_G1_H

#define CTL_BASE_ANLG_PHY_G1 0x40350000


#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_ANA_BB_PWR_CTRL       ( CTL_BASE_ANLG_PHY_G1 + 0x0000 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_ANA_BB_RST_CTRL       ( CTL_BASE_ANLG_PHY_G1 + 0x0004 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_ANA_BB_SINE_CTRL      ( CTL_BASE_ANLG_PHY_G1 + 0x0008 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_BB_BG_CTRL            ( CTL_BASE_ANLG_PHY_G1 + 0x000C )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_ANALOG_TEST           ( CTL_BASE_ANLG_PHY_G1 + 0x0010 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_CTRL0            ( CTL_BASE_ANLG_PHY_G1 + 0x0014 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_CTRL1            ( CTL_BASE_ANLG_PHY_G1 + 0x0018 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_CTRL2            ( CTL_BASE_ANLG_PHY_G1 + 0x001C )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_BIST_CTRL        ( CTL_BASE_ANLG_PHY_G1 + 0x0020 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_CTRL0           ( CTL_BASE_ANLG_PHY_G1 + 0x0024 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_CTRL1           ( CTL_BASE_ANLG_PHY_G1 + 0x0028 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_CTRL2           ( CTL_BASE_ANLG_PHY_G1 + 0x002C )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_BIST_CTRL       ( CTL_BASE_ANLG_PHY_G1 + 0x0030 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_CTRL0            ( CTL_BASE_ANLG_PHY_G1 + 0x0034 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_CTRL1            ( CTL_BASE_ANLG_PHY_G1 + 0x0038 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_CTRL2            ( CTL_BASE_ANLG_PHY_G1 + 0x003C )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_BIST_CTRL        ( CTL_BASE_ANLG_PHY_G1 + 0x0040 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_CTRL0            ( CTL_BASE_ANLG_PHY_G1 + 0x0044 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_CTRL1            ( CTL_BASE_ANLG_PHY_G1 + 0x0048 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_CTRL2            ( CTL_BASE_ANLG_PHY_G1 + 0x004C )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_BIST_CTRL        ( CTL_BASE_ANLG_PHY_G1 + 0x0050 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_CTRL0           ( CTL_BASE_ANLG_PHY_G1 + 0x0054 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_CTRL1           ( CTL_BASE_ANLG_PHY_G1 + 0x0058 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_CTRL2           ( CTL_BASE_ANLG_PHY_G1 + 0x005C )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_BIST_CTRL       ( CTL_BASE_ANLG_PHY_G1 + 0x0060 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_CTRL1            ( CTL_BASE_ANLG_PHY_G1 + 0x0064 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_CTRL2            ( CTL_BASE_ANLG_PHY_G1 + 0x0068 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_ANA_BB_RSVD           ( CTL_BASE_ANLG_PHY_G1 + 0x006C )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_RTC4M_CTRL            ( CTL_BASE_ANLG_PHY_G1 + 0x0070 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_TEST_CLK_CTRL         ( CTL_BASE_ANLG_PHY_G1 + 0x0074 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_TEST_0           ( CTL_BASE_ANLG_PHY_G1 + 0x0078 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_WRAP_GLUE_CTRL        ( CTL_BASE_ANLG_PHY_G1 + 0x007C )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_TEST_1           ( CTL_BASE_ANLG_PHY_G1 + 0x0080 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_TEST_2           ( CTL_BASE_ANLG_PHY_G1 + 0x0084 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_TEST_3           ( CTL_BASE_ANLG_PHY_G1 + 0x0088 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_TEST_4           ( CTL_BASE_ANLG_PHY_G1 + 0x008C )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_CAL             ( CTL_BASE_ANLG_PHY_G1 + 0x0090 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX0_CAL              ( CTL_BASE_ANLG_PHY_G1 + 0x0094 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX1_CAL              ( CTL_BASE_ANLG_PHY_G1 + 0x0098 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX2_CAL              ( CTL_BASE_ANLG_PHY_G1 + 0x009C )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_PLL_FREQ_CAL_CFG      ( CTL_BASE_ANLG_PHY_G1 + 0x00A0 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_RESULT          ( CTL_BASE_ANLG_PHY_G1 + 0x00A4 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX0_RESULT           ( CTL_BASE_ANLG_PHY_G1 + 0x00A8 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX1_RESULT           ( CTL_BASE_ANLG_PHY_G1 + 0x00AC )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX2_RESULT           ( CTL_BASE_ANLG_PHY_G1 + 0x00B0 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_PLL_TEST_FLAG         ( CTL_BASE_ANLG_PHY_G1 + 0x00B4 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_REG_SEL_CFG_0         ( CTL_BASE_ANLG_PHY_G1 + 0x00B8 )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_REG_SEL_CFG_1         ( CTL_BASE_ANLG_PHY_G1 + 0x00BC )
#define REG_ANLG_PHY_G1_ANALOG_BB_TOP_REG_SEL_CFG_2         ( CTL_BASE_ANLG_PHY_G1 + 0x00C0 )
#define REG_ANLG_PHY_G1_ANALOG_THM1_THM1_CTRL_0             ( CTL_BASE_ANLG_PHY_G1 + 0x00C4 )
#define REG_ANLG_PHY_G1_ANALOG_THM1_THM1_CTRL_1             ( CTL_BASE_ANLG_PHY_G1 + 0x00C8 )
#define REG_ANLG_PHY_G1_ANALOG_THM1_REG_SEL_CFG_0           ( CTL_BASE_ANLG_PHY_G1 + 0x00CC )

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_ANA_BB_PWR_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_REC_26MHZ_0_BUF_PD          BIT(9)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_REC_32MHZ_0_BUF_PD          BIT(8)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_BB_BG_PD                    BIT(7)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_PD                     BIT(6)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_PD                    BIT(5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_PD                     BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_PD                     BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_PD                    BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_S_AAPC_PD                   BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_M_AAPC_PD                   BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_ANA_BB_RST_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_RST                    BIT(5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_RST                   BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_RST                    BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_RST                    BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RTC4M0_RSTB                 BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_RST                   BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_ANA_BB_SINE_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_REC_26MHZ_0_CUR_SEL         BIT(25)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_REC_32MHZ_0_CUR_SEL         BIT(24)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_SEL(x)                (((x) & 0x3F) << 18)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_SINDRV_ENA                  BIT(17)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_SINDRV_ENA_SQUARE           BIT(16)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CLK26M_RESERVED(x)          (((x) & 0x7FF) << 5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CLK26M_TUNED_SEL            BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_REC_26MHZ_SR_TRIM(x)        (((x) & 0xF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_BB_BG_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_BB_BG_RBIAS_EN              BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_BB_CON_BG                   BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_ANALOG_TEST */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_ANALOG_TESTMUX(x)           (((x) & 0xFFFF) << 16)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_ANALOG_PLL_RESERVED(x)      (((x) & 0xFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_CTRL0 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_N(x)                   (((x) & 0x7FF) << 11)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_IBIAS(x)               (((x) & 0x3) << 9)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_LPF(x)                 (((x) & 0x7) << 6)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_SDM_EN                 BIT(5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_MOD_EN                 BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_DIV_S                  BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_REF_SEL(x)             (((x) & 0x3) << 1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_26M_SEL                BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_CTRL1 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_NINT(x)                (((x) & 0x7F) << 23)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_KINT(x)                (((x) & 0x7FFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_CTRL2 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_RESERVED(x)            (((x) & 0xFFFF) << 9)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_DIV1_EN                BIT(8)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_BIST_EN                BIT(7)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_26M_DIV(x)             (((x) & 0x3F) << 1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_LOCK_DONE              BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_BIST_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_BIST_CTRL(x)           (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_BIST_CNT(x)            (((x) & 0xFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_CTRL0 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_N(x)                  (((x) & 0x7FF) << 10)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_IBIAS(x)              (((x) & 0x3) << 8)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_LPF(x)                (((x) & 0x7) << 5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_SDM_EN                BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_MOD_EN                BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_DIV_S                 BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_REF_SEL(x)            (((x) & 0x3))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_CTRL1 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_NINT(x)               (((x) & 0x7F) << 23)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_KINT(x)               (((x) & 0x7FFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_CTRL2 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_RESERVED(x)           (((x) & 0xFF) << 7)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_CLKOUT_EN             BIT(6)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_DIV1_EN               BIT(5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_DIV2_EN               BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_DIV3_EN               BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_DIV5_EN               BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_DIV7_EN               BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_LOCK_DONE             BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_BIST_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_BIST_EN               BIT(24)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_BIST_CTRL(x)          (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TWPLL_BIST_CNT(x)           (((x) & 0xFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_CTRL0 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_N(x)                   (((x) & 0x7FF) << 10)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_IBIAS(x)               (((x) & 0x3) << 8)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_LPF(x)                 (((x) & 0x7) << 5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_SDM_EN                 BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_MOD_EN                 BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_DIV_S                  BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_REF_SEL(x)             (((x) & 0x3))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_CTRL1 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_NINT(x)                (((x) & 0x7F) << 23)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_KINT(x)                (((x) & 0x7FFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_CTRL2 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_RESERVED(x)            (((x) & 0xFF) << 6)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_CLKOUT_EN              BIT(5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_DIV1_EN                BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_DIV2_EN                BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_DIV3_EN                BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_DIV5_EN                BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_LOCK_DONE              BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_BIST_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_BIST_EN                BIT(24)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_BIST_CTRL(x)           (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_LPLL_BIST_CNT(x)            (((x) & 0xFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_CTRL0 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_N(x)                   (((x) & 0x7FF) << 9)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_IBIAS(x)               (((x) & 0x3) << 7)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_LPF(x)                 (((x) & 0x7) << 4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_SDM_EN                 BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_MOD_EN                 BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_DIV_S                  BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_REF_SEL                BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_CTRL1 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_NINT(x)                (((x) & 0x7F) << 23)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_KINT(x)                (((x) & 0x7FFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_CTRL2 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_RESERVED(x)            (((x) & 0xFF) << 11)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_POSTDIV                BIT(10)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_CLKOUT_EN              BIT(9)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_LOCK_DONE              BIT(8)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_CCS_CTRL(x)            (((x) & 0xFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_BIST_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_BIST_EN                BIT(24)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_BIST_CTRL(x)           (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_GPLL_BIST_CNT(x)            (((x) & 0xFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_CTRL0 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_N(x)                  (((x) & 0x7FF) << 9)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_IBIAS(x)              (((x) & 0x3) << 7)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_LPF(x)                (((x) & 0x7) << 4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_SDM_EN                BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_MOD_EN                BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_DIV_S                 BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_REF_SEL               BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_CTRL1 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_NINT(x)               (((x) & 0x7F) << 23)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_KINT(x)               (((x) & 0x7FFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_CTRL2 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_RESERVED(x)           (((x) & 0xFF) << 5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_POSTDIV               BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_CLKOUT_EN             BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_DIV1_EN               BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_DIV32_EN              BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_LOCK_DONE             BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_BIST_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_BIST_EN               BIT(24)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_BIST_CTRL(x)          (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_CPPLL_BIST_CNT(x)           (((x) & 0xFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_CTRL1 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_G0(x)                  (((x) & 0x3) << 24)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_G1(x)                  (((x) & 0x3) << 22)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_G2(x)                  (((x) & 0x3) << 20)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_S_AAPC_LOW_V_CON            BIT(19)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_S_AAPC_D(x)                 (((x) & 0x3FFF) << 5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_S_AAPC_BPRES                BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_S_APCOUT_SEL(x)             (((x) & 0x3) << 2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_S_AAPC_RESERVED(x)          (((x) & 0x3))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_CTRL2 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_M_AAPC_D(x)                 (((x) & 0x3FFF) << 6)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_M_AAPC_LOW_V_CON            BIT(5)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_M_AAPC_BPRES                BIT(4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_M_APCOUT_SEL(x)             (((x) & 0x3) << 2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_M_AAPC_RESERVED(x)          (((x) & 0x3))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_ANA_BB_RSVD */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_ANA_BB_RESERVED(x)          (((x) & 0xFFFF) << 2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TO_LVDS_SEL(x)              (((x) & 0x3))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_RTC4M_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RTC4M0_EN                   BIT(23)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RTC4M0_I_C(x)               (((x) & 0xF) << 19)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RTC4M0_RC_C(x)              (((x) & 0x1FF) << 10)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RTC4M0_CHOP_EN              BIT(9)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RTC4M_CLK_TEST              BIT(8)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RTC4M0_RESERVED(x)          (((x) & 0xFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_TEST_CLK_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TEST_CLK_EN                 BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TEST_CLK_OD                 BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_TEST_CLK_DIV(x)             (((x) & 0x3))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_TEST_0 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_STEP_SEL               BIT(31)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_MAX_RANGE(x)           (((x) & 0x3FFF) << 17)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_MIN_RANGE(x)           (((x) & 0x3FFF) << 3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_RSTN                   BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_GEN_SEL(x)             (((x) & 0x3))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_WRAP_GLUE_CTRL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_PD_SEL                 BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_RPLL_RST_SEL                BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_TEST_1 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_SQUA_D0(x)             (((x) & 0x3FFF) << 14)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_SQUA_D1(x)             (((x) & 0x3FFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_TEST_2 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_SQUA_D2(x)             (((x) & 0x3FFF) << 14)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_SQUA_D3(x)             (((x) & 0x3FFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_TEST_3 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_SQUA_D4(x)             (((x) & 0x3FFF) << 14)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_SQUA_D5(x)             (((x) & 0x3FFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_TEST_4 */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_SQUA_D6(x)             (((x) & 0x3FFF) << 14)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AAPC_SQUA_D7(x)             (((x) & 0x3FFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_CAL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_MAX_RANGE(x)          (((x) & 0x7FFF) << 15)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_MIN_RANGE(x)          (((x) & 0x7FFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX0_CAL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX0_MAX_RANGE(x)           (((x) & 0x7FFF) << 15)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX0_MIN_RANGE(x)           (((x) & 0x7FFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX1_CAL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX1_MAX_RANGE(x)           (((x) & 0x7FFF) << 15)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX1_MIN_RANGE(x)           (((x) & 0x7FFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX2_CAL */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX2_MAX_RANGE(x)           (((x) & 0x7FFF) << 15)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX2_MIN_RANGE(x)           (((x) & 0x7FFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_PLL_FREQ_CAL_CFG */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_DIV_NUM_26M(x)              (((x) & 0x3FF) << 4)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX2_CAL_EN                 BIT(3)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX1_CAL_EN                 BIT(2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX0_CAL_EN                 BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_CAL_EN                BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_RESULT */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_FREQ(x)               (((x) & 0x7FFF) << 2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_READY                 BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_PROBE_PASS                  BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX0_RESULT */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX0_FREQ(x)                (((x) & 0x7FFF) << 2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX0_READY                  BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX0_PASS                   BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX1_RESULT */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX1_FREQ(x)                (((x) & 0x7FFF) << 2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX1_READY                  BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX1_PASS                   BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_AUX2_RESULT */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX2_FREQ(x)                (((x) & 0x7FFF) << 2)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX2_READY                  BIT(1)
#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_AUX2_PASS                   BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_PLL_TEST_FLAG */

#define BIT_ANLG_PHY_G1_ANALOG_BB_TOP_PLLS_FLAG(x)                (((x) & 0xFFFFFFFF))

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_REG_SEL_CFG_0 */

#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_REC_26MHZ_0_BUF_PD  BIT(31)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_REC_32MHZ_0_BUF_PD  BIT(30)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_BB_BG_PD            BIT(29)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_PD             BIT(28)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_TWPLL_PD            BIT(27)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_LPLL_PD             BIT(26)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_GPLL_PD             BIT(25)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_CPPLL_PD            BIT(24)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_S_AAPC_PD           BIT(23)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_M_AAPC_PD           BIT(22)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_RST            BIT(21)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_TWPLL_RST           BIT(20)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_LPLL_RST            BIT(19)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_GPLL_RST            BIT(18)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RTC4M0_RSTB         BIT(17)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_CPPLL_RST           BIT(16)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_BB_BG_RBIAS_EN      BIT(15)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_BB_CON_BG           BIT(14)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_N              BIT(13)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_IBIAS          BIT(12)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_LPF            BIT(11)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_SDM_EN         BIT(10)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_MOD_EN         BIT(9)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_DIV_S          BIT(8)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_REF_SEL        BIT(7)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_NINT           BIT(6)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_KINT           BIT(5)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_RESERVED       BIT(4)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_DIV1_EN        BIT(3)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_BIST_EN        BIT(2)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_26M_DIV        BIT(1)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RPLL_BIST_CTRL      BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_REG_SEL_CFG_1 */

#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_TWPLL_REF_SEL       BIT(31)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_TWPLL_CLKOUT_EN     BIT(30)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_TWPLL_DIV1_EN       BIT(29)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_TWPLL_DIV2_EN       BIT(28)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_TWPLL_DIV3_EN       BIT(27)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_TWPLL_DIV5_EN       BIT(26)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_TWPLL_DIV7_EN       BIT(25)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_LPLL_REF_SEL        BIT(24)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_LPLL_CLKOUT_EN      BIT(23)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_LPLL_DIV1_EN        BIT(22)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_LPLL_DIV2_EN        BIT(21)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_LPLL_DIV3_EN        BIT(20)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_LPLL_DIV5_EN        BIT(19)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_GPLL_REF_SEL        BIT(18)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_GPLL_CLKOUT_EN      BIT(17)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_CPPLL_REF_SEL       BIT(16)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_CPPLL_CLKOUT_EN     BIT(15)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_CPPLL_DIV1_EN       BIT(14)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_CPPLL_DIV32_EN      BIT(13)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_AAPC_G0             BIT(12)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_AAPC_G1             BIT(11)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_AAPC_G2             BIT(10)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_S_AAPC_LOW_V_CON    BIT(9)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_S_AAPC_D            BIT(8)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_S_AAPC_BPRES        BIT(7)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_S_APCOUT_SEL        BIT(6)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_S_AAPC_RESERVED     BIT(5)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_M_AAPC_D            BIT(4)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_M_AAPC_LOW_V_CON    BIT(3)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_M_AAPC_BPRES        BIT(2)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_M_APCOUT_SEL        BIT(1)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_M_AAPC_RESERVED     BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_BB_TOP_REG_SEL_CFG_2 */

#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_TO_LVDS_SEL         BIT(5)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RTC4M0_EN           BIT(4)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RTC4M0_I_C          BIT(3)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RTC4M0_RC_C         BIT(2)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RTC4M0_CHOP_EN      BIT(1)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_BB_TOP_RTC4M0_RESERVED     BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_THM1_THM1_CTRL_0 */

#define BIT_ANLG_PHY_G1_ANALOG_THM1_THM1_PD                       BIT(23)
#define BIT_ANLG_PHY_G1_ANALOG_THM1_THM1_RSTN                     BIT(22)
#define BIT_ANLG_PHY_G1_ANALOG_THM1_THM1_RUN                      BIT(21)
#define BIT_ANLG_PHY_G1_ANALOG_THM1_THM1_CALI_EN                  BIT(20)
#define BIT_ANLG_PHY_G1_ANALOG_THM1_THM1_ITUNE(x)                 (((x) & 0xF) << 16)
#define BIT_ANLG_PHY_G1_ANALOG_THM1_THM1_RESERVED(x)              (((x) & 0xFFFF))

/* REG_ANLG_PHY_G1_ANALOG_THM1_THM1_CTRL_1 */

#define BIT_ANLG_PHY_G1_ANALOG_THM1_THM1_DATA(x)                  (((x) & 0xFF) << 1)
#define BIT_ANLG_PHY_G1_ANALOG_THM1_THM1_VALID                    BIT(0)

/* REG_ANLG_PHY_G1_ANALOG_THM1_REG_SEL_CFG_0 */

#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_THM1_THM1_PD               BIT(5)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_THM1_THM1_RSTN             BIT(4)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_THM1_THM1_RUN              BIT(3)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_THM1_THM1_CALI_EN          BIT(2)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_THM1_THM1_ITUNE            BIT(1)
#define BIT_ANLG_PHY_G1_DBG_SEL_ANALOG_THM1_THM1_RESERVED         BIT(0)


#endif /* ANLG_PHY_G1_H */
