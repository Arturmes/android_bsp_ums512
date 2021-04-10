/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_HARDWARE_ISHARKL2_H
#define __ASM_ARCH_HARDWARE_ISHARKL2_H


#define SPRD_PUB0_BASE			0xC0000000
#define SPRD_PUB0_GLB_BASE		0xC0010000
#define SPRD_PUB0_AXIBM0_BASE		0xC0020000
#define SPRD_PUB0_AXIBM1_BASE		0xC0030000
#define SPRD_PUB0_AXIBM2_BASE		0xC0040000
#define SPRD_PUB0_AXIBM3_BASE		0xC0050000
#define SPRD_PUB0_AXIBM4_BASE		0xC0060000
#define SPRD_PUB0_AXIBM5_BASE		0xC0070000
#define SPRD_SDIO0_BASE			0xC0900000
#define SPRD_SDIO1_BASE			0xC0A00000
#define SPRD_SDIO2_BASE			0xC0B00000
#define SPRD_EMMC_BASE			0xC0C00000
#define SPRD_CE0_BASE			0xC0D00000
#define SPRD_CE_EFUSE_BASE		0xC0D80000
#define SPRD_CE1_BASE			0xC0E00000
#define SPRD_SECURE_CE_PHYS		0xC0D00000
#define SPRD_PUBLIC_CE_PHYS		0xC0E00000
//#define SPRD_NOC_BASE         		0xC0F00000
#define SPRD_GPU_BASE		    	0xD0000000
#define SPRD_GPUAPB_BASE		0xD0100000
#define SPRD_VSP_CLK_BASE		0xD1000000
#define SPRD_VSPAHB_BASE		0xD1100000
#define SPRD_VSP_BASE			0xD1200000
#define SPRD_GSP0_BASE          	0xD1600000
#define SPRD_CAMAHB_BASE		0xD2100000
#define SPRD_DCAM0_BASE			0xD2200000
#define SPRD_DCAM1_BASE			0xD2300000
#define SPRD_JPG0_BASE			0xD2500000
#define SPRD_CSI0_BASE			0xD2700000
#define SPRD_CSI1_BASE			0xD2800000
#define SPRD_PERF_MON_BASE		0xD2A00000
#define SPRD_CPP_BASE           	0xD2B00000
#define SPRD_ISP_MAIN_BASE		0xD2E00000
#define SPRD_ISP_LITE_BASE		0xD2F00000
#define SPRD_DCAMPCKG_BASE		0xD3000000
#define SPRD_DISPAHB_BASE		0xD3100000
#define SPRD_DPU_BASE			0xD3200000
#define SPRD_DSI0_BASE			0xD3900000
#define SPRD_APCLK_BASE			0xE2000000
#define SPRD_DMA_BASE                   0xE2100000 
#define SPRD_AHB_BASE			0xE2210000
#define SPRD_AHB_PHYS			0xE2210000
#define SPRD_USB_OTG_BASE		0xE2500000
#define SPRD_UART0_BASE			0xE7000000
#define SPRD_UART1_BASE			0xE7100000
#define SPRD_UART2_BASE			0xE7200000
#define SPRD_UART3_BASE			0xE7300000
#define SPRD_UART4_BASE			0xE7400000
#define ARM_UART0_BASE       		SPRD_UART0_BASE
#define ARM_UART1_BASE       		SPRD_UART1_BASE
#define ARM_UART2_BASE       		SPRD_UART2_BASE
#define ARM_UART3_BASE       		SPRD_UART3_BASE
#define ARM_UART4_BASE       		SPRD_UART4_BASE
#define SPRD_IIS0_BASE			0xE7600000
#define SPRD_IIS1_BASE			0xE7700000
#define SPRD_IIS2_BASE			0xE7800000
#define SPRD_IIS3_BASE			0xE7900000
#define SPRD_APBREG_BASE    	    	0xE7B00000
#define CTL_BASE_BASE			SPRD_APBREG_BASE
#define SPRD_I2C0_BASE			0xE7D00000
#define SPRD_I2C0_PHYS			SPRD_I2C0_BASE
#define SPRD_I2C1_BASE			0xE7E00000
#define SPRD_I2C1_PHYS			SPRD_I2C1_BASE
#define SPRD_I2C2_BASE			0xE7F00000
#define SPRD_I2C2_PHYS			SPRD_I2C2_BASE
#define SPRD_I2C4_BASE			0xE8100000
#define SPRD_I2C4_PHYS			SPRD_I2C4_BASE
#define SPRD_I2C5_BASE			0xE8200000
#define SPRD_SPI0_BASE			0xE8400000
#define SPRD_SPI1_BASE			0xE8500000
#define SPRD_SPI2_BASE			0xE8600000
#define SPRD_SPI3_BASE			0xE8700000
#define SPRD_SIM0_BASE			0xE8800000



#define SPRD_ADI_BASE			0xE4000000
#define SPRD_ADISLAVE_BASE		0xE4008000
#define SPRD_AON_SYSTIMER_BASE		0xE4040000
#define SPRD_AON_TIMER_BASE		0xE4050000
#define SPRD_SEC_GPIO_BASE		0xE4060000
#define SPRD_MDAR_BASE			0xE4070000
#define SPRD_I2C_BASE			0xE4080000
#define SPRD_CTD_BASE			0xE4090000
#define SPRD_MBOX_BASE			0xE40a0000
#define SPRD_GPU_TS_PRE_BASE		0xE40B0000
#define SPRD_DEF_SLAVE_BASE		0xE40F0000
#define SPRD_ANLG_PHY_G2		0xE4100000
#define SPRD_ANLG_PHY_G4		0xE4103000
#define SPRD_ANLG_PHY_G6		0xE4106000
#define SPRD_ANLG_PHY_G8		0xE4109000
#define SPRD_ANLG_PHY_G10		0xE410C000
#define SPRD_ANLG_PHY_G12		0xE4110000
#define SPRD_MPLL0_PHY_BASE		0xE4120000
#define SPRD_MPLL1_PHY_BASE		0xE4130000
#define SPRD_USB2_PHY_BASE		0xE4140000
#define SPRD_CSI0_PHY_BASE		0xE4180000
#define SPRD_CSI1_PHY_BASE		0xE4190000
#define SPRD_DSI0_PHY_BASE		0xE41B0000
#define SPRD_DSI1_PHY_BASE		0xE41C0000
#define SPRD_CZPLL_PHY_BASE		0xE41E0000
#define SPRD_DSIPLL_APB_BASE		0xE41F0000
#define SPRD_AP_EIC2_BASE		0xE4200000
#define SPRD_AP_EIC0_BASE		0xE4210000
#define SPRD_EIC_BASE			SPRD_AP_EIC0_BASE
#define SPRD_AP_EIC1_BASE		0xE4218000
#define SPRD_APTIMER0_BASE		0xE4220000
#define SPRD_SYSCNT_BASE		0xE4230000
#define SPRD_UIDEFUSE_BASE		0xE4240000
#define SPRD_KPD_BASE			0xE4250000
#define SPRD_PWM_BASE			0xE4260000
#define SPRD_BIADVFS_BASE		0xE4270000
#define SPRD_GPIO_BASE			0xE4280000
#define SPRD_LPCM_BASE			0xE4290000
#define SPRD_PIN_BASE			0xE42A0000
#define SPRD_PMU_BASE		 	0xE42B0000
#define SPRD_COM_PMU_APB		0xE42C0000
#define SPRD_PRE_DIV_CLK		0xE42D0000
#define SPRD_AONCKG_BASE		0xE42D0200
#define SPRD_DDR0_CKG_BASE		0xE42D4000
#define SPRD_AONAPB_BASE		0xE42E0000
#define SPRD_GPUTHM_BASE	      	0xE42F0000
#define SPRD_COMMON_APB			0xE4300000
#define SPRD_CA53WDG_BASE		0xE4310000
#define SPRD_APTIMER1_BASE		0xE4320000
#define SPRD_APTIMER2_BASE		0xE4330000
#define SPRD_DEBUG_BASE			0xE4340000
#define SPRD_APINTC0_BASE		0xE4350000
#define SPRD_APINTC1_BASE		0xE4360000
#define SPRD_APINTC2_BASE		0xE4370000
#define SPRD_APINTC3_BASE		0xE4380000
#define SPRD_SEC_EIC_BASE		0xE4390000
#define SPRD_SEC_EIC1_BASE		0xE4398000
#define SPRD_BIATHM_BASE	      	0xE43A0000
#define SPRD_BIATHM1_BASE	      	0xE43B0000
#define SPRD_VBC_BASE			0xE4400000
#define SPRD_AUD_BASE			0xE4410000
#define SPRD_SEC_RTC_BASE	      	0xE4460000
#define SPRD_ALLLCP_ECI_BASE	      	0xE4470000
#define SPRD_PUBCP_WDG_BASE	      	0xE4480000
#define SPRD_PUBCP_SYST_BASE	      	0xE4490000
#define SPRD_PUBCP_TMR_BASE	      	0xE44A0000
#define SPRD_BIADVFS_CPU0_BASE	      	0xE44B0000
#define SPRD_BIADVFS_CPU1_BASE	      	0xE44C0000
#define SPRD_BUSMON_TMR_BASE	      	0xE44D0000
#define SPRD_AON_SERDES_BASE	      	0xE44F0000
#define SPRD_AON_SPINLOCK_BASE	      	0xE4500000
#define SPRD_AON_DMA_BASE		0xE4600000
#define SPRD_SEC_TMR_BASE	      	0xE4840000
#define SPRD_SEC_WDG_BASE	      	0xE4860000
#define SPRD_SEC_REG_BASE	      	0xE4880000
#define SPRD_SEC_DBG_BASE	      	0xE4890000


#define HOLDING_PEN_VADDR		(SPRD_AHB_BASE + 0x14)
#define CPU_JUMP_VADDR			(HOLDING_PEN_VADDR + 0X4)

/* registers for watchdog ,RTC, touch panel, aux adc, analog die... */
#define SPRD_ADI_PHYS	SPRD_ADI_BASE
#define SPRD_MISC_BASE	((unsigned int)SPRD_ADI_BASE)
#define SPRD_MISC_PHYS	((unsigned int)SPRD_ADI_PHYS)
#define SPRD_EIC_PHYS	SPRD_EIC_BASE
#define SPRD_EIC1_PHYS	SPRD_AP_EIC1_BASE
#define SPRD_EIC2_PHYS	SPRD_AP_EIC2_BASE
#define SPRD_SYSCNT_PHYS	SPRD_SYSCNT_BASE
#define SPRD_UIDEFUSE_PHYS	SPRD_UIDEFUSE_BASE
#define CTL_BASE_PWM			SPRD_PWM_BASE
#define SPRD_GPIO_PHYS	 		SPRD_GPIO_BASE
#define SPRD_AONCKG_PHYS		SPRD_AONCKG_BASE
#define SPRD_USB_BASE			SPRD_USB_OTG_BASE
#define SPRD_UART0_PHYS			SPRD_UART0_BASE
#define SPRD_UART1_PHYS			SPRD_UART1_BASE

#define ANA_SWICHG_BASE		(SPRD_ADISLAVE_BASE + 0x00 )
#define ANA_TIMER_BASE		(SPRD_ADISLAVE_BASE + 0x40 )
#define ANA_FSCHG_BASE		(SPRD_ADISLAVE_BASE + 0x60 )
#define ANA_WDG_BASE		(SPRD_ADISLAVE_BASE + 0x80 )
#define ANA_CHGWDG_BASE		(SPRD_ADISLAVE_BASE + 0xC0 )
#define ANA_TYPEC_BASE		(SPRD_ADISLAVE_BASE + 0x100 )
#define ANA_INTC_BASE	(SPRD_ADISLAVE_BASE + 0x140 )
#define ANA_CAL_BASE	(SPRD_ADISLAVE_BASE + 0x180 )
#define ANA_AUDIFA_BASE	(SPRD_ADISLAVE_BASE + 0x1C0 )
#define ANA_BLTC_BASE	(SPRD_ADISLAVE_BASE + 0x200 )
#define ANA_FLASH_BASE	(SPRD_ADISLAVE_BASE + 0x240 )
#define ANA_RTC_BASE		(SPRD_ADISLAVE_BASE + 0x280 )
#define ANA_EIC_BASE		(SPRD_ADISLAVE_BASE + 0x300 )
#define ANA_EFS_BASE		(SPRD_ADISLAVE_BASE + 0x380 )
#define ANA_THM_BASE		(SPRD_ADISLAVE_BASE + 0x400 )
#define ANA_ADC_BASE		(SPRD_ADISLAVE_BASE + 0x480 )
#define ANA_PIN_BASE		(SPRD_ADISLAVE_BASE + 0x600 )
#define ANA_AUDCFGA_BASE	(SPRD_ADISLAVE_BASE + 0x700 )
#define ANA_AUDDIG_BASE	(SPRD_ADISLAVE_BASE + 0x800 )
#define ANA_BIF_BASE	(SPRD_ADISLAVE_BASE + 0x900 )
#define ANA_FGU_BASE	(SPRD_ADISLAVE_BASE + 0xA00 )
#define ANA_REGS_GLB_BASE	(SPRD_ADISLAVE_BASE + 0xC00)

#ifndef REGS_AHB_BASE
#define REGS_AHB_BASE		( SPRD_AHB_BASE  + 0x200)
#endif

#define SPRD_IRAM_BASE		SPRD_IRAM0_BASE + 0x1000
#define SPRD_IRAM_PHYS		SPRD_IRAM0_PHYS + 0x1000
#define SPRD_IRAM_SIZE		SZ_4K

#define AON_EMMC_CLK_2X_CFG			0X150
#define AON_SDIO0_CLK_2X_CFG		0X138
#define AON_CLK_FREQ_26M		    	0X00

#define SPRD_GREG_BASE		SPRD_AONAPB_BASE
#define SPRD_GREG_PHYS		SPRD_AONAPB_PHYS
#define SPRD_GREG_SIZE		SZ_64K

#ifndef REGS_GLB_BASE
#define REGS_GLB_BASE           ( SPRD_GREG_BASE )
#endif

#define CHIP_ID_LOW_REG		(SPRD_AHB_BASE + 0xfc)

#define SPRD_GPTIMER_BASE	SPRD_GPTIMER0_BASE
#define SPRD_EFUSE_BASE		SPRD_UIDEFUSE_BASE

#define SDIO0_BASE_ADDR         SPRD_SDIO0_BASE
#define SDIO1_BASE_ADDR         SPRD_SDIO1_BASE
#define SDIO2_BASE_ADDR         SPRD_SDIO2_BASE
#define EMMC_BASE_ADDR          SPRD_EMMC_BASE

#define REGS_ANA_APB_BASE	SPRD_ANA_MISC_BASE
#define REGS_AP_AHB_BASE	SPRD_AHB_BASE
#define REGS_AP_APB_BASE	SPRD_APBREG_BASE
#define REGS_AON_APB_BASE	SPRD_AONAPB_BASE
#define REGS_GPU_APB_BASE	SPRD_GPUAPB_BASE
#define REGS_MM_AHB_BASE	SPRD_MMAHB_BASE
#define REGS_PMU_APB_BASE	SPRD_PMU_BASE
#define REGS_AON_CLK_BASE	SPRD_AONCKG_BASE
#define REGS_AP_CLK_BASE	SPRD_APBCKG_BASE
#define REGS_GPU_CLK_BASE	SPRD_GPUCKG_BASE
#define REGS_MM_CLK_BASE	SPRD_MMCKG_BASE
#define REGS_PUB_APB_BASE	SPRD_PUB_BASE

#define SIPC_SMEM_ADDR 		(CONFIG_PHYS_OFFSET + 120 * SZ_1M)

#define CPT_START_ADDR		(CONFIG_PHYS_OFFSET + 128 * SZ_1M)
#define CPT_TOTAL_SIZE		(SZ_1M * 18)
#define CPT_RING_ADDR		(CPT_START_ADDR + CPT_TOTAL_SIZE - SZ_4K)
#define CPT_RING_SIZE		(SZ_4K)
#define CPT_SMEM_SIZE		(SZ_1M * 2)

#define CPW_START_ADDR		(CONFIG_PHYS_OFFSET + 150* SZ_1M)
#define CPW_TOTAL_SIZE		(SZ_1M * 33)
#define CPW_RING_ADDR		(CPW_START_ADDR + CPW_TOTAL_SIZE - SZ_4K)
#define CPW_RING_SIZE		(SZ_4K)
#define CPW_SMEM_SIZE		(SZ_1M * 2)

#define WCN_START_ADDR		(CONFIG_PHYS_OFFSET + 320 * SZ_1M)
#define WCN_TOTAL_SIZE		(SZ_1M * 5)
#define WCN_RING_ADDR		(WCN_START_ADDR + WCN_TOTAL_SIZE - SZ_4K)
#define WCN_RING_SIZE			(SZ_4K)
#define WCN_SMEM_SIZE		(SZ_1M * 2)

#define GGE_START_ADDR		(CONFIG_PHYS_OFFSET + 128 * SZ_1M)
#define GGE_TOTAL_SIZE		(SZ_1M * 22)
#define GGE_RING_ADDR		(GGE_START_ADDR + GGE_TOTAL_SIZE - SZ_4K)
#define GGE_RING_SIZE		(SZ_4K)
#define GGE_SMEM_SIZE		(SZ_1M * 2)

#define LTE_START_ADDR		(CONFIG_PHYS_OFFSET + 150 * SZ_1M)
#define LTE_TOTAL_SIZE		(SZ_1M * 106)
#define LTE_RING_ADDR		(LTE_START_ADDR + LTE_TOTAL_SIZE - SZ_4K)
#define LTE_RING_SIZE		(SZ_4K)
#define LTE_SMEM_SIZE		(SZ_1M * 2)

#endif