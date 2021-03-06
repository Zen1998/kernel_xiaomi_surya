/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2018, The Linux Foundation. All rights reserved.
 */

#ifndef _WCD938X_REGISTERS_H
#define _WCD938X_REGISTERS_H

#define WCD938X_BASE_ADDRESS 0x3000
#define WCD938X_REG(reg)  (reg - WCD938X_BASE_ADDRESS)

enum {
    REG_NO_ACCESS,
    RD_REG,
    WR_REG,
    RD_WR_REG
};


#define WCD938X_ANA_PAGE_REGISTER               (WCD938X_BASE_ADDRESS + 0x0000)
#define WCD938X_ANA_BIAS                        (WCD938X_BASE_ADDRESS + 0x0001)
#define WCD938X_ANA_RX_SUPPLIES                 (WCD938X_BASE_ADDRESS + 0x0008)
#define WCD938X_ANA_HPH                         (WCD938X_BASE_ADDRESS + 0x0009)
#define WCD938X_ANA_EAR                         (WCD938X_BASE_ADDRESS + 0x000A)
#define WCD938X_ANA_EAR_COMPANDER_CTL           (WCD938X_BASE_ADDRESS + 0x000B)
#define WCD938X_ANA_TX_CH1                      (WCD938X_BASE_ADDRESS + 0x000E)
#define WCD938X_ANA_TX_CH2                      (WCD938X_BASE_ADDRESS + 0x000F)
#define WCD938X_ANA_TX_CH3                      (WCD938X_BASE_ADDRESS + 0x0010)
#define WCD938X_ANA_TX_CH4                      (WCD938X_BASE_ADDRESS + 0x0011)
#define WCD938X_ANA_MICB1_MICB2_DSP_EN_LOGIC    (WCD938X_BASE_ADDRESS + 0x0012)
#define WCD938X_ANA_MICB3_DSP_EN_LOGIC          (WCD938X_BASE_ADDRESS + 0x0013)
#define WCD938X_ANA_MBHC_MECH                   (WCD938X_BASE_ADDRESS + 0x0014)
#define WCD938X_ANA_MBHC_ELECT                  (WCD938X_BASE_ADDRESS + 0x0015)
#define WCD938X_ANA_MBHC_ZDET                   (WCD938X_BASE_ADDRESS + 0x0016)
#define WCD938X_ANA_MBHC_RESULT_1               (WCD938X_BASE_ADDRESS + 0x0017)
#define WCD938X_ANA_MBHC_RESULT_2               (WCD938X_BASE_ADDRESS + 0x0018)
#define WCD938X_ANA_MBHC_RESULT_3               (WCD938X_BASE_ADDRESS + 0x0019)
#define WCD938X_ANA_MBHC_BTN0                   (WCD938X_BASE_ADDRESS + 0x001A)
#define WCD938X_ANA_MBHC_BTN1                   (WCD938X_BASE_ADDRESS + 0x001B)
#define WCD938X_ANA_MBHC_BTN2                   (WCD938X_BASE_ADDRESS + 0x001C)
#define WCD938X_ANA_MBHC_BTN3                   (WCD938X_BASE_ADDRESS + 0x001D)
#define WCD938X_ANA_MBHC_BTN4                   (WCD938X_BASE_ADDRESS + 0x001E)
#define WCD938X_ANA_MBHC_BTN5                   (WCD938X_BASE_ADDRESS + 0x001F)
#define WCD938X_ANA_MBHC_BTN6                   (WCD938X_BASE_ADDRESS + 0x0020)
#define WCD938X_ANA_MBHC_BTN7                   (WCD938X_BASE_ADDRESS + 0x0021)
#define WCD938X_ANA_MICB1                       (WCD938X_BASE_ADDRESS + 0x0022)
#define WCD938X_ANA_MICB2                       (WCD938X_BASE_ADDRESS + 0x0023)
#define WCD938X_ANA_MICB2_RAMP                  (WCD938X_BASE_ADDRESS + 0x0024)
#define WCD938X_ANA_MICB3                       (WCD938X_BASE_ADDRESS + 0x0025)
#define WCD938X_ANA_MICB4                       (WCD938X_BASE_ADDRESS + 0x0026)
#define WCD938X_BIAS_CTL                        (WCD938X_BASE_ADDRESS + 0x0028)
#define WCD938X_BIAS_VBG_FINE_ADJ               (WCD938X_BASE_ADDRESS + 0x0029)
#define WCD938X_LDOL_VDDCX_ADJUST               (WCD938X_BASE_ADDRESS + 0x0040)
#define WCD938X_LDOL_DISABLE_LDOL               (WCD938X_BASE_ADDRESS + 0x0041)
#define WCD938X_MBHC_CTL_CLK                    (WCD938X_BASE_ADDRESS + 0x0056)
#define WCD938X_MBHC_CTL_ANA                    (WCD938X_BASE_ADDRESS + 0x0057)
#define WCD938X_MBHC_CTL_SPARE_1                (WCD938X_BASE_ADDRESS + 0x0058)
#define WCD938X_MBHC_CTL_SPARE_2                (WCD938X_BASE_ADDRESS + 0x0059)
#define WCD938X_MBHC_CTL_BCS                    (WCD938X_BASE_ADDRESS + 0x005A)
#define WCD938X_MBHC_MOISTURE_DET_FSM_STATUS    (WCD938X_BASE_ADDRESS + 0x005B)
#define WCD938X_MBHC_TEST_CTL                   (WCD938X_BASE_ADDRESS + 0x005C)
#define WCD938X_LDOH_MODE                       (WCD938X_BASE_ADDRESS + 0x0067)
#define WCD938X_LDOH_BIAS                       (WCD938X_BASE_ADDRESS + 0x0068)
#define WCD938X_LDOH_STB_LOADS                  (WCD938X_BASE_ADDRESS + 0x0069)
#define WCD938X_LDOH_SLOWRAMP                   (WCD938X_BASE_ADDRESS + 0x006A)
#define WCD938X_MICB1_TEST_CTL_1                (WCD938X_BASE_ADDRESS + 0x006B)
#define WCD938X_MICB1_TEST_CTL_2                (WCD938X_BASE_ADDRESS + 0x006C)
#define WCD938X_MICB1_TEST_CTL_3                (WCD938X_BASE_ADDRESS + 0x006D)
#define WCD938X_MICB2_TEST_CTL_1                (WCD938X_BASE_ADDRESS + 0x006E)
#define WCD938X_MICB2_TEST_CTL_2                (WCD938X_BASE_ADDRESS + 0x006F)
#define WCD938X_MICB2_TEST_CTL_3                (WCD938X_BASE_ADDRESS + 0x0070)
#define WCD938X_MICB3_TEST_CTL_1                (WCD938X_BASE_ADDRESS + 0x0071)
#define WCD938X_MICB3_TEST_CTL_2                (WCD938X_BASE_ADDRESS + 0x0072)
#define WCD938X_MICB3_TEST_CTL_3                (WCD938X_BASE_ADDRESS + 0x0073)
#define WCD938X_MICB4_TEST_CTL_1                (WCD938X_BASE_ADDRESS + 0x0074)
#define WCD938X_MICB4_TEST_CTL_2                (WCD938X_BASE_ADDRESS + 0x0075)
#define WCD938X_MICB4_TEST_CTL_3                (WCD938X_BASE_ADDRESS + 0x0076)
#define WCD938X_TX_COM_ADC_VCM                  (WCD938X_BASE_ADDRESS + 0x0077)
#define WCD938X_TX_COM_BIAS_ATEST               (WCD938X_BASE_ADDRESS + 0x0078)
#define WCD938X_TX_COM_SPARE1                   (WCD938X_BASE_ADDRESS + 0x0079)
#define WCD938X_TX_COM_SPARE2                   (WCD938X_BASE_ADDRESS + 0x007A)
#define WCD938X_TX_COM_TXFE_DIV_CTL             (WCD938X_BASE_ADDRESS + 0x007B)
#define WCD938X_TX_COM_TXFE_DIV_START           (WCD938X_BASE_ADDRESS + 0x007C)
#define WCD938X_TX_COM_SPARE3                   (WCD938X_BASE_ADDRESS + 0x007D)
#define WCD938X_TX_COM_SPARE4                   (WCD938X_BASE_ADDRESS + 0x007E)
#define WCD938X_TX_1_2_TEST_EN                  (WCD938X_BASE_ADDRESS + 0x007F)
#define WCD938X_TX_1_2_ADC_IB                   (WCD938X_BASE_ADDRESS + 0x0080)
#define WCD938X_TX_1_2_ATEST_REFCTL             (WCD938X_BASE_ADDRESS + 0x0081)
#define WCD938X_TX_1_2_TEST_CTL                 (WCD938X_BASE_ADDRESS + 0x0082)
#define WCD938X_TX_1_2_TEST_BLK_EN1             (WCD938X_BASE_ADDRESS + 0x0083)
#define WCD938X_TX_1_2_TXFE1_CLKDIV             (WCD938X_BASE_ADDRESS + 0x0084)
#define WCD938X_TX_1_2_SAR2_ERR                 (WCD938X_BASE_ADDRESS + 0x0085)
#define WCD938X_TX_1_2_SAR1_ERR                 (WCD938X_BASE_ADDRESS + 0x0086)
#define WCD938X_TX_3_4_TEST_EN                  (WCD938X_BASE_ADDRESS + 0x0087)
#define WCD938X_TX_3_4_ADC_IB                   (WCD938X_BASE_ADDRESS + 0x0088)
#define WCD938X_TX_3_4_ATEST_REFCTL             (WCD938X_BASE_ADDRESS + 0x0089)
#define WCD938X_TX_3_4_TEST_CTL                 (WCD938X_BASE_ADDRESS + 0x008A)
#define WCD938X_TX_3_4_TEST_BLK_EN3             (WCD938X_BASE_ADDRESS + 0x008B)
#define WCD938X_TX_3_4_TXFE3_CLKDIV             (WCD938X_BASE_ADDRESS + 0x008C)
#define WCD938X_TX_3_4_SAR4_ERR                 (WCD938X_BASE_ADDRESS + 0x008D)
#define WCD938X_TX_3_4_SAR3_ERR                 (WCD938X_BASE_ADDRESS + 0x008E)
#define WCD938X_TX_3_4_TEST_BLK_EN2             (WCD938X_BASE_ADDRESS + 0x008F)
#define WCD938X_TX_3_4_TXFE2_CLKDIV             (WCD938X_BASE_ADDRESS + 0x0090)
#define WCD938X_TX_3_4_SPARE1                   (WCD938X_BASE_ADDRESS + 0x0091)
#define WCD938X_TX_3_4_TEST_BLK_EN4             (WCD938X_BASE_ADDRESS + 0x0092)
#define WCD938X_TX_3_4_TXFE4_CLKDIV             (WCD938X_BASE_ADDRESS + 0x0093)
#define WCD938X_TX_3_4_SPARE2                   (WCD938X_BASE_ADDRESS + 0x0094)
#define WCD938X_CLASSH_MODE_1                   (WCD938X_BASE_ADDRESS + 0x0097)
#define WCD938X_CLASSH_MODE_2                   (WCD938X_BASE_ADDRESS + 0x0098)
#define WCD938X_CLASSH_MODE_3                   (WCD938X_BASE_ADDRESS + 0x0099)
#define WCD938X_CLASSH_CTRL_VCL_1               (WCD938X_BASE_ADDRESS + 0x009A)
#define WCD938X_CLASSH_CTRL_VCL_2               (WCD938X_BASE_ADDRESS + 0x009B)
#define WCD938X_CLASSH_CTRL_CCL_1               (WCD938X_BASE_ADDRESS + 0x009C)
#define WCD938X_CLASSH_CTRL_CCL_2               (WCD938X_BASE_ADDRESS + 0x009D)
#define WCD938X_CLASSH_CTRL_CCL_3               (WCD938X_BASE_ADDRESS + 0x009E)
#define WCD938X_CLASSH_CTRL_CCL_4               (WCD938X_BASE_ADDRESS + 0x009F)
#define WCD938X_CLASSH_CTRL_CCL_5               (WCD938X_BASE_ADDRESS + 0x00A0)
#define WCD938X_CLASSH_BUCK_TMUX_A_D            (WCD938X_BASE_ADDRESS + 0x00A1)
#define WCD938X_CLASSH_BUCK_SW_DRV_CNTL         (WCD938X_BASE_ADDRESS + 0x00A2)
#define WCD938X_CLASSH_SPARE                    (WCD938X_BASE_ADDRESS + 0x00A3)
#define WCD938X_FLYBACK_EN                      (WCD938X_BASE_ADDRESS + 0x00A4)
#define WCD938X_FLYBACK_VNEG_CTRL_1             (WCD938X_BASE_ADDRESS + 0x00A5)
#define WCD938X_FLYBACK_VNEG_CTRL_2             (WCD938X_BASE_ADDRESS + 0x00A6)
#define WCD938X_FLYBACK_VNEG_CTRL_3             (WCD938X_BASE_ADDRESS + 0x00A7)
#define WCD938X_FLYBACK_VNEG_CTRL_4             (WCD938X_BASE_ADDRESS + 0x00A8)
#define WCD938X_FLYBACK_VNEG_CTRL_5             (WCD938X_BASE_ADDRESS + 0x00A9)
#define WCD938X_FLYBACK_VNEG_CTRL_6             (WCD938X_BASE_ADDRESS + 0x00AA)
#define WCD938X_FLYBACK_VNEG_CTRL_7             (WCD938X_BASE_ADDRESS + 0x00AB)
#define WCD938X_FLYBACK_VNEG_CTRL_8             (WCD938X_BASE_ADDRESS + 0x00AC)
#define WCD938X_FLYBACK_VNEG_CTRL_9             (WCD938X_BASE_ADDRESS + 0x00AD)
#define WCD938X_FLYBACK_VNEGDAC_CTRL_1          (WCD938X_BASE_ADDRESS + 0x00AE)
#define WCD938X_FLYBACK_VNEGDAC_CTRL_2          (WCD938X_BASE_ADDRESS + 0x00AF)
#define WCD938X_FLYBACK_VNEGDAC_CTRL_3          (WCD938X_BASE_ADDRESS + 0x00B0)
#define WCD938X_FLYBACK_CTRL_1                  (WCD938X_BASE_ADDRESS + 0x00B1)
#define WCD938X_FLYBACK_TEST_CTL                (WCD938X_BASE_ADDRESS + 0x00B2)
#define WCD938X_RX_AUX_SW_CTL                   (WCD938X_BASE_ADDRESS + 0x00B3)
#define WCD938X_RX_PA_AUX_IN_CONN               (WCD938X_BASE_ADDRESS + 0x00B4)
#define WCD938X_RX_TIMER_DIV                    (WCD938X_BASE_ADDRESS + 0x00B5)
#define WCD938X_RX_OCP_CTL                      (WCD938X_BASE_ADDRESS + 0x00B6)
#define WCD938X_RX_OCP_COUNT                    (WCD938X_BASE_ADDRESS + 0x00B7)
#define WCD938X_RX_BIAS_EAR_DAC                 (WCD938X_BASE_ADDRESS + 0x00B8)
#define WCD938X_RX_BIAS_EAR_AMP                 (WCD938X_BASE_ADDRESS + 0x00B9)
#define WCD938X_RX_BIAS_HPH_LDO                 (WCD938X_BASE_ADDRESS + 0x00BA)
#define WCD938X_RX_BIAS_HPH_PA                  (WCD938X_BASE_ADDRESS + 0x00BB)
#define WCD938X_RX_BIAS_HPH_RDACBUFF_CNP2       (WCD938X_BASE_ADDRESS + 0x00BC)
#define WCD938X_RX_BIAS_HPH_RDAC_LDO            (WCD938X_BASE_ADDRESS + 0x00BD)
#define WCD938X_RX_BIAS_HPH_CNP1                (WCD938X_BASE_ADDRESS + 0x00BE)
#define WCD938X_RX_BIAS_HPH_LOWPOWER            (WCD938X_BASE_ADDRESS + 0x00BF)
#define WCD938X_RX_BIAS_AUX_DAC                 (WCD938X_BASE_ADDRESS + 0x00C0)
#define WCD938X_RX_BIAS_AUX_AMP                 (WCD938X_BASE_ADDRESS + 0x00C1)
#define WCD938X_RX_BIAS_VNEGDAC_BLEEDER         (WCD938X_BASE_ADDRESS + 0x00C2)
#define WCD938X_RX_BIAS_MISC                    (WCD938X_BASE_ADDRESS + 0x00C3)
#define WCD938X_RX_BIAS_BUCK_RST                (WCD938X_BASE_ADDRESS + 0x00C4)
#define WCD938X_RX_BIAS_BUCK_VREF_ERRAMP        (WCD938X_BASE_ADDRESS + 0x00C5)
#define WCD938X_RX_BIAS_FLYB_ERRAMP             (WCD938X_BASE_ADDRESS + 0x00C6)
#define WCD938X_RX_BIAS_FLYB_BUFF               (WCD938X_BASE_ADDRESS + 0x00C7)
#define WCD938X_RX_BIAS_FLYB_MID_RST            (WCD938X_BASE_ADDRESS + 0x00C8)
#define WCD938X_HPH_L_STATUS                    (WCD938X_BASE_ADDRESS + 0x00C9)
#define WCD938X_HPH_R_STATUS                    (WCD938X_BASE_ADDRESS + 0x00CA)
#define WCD938X_HPH_CNP_EN                      (WCD938X_BASE_ADDRESS + 0x00CB)
#define WCD938X_HPH_CNP_WG_CTL                  (WCD938X_BASE_ADDRESS + 0x00CC)
#define WCD938X_HPH_CNP_WG_TIME                 (WCD938X_BASE_ADDRESS + 0x00CD)
#define WCD938X_HPH_OCP_CTL                     (WCD938X_BASE_ADDRESS + 0x00CE)
#define WCD938X_HPH_AUTO_CHOP                   (WCD938X_BASE_ADDRESS + 0x00CF)
#define WCD938X_HPH_CHOP_CTL                    (WCD938X_BASE_ADDRESS + 0x00D0)
#define WCD938X_HPH_PA_CTL1                     (WCD938X_BASE_ADDRESS + 0x00D1)
#define WCD938X_HPH_PA_CTL2                     (WCD938X_BASE_ADDRESS + 0x00D2)
#define WCD938X_HPH_L_EN                        (WCD938X_BASE_ADDRESS + 0x00D3)
#define WCD938X_HPH_L_TEST                      (WCD938X_BASE_ADDRESS + 0x00D4)
#define WCD938X_HPH_L_ATEST                     (WCD938X_BASE_ADDRESS + 0x00D5)
#define WCD938X_HPH_R_EN                        (WCD938X_BASE_ADDRESS + 0x00D6)
#define WCD938X_HPH_R_TEST                      (WCD938X_BASE_ADDRESS + 0x00D7)
#define WCD938X_HPH_R_ATEST                     (WCD938X_BASE_ADDRESS + 0x00D8)
#define WCD938X_HPH_RDAC_CLK_CTL1               (WCD938X_BASE_ADDRESS + 0x00D9)
#define WCD938X_HPH_RDAC_CLK_CTL2               (WCD938X_BASE_ADDRESS + 0x00DA)
#define WCD938X_HPH_RDAC_LDO_CTL                (WCD938X_BASE_ADDRESS + 0x00DB)
#define WCD938X_HPH_RDAC_CHOP_CLK_LP_CTL        (WCD938X_BASE_ADDRESS + 0x00DC)
#define WCD938X_HPH_REFBUFF_UHQA_CTL            (WCD938X_BASE_ADDRESS + 0x00DD)
#define WCD938X_HPH_REFBUFF_LP_CTL              (WCD938X_BASE_ADDRESS + 0x00DE)
#define WCD938X_HPH_L_DAC_CTL                   (WCD938X_BASE_ADDRESS + 0x00DF)
#define WCD938X_HPH_R_DAC_CTL                   (WCD938X_BASE_ADDRESS + 0x00E0)
#define WCD938X_HPH_SURGE_HPHLR_SURGE_COMP_SEL  (WCD938X_BASE_ADDRESS + 0x00E1)
#define WCD938X_HPH_SURGE_HPHLR_SURGE_EN        (WCD938X_BASE_ADDRESS + 0x00E2)
#define WCD938X_HPH_SURGE_HPHLR_SURGE_MISC1     (WCD938X_BASE_ADDRESS + 0x00E3)
#define WCD938X_HPH_SURGE_HPHLR_SURGE_STATUS    (WCD938X_BASE_ADDRESS + 0x00E4)
#define WCD938X_EAR_EAR_EN_REG                  (WCD938X_BASE_ADDRESS + 0x00E9)
#define WCD938X_EAR_EAR_PA_CON                  (WCD938X_BASE_ADDRESS + 0x00EA)
#define WCD938X_EAR_EAR_SP_CON                  (WCD938X_BASE_ADDRESS + 0x00EB)
#define WCD938X_EAR_EAR_DAC_CON                 (WCD938X_BASE_ADDRESS + 0x00EC)
#define WCD938X_EAR_EAR_CNP_FSM_CON             (WCD938X_BASE_ADDRESS + 0x00ED)
#define WCD938X_EAR_TEST_CTL                    (WCD938X_BASE_ADDRESS + 0x00EE)
#define WCD938X_EAR_STATUS_REG_1                (WCD938X_BASE_ADDRESS + 0x00EF)
#define WCD938X_EAR_STATUS_REG_2                (WCD938X_BASE_ADDRESS + 0x00F0)
#define WCD938X_ANA_NEW_PAGE_REGISTER           (WCD938X_BASE_ADDRESS + 0x0100)
#define WCD938X_HPH_NEW_ANA_HPH2                (WCD938X_BASE_ADDRESS + 0x0101)
#define WCD938X_HPH_NEW_ANA_HPH3                (WCD938X_BASE_ADDRESS + 0x0102)
#define WCD938X_SLEEP_CTL                       (WCD938X_BASE_ADDRESS + 0x0103)
#define WCD938X_SLEEP_WATCHDOG_CTL              (WCD938X_BASE_ADDRESS + 0x0104)
#define WCD938X_MBHC_NEW_ELECT_REM_CLAMP_CTL    (WCD938X_BASE_ADDRESS + 0x011F)
#define WCD938X_MBHC_NEW_CTL_1                  (WCD938X_BASE_ADDRESS + 0x0120)
#define WCD938X_MBHC_NEW_CTL_2                  (WCD938X_BASE_ADDRESS + 0x0121)
#define WCD938X_MBHC_NEW_PLUG_DETECT_CTL        (WCD938X_BASE_ADDRESS + 0x0122)
#define WCD938X_MBHC_NEW_ZDET_ANA_CTL           (WCD938X_BASE_ADDRESS + 0x0123)
#define WCD938X_MBHC_NEW_ZDET_RAMP_CTL          (WCD938X_BASE_ADDRESS + 0x0124)
#define WCD938X_MBHC_NEW_FSM_STATUS             (WCD938X_BASE_ADDRESS + 0x0125)
#define WCD938X_MBHC_NEW_ADC_RESULT             (WCD938X_BASE_ADDRESS + 0x0126)
#define WCD938X_TX_NEW_AMIC_MUX_CFG             (WCD938X_BASE_ADDRESS + 0x0127)
#define WCD938X_AUX_AUXPA                       (WCD938X_BASE_ADDRESS + 0x0128)
#define WCD938X_LDORXTX_MODE                    (WCD938X_BASE_ADDRESS + 0x0129)
#define WCD938X_LDORXTX_CONFIG                  (WCD938X_BASE_ADDRESS + 0x012A)
#define WCD938X_DIE_CRACK_DIE_CRK_DET_EN        (WCD938X_BASE_ADDRESS + 0x012C)
#define WCD938X_DIE_CRACK_DIE_CRK_DET_OUT       (WCD938X_BASE_ADDRESS + 0x012D)
#define WCD938X_HPH_NEW_INT_RDAC_GAIN_CTL       (WCD938X_BASE_ADDRESS + 0x0132)
#define WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_L      (WCD938X_BASE_ADDRESS + 0x0133)
#define WCD938X_HPH_NEW_INT_RDAC_VREF_CTL       (WCD938X_BASE_ADDRESS + 0x0134)
#define WCD938X_HPH_NEW_INT_RDAC_OVERRIDE_CTL   (WCD938X_BASE_ADDRESS + 0x0135)
#define WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_R      (WCD938X_BASE_ADDRESS + 0x0136)
#define WCD938X_HPH_NEW_INT_PA_MISC1            (WCD938X_BASE_ADDRESS + 0x0137)
#define WCD938X_HPH_NEW_INT_PA_MISC2            (WCD938X_BASE_ADDRESS + 0x0138)
#define WCD938X_HPH_NEW_INT_PA_RDAC_MISC        (WCD938X_BASE_ADDRESS + 0x0139)
#define WCD938X_HPH_NEW_INT_HPH_TIMER1          (WCD938X_BASE_ADDRESS + 0x013A)
#define WCD938X_HPH_NEW_INT_HPH_TIMER2          (WCD938X_BASE_ADDRESS + 0x013B)
#define WCD938X_HPH_NEW_INT_HPH_TIMER3          (WCD938X_BASE_ADDRESS + 0x013C)
#define WCD938X_HPH_NEW_INT_HPH_TIMER4          (WCD938X_BASE_ADDRESS + 0x013D)
#define WCD938X_HPH_NEW_INT_PA_RDAC_MISC2       (WCD938X_BASE_ADDRESS + 0x013E)
#define WCD938X_HPH_NEW_INT_PA_RDAC_MISC3       (WCD938X_BASE_ADDRESS + 0x013F)
#define WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_L_NEW  (WCD938X_BASE_ADDRESS + 0x0140)
#define WCD938X_HPH_NEW_INT_RDAC_HD2_CTL_R_NEW  (WCD938X_BASE_ADDRESS + 0x0141)
#define WCD938X_RX_NEW_INT_HPH_RDAC_BIAS_LOHIFI (WCD938X_BASE_ADDRESS + 0x0145)
#define WCD938X_RX_NEW_INT_HPH_RDAC_BIAS_ULP    (WCD938X_BASE_ADDRESS + 0x0146)
#define WCD938X_RX_NEW_INT_HPH_RDAC_LDO_LP      (WCD938X_BASE_ADDRESS + 0x0147)
#define WCD938X_MBHC_NEW_INT_MOISTURE_DET_DC_CTRL  \
                                                (WCD938X_BASE_ADDRESS + 0x01AF)
#define WCD938X_MBHC_NEW_INT_MOISTURE_DET_POLLING_CTRL \
                                                (WCD938X_BASE_ADDRESS + 0x01B0)
#define WCD938X_MBHC_NEW_INT_MECH_DET_CURRENT   (WCD938X_BASE_ADDRESS + 0x01B1)
#define WCD938X_MBHC_NEW_INT_SPARE_2            (WCD938X_BASE_ADDRESS + 0x01B2)
#define WCD938X_EAR_INT_NEW_EAR_CHOPPER_CON     (WCD938X_BASE_ADDRESS + 0x01B7)
#define WCD938X_EAR_INT_NEW_CNP_VCM_CON1        (WCD938X_BASE_ADDRESS + 0x01B8)
#define WCD938X_EAR_INT_NEW_CNP_VCM_CON2        (WCD938X_BASE_ADDRESS + 0x01B9)
#define WCD938X_EAR_INT_NEW_EAR_DYNAMIC_BIAS    (WCD938X_BASE_ADDRESS + 0x01BA)
#define WCD938X_AUX_INT_EN_REG                  (WCD938X_BASE_ADDRESS + 0x01BD)
#define WCD938X_AUX_INT_PA_CTRL                 (WCD938X_BASE_ADDRESS + 0x01BE)
#define WCD938X_AUX_INT_SP_CTRL                 (WCD938X_BASE_ADDRESS + 0x01BF)
#define WCD938X_AUX_INT_DAC_CTRL                (WCD938X_BASE_ADDRESS + 0x01C0)
#define WCD938X_AUX_INT_CLK_CTRL                (WCD938X_BASE_ADDRESS + 0x01C1)
#define WCD938X_AUX_INT_TEST_CTRL               (WCD938X_BASE_ADDRESS + 0x01C2)
#define WCD938X_AUX_INT_STATUS_REG              (WCD938X_BASE_ADDRESS + 0x01C3)
#define WCD938X_AUX_INT_MISC                    (WCD938X_BASE_ADDRESS + 0x01C4)
#define WCD938X_LDORXTX_INT_BIAS                (WCD938X_BASE_ADDRESS + 0x01C5)
#define WCD938X_LDORXTX_INT_STB_LOADS_DTEST     (WCD938X_BASE_ADDRESS + 0x01C6)
#define WCD938X_LDORXTX_INT_TEST0               (WCD938X_BASE_ADDRESS + 0x01C7)
#define WCD938X_LDORXTX_INT_STARTUP_TIMER       (WCD938X_BASE_ADDRESS + 0x01C8)
#define WCD938X_LDORXTX_INT_TEST1               (WCD938X_BASE_ADDRESS + 0x01C9)
#define WCD938X_LDORXTX_INT_STATUS              (WCD938X_BASE_ADDRESS + 0x01CA)
#define WCD938X_SLEEP_INT_WATCHDOG_CTL_1        (WCD938X_BASE_ADDRESS + 0x01D0)
#define WCD938X_SLEEP_INT_WATCHDOG_CTL_2        (WCD938X_BASE_ADDRESS + 0x01D1)
#define WCD938X_DIE_CRACK_INT_DIE_CRK_DET_INT1  (WCD938X_BASE_ADDRESS + 0x01D3)
#define WCD938X_DIE_CRACK_INT_DIE_CRK_DET_INT2  (WCD938X_BASE_ADDRESS + 0x01D4)
#define WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_L2  (WCD938X_BASE_ADDRESS + 0x01D5)
#define WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_L1  (WCD938X_BASE_ADDRESS + 0x01D6)
#define WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_L0  (WCD938X_BASE_ADDRESS + 0x01D7)
#define WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_ULP1P2M \
                                                (WCD938X_BASE_ADDRESS + 0x01D8)
#define WCD938X_TX_COM_NEW_INT_TXFE_DIVSTOP_ULP0P6M \
                                                (WCD938X_BASE_ADDRESS + 0x01D9)
#define WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG1_L2L1 \
                                                (WCD938X_BASE_ADDRESS + 0x01DA)
#define WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG1_L0 \
                                                (WCD938X_BASE_ADDRESS + 0x01DB)
#define WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG1_ULP \
                                                (WCD938X_BASE_ADDRESS + 0x01DC)
#define WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2MAIN_L2L1 \
                                                (WCD938X_BASE_ADDRESS + 0x01DD)
#define WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2MAIN_L0 \
                                                (WCD938X_BASE_ADDRESS + 0x01DE)
#define WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2MAIN_ULP \
                                                (WCD938X_BASE_ADDRESS + 0x01DF)
#define WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2CASC_L2L1L0 \
                                                (WCD938X_BASE_ADDRESS + 0x01E0)
#define WCD938X_TX_COM_NEW_INT_TXFE_ICTRL_STG2CASC_ULP \
                                                (WCD938X_BASE_ADDRESS + 0x01E1)
#define WCD938X_TX_COM_NEW_INT_TXADC_SCBIAS_L2L1 \
                                                (WCD938X_BASE_ADDRESS + 0x01E2)
#define WCD938X_TX_COM_NEW_INT_TXADC_SCBIAS_L0ULP \
                                                (WCD938X_BASE_ADDRESS + 0x01E3)
#define WCD938X_TX_COM_NEW_INT_TXADC_INT_L2     (WCD938X_BASE_ADDRESS + 0x01E4)
#define WCD938X_TX_COM_NEW_INT_TXADC_INT_L1     (WCD938X_BASE_ADDRESS + 0x01E5)
#define WCD938X_TX_COM_NEW_INT_TXADC_INT_L0     (WCD938X_BASE_ADDRESS + 0x01E6)
#define WCD938X_TX_COM_NEW_INT_TXADC_INT_ULP    (WCD938X_BASE_ADDRESS + 0x01E7)
#define WCD938X_DIGITAL_PAGE_REGISTER           (WCD938X_BASE_ADDRESS + 0x0400)
#define WCD938X_DIGITAL_CHIP_ID0                (WCD938X_BASE_ADDRESS + 0x0401)
#define WCD938X_DIGITAL_CHIP_ID1                (WCD938X_BASE_ADDRESS + 0x0402)
#define WCD938X_DIGITAL_CHIP_ID2                (WCD938X_BASE_ADDRESS + 0x0403)
#define WCD938X_DIGITAL_CHIP_ID3                (WCD938X_BASE_ADDRESS + 0x0404)
#define WCD938X_DIGITAL_SWR_TX_CLK_RATE         (WCD938X_BASE_ADDRESS + 0x0405)
#define WCD938X_DIGITAL_CDC_RST_CTL             (WCD938X_BASE_ADDRESS + 0x0406)
#define WCD938X_DIGITAL_TOP_CLK_CFG             (WCD938X_BASE_ADDRESS + 0x0407)
#define WCD938X_DIGITAL_CDC_ANA_CLK_CTL         (WCD938X_BASE_ADDRESS + 0x0408)
#define WCD938X_DIGITAL_CDC_DIG_CLK_CTL         (WCD938X_BASE_ADDRESS + 0x0409)
#define WCD938X_DIGITAL_SWR_RST_EN              (WCD938X_BASE_ADDRESS + 0x040A)
#define WCD938X_DIGITAL_CDC_PATH_MODE           (WCD938X_BASE_ADDRESS + 0x040B)
#define WCD938X_DIGITAL_CDC_RX_RST              (WCD938X_BASE_ADDRESS + 0x040C)
#define WCD938X_DIGITAL_CDC_RX0_CTL             (WCD938X_BASE_ADDRESS + 0x040D)
#define WCD938X_DIGITAL_CDC_RX1_CTL             (WCD938X_BASE_ADDRESS + 0x040E)
#define WCD938X_DIGITAL_CDC_RX2_CTL             (WCD938X_BASE_ADDRESS + 0x040F)
#define WCD938X_DIGITAL_CDC_TX_ANA_MODE_0_1     (WCD938X_BASE_ADDRESS + 0x0410)
#define WCD938X_DIGITAL_CDC_TX_ANA_MODE_2_3     (WCD938X_BASE_ADDRESS + 0x0411)
#define WCD938X_DIGITAL_CDC_COMP_CTL_0          (WCD938X_BASE_ADDRESS + 0x0414)
#define WCD938X_DIGITAL_CDC_ANA_TX_CLK_CTL      (WCD938X_BASE_ADDRESS + 0x0417)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A1_0        (WCD938X_BASE_ADDRESS + 0x0418)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A1_1        (WCD938X_BASE_ADDRESS + 0x0419)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A2_0        (WCD938X_BASE_ADDRESS + 0x041A)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A2_1        (WCD938X_BASE_ADDRESS + 0x041B)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A3_0        (WCD938X_BASE_ADDRESS + 0x041C)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A3_1        (WCD938X_BASE_ADDRESS + 0x041D)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A4_0        (WCD938X_BASE_ADDRESS + 0x041E)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A4_1        (WCD938X_BASE_ADDRESS + 0x041F)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A5_0        (WCD938X_BASE_ADDRESS + 0x0420)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A5_1        (WCD938X_BASE_ADDRESS + 0x0421)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A6_0        (WCD938X_BASE_ADDRESS + 0x0422)
#define WCD938X_DIGITAL_CDC_HPH_DSM_A7_0        (WCD938X_BASE_ADDRESS + 0x0423)
#define WCD938X_DIGITAL_CDC_HPH_DSM_C_0         (WCD938X_BASE_ADDRESS + 0x0424)
#define WCD938X_DIGITAL_CDC_HPH_DSM_C_1         (WCD938X_BASE_ADDRESS + 0x0425)
#define WCD938X_DIGITAL_CDC_HPH_DSM_C_2         (WCD938X_BASE_ADDRESS + 0x0426)
#define WCD938X_DIGITAL_CDC_HPH_DSM_C_3         (WCD938X_BASE_ADDRESS + 0x0427)
#define WCD938X_DIGITAL_CDC_HPH_DSM_R1          (WCD938X_BASE_ADDRESS + 0x0428)
#define WCD938X_DIGITAL_CDC_HPH_DSM_R2          (WCD938X_BASE_ADDRESS + 0x0429)
#define WCD938X_DIGITAL_CDC_HPH_DSM_R3          (WCD938X_BASE_ADDRESS + 0x042A)
#define WCD938X_DIGITAL_CDC_HPH_DSM_R4          (WCD938X_BASE_ADDRESS + 0x042B)
#define WCD938X_DIGITAL_CDC_HPH_DSM_R5          (WCD938X_BASE_ADDRESS + 0x042C)
#define WCD938X_DIGITAL_CDC_HPH_DSM_R6          (WCD938X_BASE_ADDRESS + 0x042D)
#define WCD938X_DIGITAL_CDC_HPH_DSM_R7          (WCD938X_BASE_ADDRESS + 0x042E)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A1_0        (WCD938X_BASE_ADDRESS + 0x042F)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A1_1        (WCD938X_BASE_ADDRESS + 0x0430)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A2_0        (WCD938X_BASE_ADDRESS + 0x0431)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A2_1        (WCD938X_BASE_ADDRESS + 0x0432)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A3_0        (WCD938X_BASE_ADDRESS + 0x0433)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A3_1        (WCD938X_BASE_ADDRESS + 0x0434)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A4_0        (WCD938X_BASE_ADDRESS + 0x0435)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A4_1        (WCD938X_BASE_ADDRESS + 0x0436)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A5_0        (WCD938X_BASE_ADDRESS + 0x0437)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A5_1        (WCD938X_BASE_ADDRESS + 0x0438)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A6_0        (WCD938X_BASE_ADDRESS + 0x0439)
#define WCD938X_DIGITAL_CDC_AUX_DSM_A7_0        (WCD938X_BASE_ADDRESS + 0x043A)
#define WCD938X_DIGITAL_CDC_AUX_DSM_C_0         (WCD938X_BASE_ADDRESS + 0x043B)
#define WCD938X_DIGITAL_CDC_AUX_DSM_C_1         (WCD938X_BASE_ADDRESS + 0x043C)
#define WCD938X_DIGITAL_CDC_AUX_DSM_C_2         (WCD938X_BASE_ADDRESS + 0x043D)
#define WCD938X_DIGITAL_CDC_AUX_DSM_C_3         (WCD938X_BASE_ADDRESS + 0x043E)
#define WCD938X_DIGITAL_CDC_AUX_DSM_R1          (WCD938X_BASE_ADDRESS + 0x043F)
#define WCD938X_DIGITAL_CDC_AUX_DSM_R2          (WCD938X_BASE_ADDRESS + 0x0440)
#define WCD938X_DIGITAL_CDC_AUX_DSM_R3          (WCD938X_BASE_ADDRESS + 0x0441)
#define WCD938X_DIGITAL_CDC_AUX_DSM_R4          (WCD938X_BASE_ADDRESS + 0x0442)
#define WCD938X_DIGITAL_CDC_AUX_DSM_R5          (WCD938X_BASE_ADDRESS + 0x0443)
#define WCD938X_DIGITAL_CDC_AUX_DSM_R6          (WCD938X_BASE_ADDRESS + 0x0444)
#define WCD938X_DIGITAL_CDC_AUX_DSM_R7          (WCD938X_BASE_ADDRESS + 0x0445)
#define WCD938X_DIGITAL_CDC_HPH_GAIN_RX_0       (WCD938X_BASE_ADDRESS + 0x0446)
#define WCD938X_DIGITAL_CDC_HPH_GAIN_RX_1       (WCD938X_BASE_ADDRESS + 0x0447)
#define WCD938X_DIGITAL_CDC_HPH_GAIN_DSD_0      (WCD938X_BASE_ADDRESS + 0x0448)
#define WCD938X_DIGITAL_CDC_HPH_GAIN_DSD_1      (WCD938X_BASE_ADDRESS + 0x0449)
#define WCD938X_DIGITAL_CDC_HPH_GAIN_DSD_2      (WCD938X_BASE_ADDRESS + 0x044A)
#define WCD938X_DIGITAL_CDC_AUX_GAIN_DSD_0      (WCD938X_BASE_ADDRESS + 0x044B)
#define WCD938X_DIGITAL_CDC_AUX_GAIN_DSD_1      (WCD938X_BASE_ADDRESS + 0x044C)
#define WCD938X_DIGITAL_CDC_AUX_GAIN_DSD_2      (WCD938X_BASE_ADDRESS + 0x044D)
#define WCD938X_DIGITAL_CDC_HPH_GAIN_CTL        (WCD938X_BASE_ADDRESS + 0x044E)
#define WCD938X_DIGITAL_CDC_AUX_GAIN_CTL        (WCD938X_BASE_ADDRESS + 0x044F)
#define WCD938X_DIGITAL_CDC_EAR_PATH_CTL        (WCD938X_BASE_ADDRESS + 0x0450)
#define WCD938X_DIGITAL_CDC_SWR_CLH             (WCD938X_BASE_ADDRESS + 0x0451)
#define WCD938X_DIGITAL_SWR_CLH_BYP             (WCD938X_BASE_ADDRESS + 0x0452)
#define WCD938X_DIGITAL_CDC_TX0_CTL             (WCD938X_BASE_ADDRESS + 0x0453)
#define WCD938X_DIGITAL_CDC_TX1_CTL             (WCD938X_BASE_ADDRESS + 0x0454)
#define WCD938X_DIGITAL_CDC_TX2_CTL             (WCD938X_BASE_ADDRESS + 0x0455)
#define WCD938X_DIGITAL_CDC_TX_RST              (WCD938X_BASE_ADDRESS + 0x0456)
#define WCD938X_DIGITAL_CDC_REQ_CTL             (WCD938X_BASE_ADDRESS + 0x0457)
#define WCD938X_DIGITAL_CDC_RST                 (WCD938X_BASE_ADDRESS + 0x0458)
#define WCD938X_DIGITAL_CDC_AMIC_CTL            (WCD938X_BASE_ADDRESS + 0x045A)
#define WCD938X_DIGITAL_CDC_DMIC_CTL            (WCD938X_BASE_ADDRESS + 0x045B)
#define WCD938X_DIGITAL_CDC_DMIC1_CTL           (WCD938X_BASE_ADDRESS + 0x045C)
#define WCD938X_DIGITAL_CDC_DMIC2_CTL           (WCD938X_BASE_ADDRESS + 0x045D)
#define WCD938X_DIGITAL_CDC_DMIC3_CTL           (WCD938X_BASE_ADDRESS + 0x045E)
#define WCD938X_DIGITAL_CDC_DMIC4_CTL           (WCD938X_BASE_ADDRESS + 0x045F)
#define WCD938X_DIGITAL_EFUSE_PRG_CTL           (WCD938X_BASE_ADDRESS + 0x0460)
#define WCD938X_DIGITAL_EFUSE_CTL               (WCD938X_BASE_ADDRESS + 0x0461)
#define WCD938X_DIGITAL_CDC_DMIC_RATE_1_2       (WCD938X_BASE_ADDRESS + 0x0462)
#define WCD938X_DIGITAL_CDC_DMIC_RATE_3_4       (WCD938X_BASE_ADDRESS + 0x0463)
#define WCD938X_DIGITAL_PDM_WD_CTL0             (WCD938X_BASE_ADDRESS + 0x0465)
#define WCD938X_DIGITAL_PDM_WD_CTL1             (WCD938X_BASE_ADDRESS + 0x0466)
#define WCD938X_DIGITAL_PDM_WD_CTL2             (WCD938X_BASE_ADDRESS + 0x0467)
#define WCD938X_DIGITAL_INTR_MODE               (WCD938X_BASE_ADDRESS + 0x046A)
#define WCD938X_DIGITAL_INTR_MASK_0             (WCD938X_BASE_ADDRESS + 0x046B)
#define WCD938X_DIGITAL_INTR_MASK_1             (WCD938X_BASE_ADDRESS + 0x046C)
#define WCD938X_DIGITAL_INTR_MASK_2             (WCD938X_BASE_ADDRESS + 0x046D)
#define WCD938X_DIGITAL_INTR_STATUS_0           (WCD938X_BASE_ADDRESS + 0x046E)
#define WCD938X_DIGITAL_INTR_STATUS_1           (WCD938X_BASE_ADDRESS + 0x046F)
#define WCD938X_DIGITAL_INTR_STATUS_2           (WCD938X_BASE_ADDRESS + 0x0470)
#define WCD938X_DIGITAL_INTR_CLEAR_0            (WCD938X_BASE_ADDRESS + 0x0471)
#define WCD938X_DIGITAL_INTR_CLEAR_1            (WCD938X_BASE_ADDRESS + 0x0472)
#define WCD938X_DIGITAL_INTR_CLEAR_2            (WCD938X_BASE_ADDRESS + 0x0473)
#define WCD938X_DIGITAL_INTR_LEVEL_0            (WCD938X_BASE_ADDRESS + 0x0474)
#define WCD938X_DIGITAL_INTR_LEVEL_1            (WCD938X_BASE_ADDRESS + 0x0475)
#define WCD938X_DIGITAL_INTR_LEVEL_2            (WCD938X_BASE_ADDRESS + 0x0476)
#define WCD938X_DIGITAL_INTR_SET_0              (WCD938X_BASE_ADDRESS + 0x0477)
#define WCD938X_DIGITAL_INTR_SET_1              (WCD938X_BASE_ADDRESS + 0x0478)
#define WCD938X_DIGITAL_INTR_SET_2              (WCD938X_BASE_ADDRESS + 0x0479)
#define WCD938X_DIGITAL_INTR_TEST_0             (WCD938X_BASE_ADDRESS + 0x047A)
#define WCD938X_DIGITAL_INTR_TEST_1             (WCD938X_BASE_ADDRESS + 0x047B)
#define WCD938X_DIGITAL_INTR_TEST_2             (WCD938X_BASE_ADDRESS + 0x047C)
#define WCD938X_DIGITAL_TX_MODE_DBG_EN          (WCD938X_BASE_ADDRESS + 0x047F)
#define WCD938X_DIGITAL_TX_MODE_DBG_0_1         (WCD938X_BASE_ADDRESS + 0x0480)
#define WCD938X_DIGITAL_TX_MODE_DBG_2_3         (WCD938X_BASE_ADDRESS + 0x0481)
#define WCD938X_DIGITAL_LB_IN_SEL_CTL           (WCD938X_BASE_ADDRESS + 0x0482)
#define WCD938X_DIGITAL_LOOP_BACK_MODE          (WCD938X_BASE_ADDRESS + 0x0483)
#define WCD938X_DIGITAL_SWR_DAC_TEST            (WCD938X_BASE_ADDRESS + 0x0484)
#define WCD938X_DIGITAL_SWR_HM_TEST_RX_0        (WCD938X_BASE_ADDRESS + 0x0485)
#define WCD938X_DIGITAL_SWR_HM_TEST_TX_0        (WCD938X_BASE_ADDRESS + 0x0486)
#define WCD938X_DIGITAL_SWR_HM_TEST_RX_1        (WCD938X_BASE_ADDRESS + 0x0487)
#define WCD938X_DIGITAL_SWR_HM_TEST_TX_1        (WCD938X_BASE_ADDRESS + 0x0488)
#define WCD938X_DIGITAL_SWR_HM_TEST_TX_2        (WCD938X_BASE_ADDRESS + 0x0489)
#define WCD938X_DIGITAL_SWR_HM_TEST_0           (WCD938X_BASE_ADDRESS + 0x048A)
#define WCD938X_DIGITAL_SWR_HM_TEST_1           (WCD938X_BASE_ADDRESS + 0x048B)
#define WCD938X_DIGITAL_PAD_CTL_SWR_0           (WCD938X_BASE_ADDRESS + 0x048C)
#define WCD938X_DIGITAL_PAD_CTL_SWR_1           (WCD938X_BASE_ADDRESS + 0x048D)
#define WCD938X_DIGITAL_I2C_CTL                 (WCD938X_BASE_ADDRESS + 0x048E)
#define WCD938X_DIGITAL_CDC_TX_TANGGU_SW_MODE   (WCD938X_BASE_ADDRESS + 0x048F)
#define WCD938X_DIGITAL_EFUSE_TEST_CTL_0        (WCD938X_BASE_ADDRESS + 0x0490)
#define WCD938X_DIGITAL_EFUSE_TEST_CTL_1        (WCD938X_BASE_ADDRESS + 0x0491)
#define WCD938X_DIGITAL_EFUSE_T_DATA_0          (WCD938X_BASE_ADDRESS + 0x0492)
#define WCD938X_DIGITAL_EFUSE_T_DATA_1          (WCD938X_BASE_ADDRESS + 0x0493)
#define WCD938X_DIGITAL_PAD_CTL_PDM_RX0         (WCD938X_BASE_ADDRESS + 0x0494)
#define WCD938X_DIGITAL_PAD_CTL_PDM_RX1         (WCD938X_BASE_ADDRESS + 0x0495)
#define WCD938X_DIGITAL_PAD_CTL_PDM_TX0         (WCD938X_BASE_ADDRESS + 0x0496)
#define WCD938X_DIGITAL_PAD_CTL_PDM_TX1         (WCD938X_BASE_ADDRESS + 0x0497)
#define WCD938X_DIGITAL_PAD_CTL_PDM_TX2         (WCD938X_BASE_ADDRESS + 0x0498)
#define WCD938X_DIGITAL_PAD_INP_DIS_0           (WCD938X_BASE_ADDRESS + 0x0499)
#define WCD938X_DIGITAL_PAD_INP_DIS_1           (WCD938X_BASE_ADDRESS + 0x049A)
#define WCD938X_DIGITAL_DRIVE_STRENGTH_0        (WCD938X_BASE_ADDRESS + 0x049B)
#define WCD938X_DIGITAL_DRIVE_STRENGTH_1        (WCD938X_BASE_ADDRESS + 0x049C)
#define WCD938X_DIGITAL_DRIVE_STRENGTH_2        (WCD938X_BASE_ADDRESS + 0x049D)
#define WCD938X_DIGITAL_RX_DATA_EDGE_CTL        (WCD938X_BASE_ADDRESS + 0x049E)
#define WCD938X_DIGITAL_TX_DATA_EDGE_CTL        (WCD938X_BASE_ADDRESS + 0x049F)
#define WCD938X_DIGITAL_GPIO_MODE               (WCD938X_BASE_ADDRESS + 0x04A0)
#define WCD938X_DIGITAL_PIN_CTL_OE              (WCD938X_BASE_ADDRESS + 0x04A1)
#define WCD938X_DIGITAL_PIN_CTL_DATA_0          (WCD938X_BASE_ADDRESS + 0x04A2)
#define WCD938X_DIGITAL_PIN_CTL_DATA_1          (WCD938X_BASE_ADDRESS + 0x04A3)
#define WCD938X_DIGITAL_PIN_STATUS_0            (WCD938X_BASE_ADDRESS + 0x04A4)
#define WCD938X_DIGITAL_PIN_STATUS_1            (WCD938X_BASE_ADDRESS + 0x04A5)
#define WCD938X_DIGITAL_DIG_DEBUG_CTL           (WCD938X_BASE_ADDRESS + 0x04A6)
#define WCD938X_DIGITAL_DIG_DEBUG_EN            (WCD938X_BASE_ADDRESS + 0x04A7)
#define WCD938X_DIGITAL_ANA_CSR_DBG_ADD         (WCD938X_BASE_ADDRESS + 0x04A8)
#define WCD938X_DIGITAL_ANA_CSR_DBG_CTL         (WCD938X_BASE_ADDRESS + 0x04A9)
#define WCD938X_DIGITAL_SSP_DBG                 (WCD938X_BASE_ADDRESS + 0x04AA)
#define WCD938X_DIGITAL_MODE_STATUS_0           (WCD938X_BASE_ADDRESS + 0x04AB)
#define WCD938X_DIGITAL_MODE_STATUS_1           (WCD938X_BASE_ADDRESS + 0x04AC)
#define WCD938X_DIGITAL_SPARE_0                 (WCD938X_BASE_ADDRESS + 0x04AD)
#define WCD938X_DIGITAL_SPARE_1                 (WCD938X_BASE_ADDRESS + 0x04AE)
#define WCD938X_DIGITAL_SPARE_2                 (WCD938X_BASE_ADDRESS + 0x04AF)
#define WCD938X_DIGITAL_EFUSE_REG_0             (WCD938X_BASE_ADDRESS + 0x04B0)
#define WCD938X_DIGITAL_EFUSE_REG_1             (WCD938X_BASE_ADDRESS + 0x04B1)
#define WCD938X_DIGITAL_EFUSE_REG_2             (WCD938X_BASE_ADDRESS + 0x04B2)
#define WCD938X_DIGITAL_EFUSE_REG_3             (WCD938X_BASE_ADDRESS + 0x04B3)
#define WCD938X_DIGITAL_EFUSE_REG_4             (WCD938X_BASE_ADDRESS + 0x04B4)
#define WCD938X_DIGITAL_EFUSE_REG_5             (WCD938X_BASE_ADDRESS + 0x04B5)
#define WCD938X_DIGITAL_EFUSE_REG_6             (WCD938X_BASE_ADDRESS + 0x04B6)
#define WCD938X_DIGITAL_EFUSE_REG_7             (WCD938X_BASE_ADDRESS + 0x04B7)
#define WCD938X_DIGITAL_EFUSE_REG_8             (WCD938X_BASE_ADDRESS + 0x04B8)
#define WCD938X_DIGITAL_EFUSE_REG_9             (WCD938X_BASE_ADDRESS + 0x04B9)
#define WCD938X_DIGITAL_EFUSE_REG_10            (WCD938X_BASE_ADDRESS + 0x04BA)
#define WCD938X_DIGITAL_EFUSE_REG_11            (WCD938X_BASE_ADDRESS + 0x04BB)
#define WCD938X_DIGITAL_EFUSE_REG_12            (WCD938X_BASE_ADDRESS + 0x04BC)
#define WCD938X_DIGITAL_EFUSE_REG_13            (WCD938X_BASE_ADDRESS + 0x04BD)
#define WCD938X_DIGITAL_EFUSE_REG_14            (WCD938X_BASE_ADDRESS + 0x04BE)
#define WCD938X_DIGITAL_EFUSE_REG_15            (WCD938X_BASE_ADDRESS + 0x04BF)
#define WCD938X_DIGITAL_EFUSE_REG_16            (WCD938X_BASE_ADDRESS + 0x04C0)
#define WCD938X_DIGITAL_EFUSE_REG_17            (WCD938X_BASE_ADDRESS + 0x04C1)
#define WCD938X_DIGITAL_EFUSE_REG_18            (WCD938X_BASE_ADDRESS + 0x04C2)
#define WCD938X_DIGITAL_EFUSE_REG_19            (WCD938X_BASE_ADDRESS + 0x04C3)
#define WCD938X_DIGITAL_EFUSE_REG_20            (WCD938X_BASE_ADDRESS + 0x04C4)
#define WCD938X_DIGITAL_EFUSE_REG_21            (WCD938X_BASE_ADDRESS + 0x04C5)
#define WCD938X_DIGITAL_EFUSE_REG_22            (WCD938X_BASE_ADDRESS + 0x04C6)
#define WCD938X_DIGITAL_EFUSE_REG_23            (WCD938X_BASE_ADDRESS + 0x04C7)
#define WCD938X_DIGITAL_EFUSE_REG_24            (WCD938X_BASE_ADDRESS + 0x04C8)
#define WCD938X_DIGITAL_EFUSE_REG_25            (WCD938X_BASE_ADDRESS + 0x04C9)
#define WCD938X_DIGITAL_EFUSE_REG_26            (WCD938X_BASE_ADDRESS + 0x04CA)
#define WCD938X_DIGITAL_EFUSE_REG_27            (WCD938X_BASE_ADDRESS + 0x04CB)
#define WCD938X_DIGITAL_EFUSE_REG_28            (WCD938X_BASE_ADDRESS + 0x04CC)
#define WCD938X_DIGITAL_EFUSE_REG_29            (WCD938X_BASE_ADDRESS + 0x04CD)
#define WCD938X_DIGITAL_EFUSE_REG_30            (WCD938X_BASE_ADDRESS + 0x04CE)
#define WCD938X_DIGITAL_EFUSE_REG_31            (WCD938X_BASE_ADDRESS + 0x04CF)
#define WCD938X_DIGITAL_TX_REQ_FB_CTL_0         (WCD938X_BASE_ADDRESS + 0x04D0)
#define WCD938X_DIGITAL_TX_REQ_FB_CTL_1         (WCD938X_BASE_ADDRESS + 0x04D1)
#define WCD938X_DIGITAL_TX_REQ_FB_CTL_2         (WCD938X_BASE_ADDRESS + 0x04D2)
#define WCD938X_DIGITAL_TX_REQ_FB_CTL_3         (WCD938X_BASE_ADDRESS + 0x04D3)
#define WCD938X_DIGITAL_TX_REQ_FB_CTL_4         (WCD938X_BASE_ADDRESS + 0x04D4)
#define WCD938X_DIGITAL_DEM_BYPASS_DATA0        (WCD938X_BASE_ADDRESS + 0x04D5)
#define WCD938X_DIGITAL_DEM_BYPASS_DATA1        (WCD938X_BASE_ADDRESS + 0x04D6)
#define WCD938X_DIGITAL_DEM_BYPASS_DATA2        (WCD938X_BASE_ADDRESS + 0x04D7)
#define WCD938X_DIGITAL_DEM_BYPASS_DATA3        (WCD938X_BASE_ADDRESS + 0x04D8)

#define WCD938X_REGISTERS_MAX_SIZE (WCD938X_DIGITAL_DEM_BYPASS_DATA3 + 1)
#define WCD938X_MAX_REGISTER (WCD938X_REGISTERS_MAX_SIZE - 1)

#endif /*_WCD938X_REGISTERS_H*/
