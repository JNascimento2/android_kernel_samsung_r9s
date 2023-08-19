/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Samsung Exynos SoC series Pablo driver
 *
 * Copyright (c) 2019 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_HW_OIS_MCU_V1_1_1_H
#define IS_HW_OIS_MCU_V1_1_1_H

#define OIS_CMD_BASE	0x9800

#include "is-hw-api-common.h"

enum is_hw_ois_mcu_pmu_reg_name {
	R_OIS_CPU_CONFIGURATION,
	R_OIS_CPU_STATUS,
	R_OIS_CPU_STATES,
	R_OIS_CPU_OUT,
	R_PMU_OIS_REG_CNT
};

static const struct is_reg pmu_ois_mcu_regs[] = {
	{0x3840, "OIS_CPU_CONFIGURATION"},
	{0x3844, "OIS_CPU_STATUS"},
	{0x3848, "OIS_CPU_STATES"},
	{0x384c, "OIS_CPU_OPTION"},
	{0x3860, "OIS_CPU_OUT"}
};

static const struct is_reg pmu_ois_mcu_masks[] = {
	{0x1, "LOCAL_PWR_CFG"},
	{0x1, "STATUS"},
	{0xFF, "STATES"},
	{0x1F, "OIS_CPU_OPTION"},
	{0x1, "GRESETn"}
};

enum is_hw_ois_mcu_reg_name {
	R_OIS_CM0P_BOOT,
	R_OIS_CM0P_IRQ,
	R_OIS_CM0P_SYSTICK,
	R_OIS_CM0P_CTRL0,
	R_OIS_CM0P_IRQ_STATUS,
	R_OIS_CM0P_IRQ_ENABLE,
	R_OIS_CM0P_IRQ_CLEAR,
	R_OIS_CM0P_REMAP_I2C_ADDR,
	R_OIS_CM0P_REMAP_SPI_ADDR,
	R_OIS_CM0P_REMAP_SPDMA_ADDR,
	R_OIS_CM0P_MISC0,
	R_OIS_CM0P_MISC1,
	R_OIS_REG_CNT
};

static const struct is_reg ois_mcu_regs[] = {
	{0xe000, "OIS_CM0P_BOOT"},
	{0xe004, "OIS_CM0P_IRQ"},
	{0xe008, "OIS_CM0P_SYSTICK"},
	{0xe00c, "OIS_CM0P_CTRL0"},
	{0xe010, "OIS_CM0P_IRQ_STATUS"},
	{0xe014, "OIS_CM0P_IRQ_ENABLE"},
	{0xe018, "OIS_CM0P_IRQ_CLEAR"},
	{0xe01c, "OIS_CM0P_REMAP_I2C_ADDR"},
	{0xe020, "OIS_CM0P_REMAP_SPI_ADDR"},
	{0xe024, "OIS_CM0P_REMAP_SPDMA_ADDR"},
	{0xe02c, "OIS_CM0P_MISC0"},
	{0xe030, "OIS_CM0P_MISC1"}
};

enum is_hw_ois_mcu_peri_reg_name {
	R_OIS_PERI_FS1,
	R_OIS_PERI_FS2,
	R_OIS_PERI_FS3,
	R_OIS_PERI_CON_CTRL,
	R_OIS_PERI_PUD_CTRL,
	R_OIS_PERI2_CON_CTRL,
	R_OIS_PERI2_PUD_CTRL,
	R_OIS_PERI_USI_CON,
	R_OIS_PERI_USI_CON_CLEAR,
};

static const struct is_reg ois_mcu_peri_regs[] = {
	{0x0060, "OIS_PERI_FS1"},
	{0x0064, "OIS_PERI_FS2"},
	{0x0068, "OIS_PERI_FS3"},
	{0x00a0, "OIS_PERI_CON_CTRL"},
	{0x00a8, "OIS_PERI_PUD_CTRL"},
	{0x00c0, "OIS_PER2_CON_CTRL"},
	{0x00c8, "OIS_PERI2_PUD_CTRL"},
	{0x00c4, "OIS_PERI_USI_CON"},
	{0x00c8, "OIS_PERI_USI_CON_CLEAR"},
};

enum is_hw_ois_mcu_cmd_name {
	R_OIS_CMD_START,
	R_OIS_CMD_STATUS,
	R_OIS_CMD_MODE,
	R_OIS_CMD_WRITE_DATA,
	R_OIS_CMD_GYRO_RESULT,
	R_OIS_CMD_CHECKSUM,
	R_OIS_CMD_READ_STATUS,
	R_OIS_CMD_GYRO_CAL,
	R_OIS_CMD_SINE_1,
	R_OIS_CMD_SINE_2,
	R_OIS_CMD_SINE_3,
	R_OIS_CMD_CENTER_X1,
	R_OIS_CMD_CENTER_X2,
	R_OIS_CMD_CENTER_Y1,
	R_OIS_CMD_CENTER_Y2,
	R_OIS_CMD_READ_WRITE_RESULT,
	R_OIS_CMD_BYPASS_CTRL,
	R_OIS_CMD_SET_GYRO_NOISE,
	R_OIS_CMD_DEVCTRL,
	R_OIS_CMD_GYRO_SLEEP,
	R_OIS_CMD_TAMODE,
	R_OIS_CMD_CACTRL_WRITE,
	R_OIS_CMD_REAR_AF,
	R_OIS_CMD_REAR2_AF,
	R_OIS_CMD_POS1_REAR2_AF,
	R_OIS_CMD_POS2_REAR2_AF,
	R_OIS_CMD_POS1_REAR3_AF,
	R_OIS_CMD_POS2_REAR3_AF,
	R_OIS_CMD_REAR3_AF,
	R_OIS_CMD_MCERR_W,
	R_OIS_CMD_MCERR_W2,
	R_OIS_CMD_THRESH_ERR_LEV_M3,
	R_OIS_CMD_START_WAVE_CHECK,
	R_OIS_CMD_AUTO_TEST_RESULT,
	R_OIS_CMD_THRESH_ERR_LEV,
	R_OIS_CMD_ERR_VAL_CNT,
	R_OIS_CMD_FREQ_LEV,
	R_OIS_CMD_AMPLI_LEV,
	R_OIS_CMD_DUM_PULSE,
	R_OIS_CMD_VYVLE_LEV,
	R_OIS_CMD_THRESH_ERR_LEV_M2,
	R_OIS_CMD_SET_COEF,
	R_OIS_CMD_CTRL_AF,
	R_OIS_CMD_FWINFO_CTRL,
	R_OIS_CMD_TARGET_POS_REAR_X,
	R_OIS_CMD_TARGET_POS_REAR_X2,
	R_OIS_CMD_TARGET_POS_REAR_Y,
	R_OIS_CMD_TARGET_POS_REAR_Y2,
	R_OIS_CMD_HALL_POS_REAR_X,
	R_OIS_CMD_HALL_POS_REAR_X2,
	R_OIS_CMD_HALL_POS_REAR_Y,
	R_OIS_CMD_HALL_POS_REAR_Y2,
	R_OIS_CMD_TARGET_POS_REAR3_X,
	R_OIS_CMD_TARGET_POS_REAR3_X2,
	R_OIS_CMD_TARGET_POS_REAR3_Y,
	R_OIS_CMD_TARGET_POS_REAR3_Y2,
	R_OIS_CMD_HALL_POS_REAR3_X,
	R_OIS_CMD_HALL_POS_REAR3_X2,
	R_OIS_CMD_HALL_POS_REAR3_Y,
	R_OIS_CMD_HALL_POS_REAR3_Y2,
	R_OIS_CMD_TARGET_POS_REAR2_X,
	R_OIS_CMD_TARGET_POS_REAR2_X2,
	R_OIS_CMD_TARGET_POS_REAR2_Y,
	R_OIS_CMD_TARGET_POS_REAR2_Y2,
	R_OIS_CMD_HALL_POS_REAR2_X,
	R_OIS_CMD_HALL_POS_REAR2_X2,
	R_OIS_CMD_HALL_POS_REAR2_Y,
	R_OIS_CMD_HALL_POS_REAR2_Y2,
	R_OIS_CMD_OIS_SEL,
	R_OIS_CMD_REAR_SINX_COUNT1,
	R_OIS_CMD_REAR_SINX_COUNT2,
	R_OIS_CMD_REAR_SINY_COUNT1,
	R_OIS_CMD_REAR_SINY_COUNT2,
	R_OIS_CMD_REAR_SINX_DIFF1,
	R_OIS_CMD_REAR_SINX_DIFF2,
	R_OIS_CMD_REAR_SINY_DIFF1,
	R_OIS_CMD_REAR_SINY_DIFF2,
	R_OIS_CMD_REAR3_SINX_COUNT1,
	R_OIS_CMD_REAR3_SINX_COUNT2,
	R_OIS_CMD_REAR3_SINY_COUNT1,
	R_OIS_CMD_REAR3_SINY_COUNT2,
	R_OIS_CMD_REAR3_SINX_DIFF1,
	R_OIS_CMD_REAR3_SINX_DIFF2,
	R_OIS_CMD_REAR3_SINY_DIFF1,
	R_OIS_CMD_REAR3_SINY_DIFF2,
	R_OIS_CMD_REAR2_SINX_COUNT1,
	R_OIS_CMD_REAR2_SINX_COUNT2,
	R_OIS_CMD_REAR2_SINY_COUNT1,
	R_OIS_CMD_REAR2_SINY_COUNT2,
	R_OIS_CMD_REAR2_SINX_DIFF1,
	R_OIS_CMD_REAR2_SINX_DIFF2,
	R_OIS_CMD_REAR2_SINY_DIFF1,
	R_OIS_CMD_REAR2_SINY_DIFF2,
	R_OIS_CMD_GYRO_VAL_X,
	R_OIS_CMD_GYRO_LOG_X,
	R_OIS_CMD_GYRO_VAL_Y,
	R_OIS_CMD_GYRO_LOG_Y,
	R_OIS_CMD_BYPASS_DEVICE_ID1,
	R_OIS_CMD_BYPASS_DEVICE_ID2,
	R_OIS_CMD_BYPASS_REG_ADD1,
	R_OIS_CMD_BYPASS_REG_ADD2,
	R_OIS_CMD_BYPASS_REG_SIZE,
	R_OIS_CMD_BYPASS_DATA_SIZE,
	R_OIS_CMD_BYPASS_DATA_TRANSFER,
	R_OIS_CMD_BYPASS_DATA_TRANSFER2,
	R_OIS_CMD_FADE_UP1,
	R_OIS_CMD_FADE_UP2,
	R_OIS_CMD_FADE_DOWN1,
	R_OIS_CMD_FADE_DOWN2,
	R_OIS_CMD_GYRO_POLA_X,
	R_OIS_CMD_GYRO_POLA_Y,
	R_OIS_CMD_GYRO_ORIENT,
	R_OIS_CMD_RAW_DEBUG_X1,
	R_OIS_CMD_RAW_DEBUG_X2,
	R_OIS_CMD_RAW_DEBUG_Y1,
	R_OIS_CMD_RAW_DEBUG_Y2,
	R_OIS_CMD_READ_GYRO_NOISE_X1,
	R_OIS_CMD_READ_GYRO_NOISE_X2,
	R_OIS_CMD_READ_GYRO_NOISE_Y1,
	R_OIS_CMD_READ_GYRO_NOISE_Y2,
	R_OIS_CMD_REAR_XGG1,
	R_OIS_CMD_REAR_XGG2,
	R_OIS_CMD_REAR_XGG3,
	R_OIS_CMD_REAR_XGG4,
	R_OIS_CMD_REAR_YGG1,
	R_OIS_CMD_REAR_YGG2,
	R_OIS_CMD_REAR_YGG3,
	R_OIS_CMD_REAR_YGG4,
	R_OIS_CMD_ANGLE_COMP1,
	R_OIS_CMD_ANGLE_COMP2,
	R_OIS_CMD_ANGLE_COMP3,
	R_OIS_CMD_ANGLE_COMP4,
	R_OIS_CMD_ANGLE_COMP5,
	R_OIS_CMD_ANGLE_COMP6,
	R_OIS_CMD_ANGLE_COMP7,
	R_OIS_CMD_ANGLE_COMP8,
	R_OIS_CMD_ENABLE_DUALCAL,
	R_OIS_CMD_XCOEF_M1_1,
	R_OIS_CMD_XCOEF_M1_2,
	R_OIS_CMD_YCOEF_M1_1,
	R_OIS_CMD_YCOEF_M1_2,
	R_OIS_CMD_XCOEF_M2_1,
	R_OIS_CMD_XCOEF_M2_2,
	R_OIS_CMD_YCOEF_M2_1,
	R_OIS_CMD_YCOEF_M2_2,
	R_OIS_CMD_XCOEF_M3_1,
	R_OIS_CMD_XCOEF_M3_2,
	R_OIS_CMD_YCOEF_M3_1,
	R_OIS_CMD_YCOEF_M3_2,
	R_OIS_CMD_REAR3_XGG1,
	R_OIS_CMD_REAR3_XGG2,
	R_OIS_CMD_REAR3_XGG3,
	R_OIS_CMD_REAR3_XGG4,
	R_OIS_CMD_REAR3_YGG1,
	R_OIS_CMD_REAR3_YGG2,
	R_OIS_CMD_REAR3_YGG3,
	R_OIS_CMD_REAR3_YGG4,
	R_OIS_CMD_GYRO_POLA_X_M3,
	R_OIS_CMD_GYRO_POLA_Y_M3,
	R_OIS_CMD_GYRO_POLA_X_M2,
	R_OIS_CMD_GYRO_POLA_Y_M2,
	R_OIS_CMD_REAR2_XGG1,
	R_OIS_CMD_REAR2_XGG2,
	R_OIS_CMD_REAR2_XGG3,
	R_OIS_CMD_REAR2_XGG4,
	R_OIS_CMD_REAR2_YGG1,
	R_OIS_CMD_REAR2_YGG2,
	R_OIS_CMD_REAR2_YGG3,
	R_OIS_CMD_REAR2_YGG4,
	R_OIS_CMD_VDIS_TIME_STAMP_1,
	R_OIS_CMD_VDIS_TIME_STAMP_2,
	R_OIS_CMD_VDIS_TIME_STAMP_3,
	R_OIS_CMD_VDIS_TIME_STAMP_4,
	R_OIS_CMD_VDIS_X1_ANGVEL_1,
	R_OIS_CMD_VDIS_X1_ANGVEL_2,
	R_OIS_CMD_VDIS_Y1_ANGVEL_1,
	R_OIS_CMD_VDIS_Y1_ANGVEL_2,
	R_OIS_CMD_VDIS_Z1_ANGVEL_1,
	R_OIS_CMD_VDIS_Z1_ANGVEL_2,
	R_OIS_CMD_VDIS_X2_ANGVEL_1,
	R_OIS_CMD_VDIS_X2_ANGVEL_2,
	R_OIS_CMD_VDIS_Y2_ANGVEL_1,
	R_OIS_CMD_VDIS_Y2_ANGVEL_2,
	R_OIS_CMD_VDIS_Z2_ANGVEL_1,
	R_OIS_CMD_VDIS_Z2_ANGVEL_2,
	R_OIS_CMD_VDIS_X3_ANGVEL_1,
	R_OIS_CMD_VDIS_X3_ANGVEL_2,
	R_OIS_CMD_VDIS_Y3_ANGVEL_1,
	R_OIS_CMD_VDIS_Y3_ANGVEL_2,
	R_OIS_CMD_VDIS_Z3_ANGVEL_1,
	R_OIS_CMD_VDIS_Z3_ANGVEL_2,
	R_OIS_CMD_VDIS_X4_ANGVEL_1,
	R_OIS_CMD_VDIS_X4_ANGVEL_2,
	R_OIS_CMD_VDIS_Y4_ANGVEL_1,
	R_OIS_CMD_VDIS_Y4_ANGVEL_2,
	R_OIS_CMD_VDIS_Z4_ANGVEL_1,
	R_OIS_CMD_VDIS_Z4_ANGVEL_2
};

static const struct is_reg ois_mcu_cmd_regs[] = {
	{OIS_CMD_BASE, "OIS_CMD_START"},
	{OIS_CMD_BASE + 0x1, "OIS_CMD_STATUS"},
	{OIS_CMD_BASE + 0x2, "OIS_CMD_MODE"},
	{OIS_CMD_BASE + 0x3, "OIS_CMD_WRITE_DATA"},
	{OIS_CMD_BASE + 0x4, "OIS_CMD_GYRO_RESULT"},
	{OIS_CMD_BASE + 0x5, "OIS_CMD_CHECKSUM"},
	{OIS_CMD_BASE + 0x6, "OIS_CMD_READ_STATUS"},
	{OIS_CMD_BASE + 0x14, "OIS_CMD_GYRO_CAL"},
	{OIS_CMD_BASE + 0x18, "OIS_CMD_SINE_1"},
	{OIS_CMD_BASE + 0x19, "OIS_CMD_SINE_2"},
	{OIS_CMD_BASE + 0x1A, "OIS_CMD_SINE_3"},
	{OIS_CMD_BASE + 0x22, "OIS_CMD_CENTER_X1"},
	{OIS_CMD_BASE + 0x23, "OIS_CMD_CENTER_X2"},
	{OIS_CMD_BASE + 0x24, "OIS_CMD_CENTER_Y1"},
	{OIS_CMD_BASE + 0x25, "OIS_CMD_CENTER_Y2"},
	{OIS_CMD_BASE + 0x27, "OIS_CMD_READ_WRITE_RESULT"},
	{OIS_CMD_BASE + 0x28, "OIS_CMD_BYPASS_CTRL"},
	{OIS_CMD_BASE + 0x29, "OIS_CMD_SET_GYRO_NOISE"},
	{OIS_CMD_BASE + 0x2E, "OIS_CMD_DEVCTRL"},
	{OIS_CMD_BASE + 0x30, "OIS_CMD_GYRO_SLEEP"},
	{OIS_CMD_BASE + 0x35, "OIS_CMD_TAMODE"},
	{OIS_CMD_BASE + 0x39, "OIS_CMD_CACTRL_WRITE"},
	{OIS_CMD_BASE + 0x3A, "OIS_CMD_REAR_AF"},
	{OIS_CMD_BASE + 0x3B, "OIS_CMD_REAR2_AF"},
	{OIS_CMD_BASE + 0x3E, "OIS_CMD_POS1_REAR2_AF"},
	{OIS_CMD_BASE + 0x3F, "OIS_CMD_POS2_REAR2_AF"},
	{OIS_CMD_BASE + 0x44, "OIS_CMD_POS1_REAR3_AF"},
	{OIS_CMD_BASE + 0x45, "OIS_CMD_POS2_REAR3_AF"},
	{OIS_CMD_BASE + 0x48, "OIS_CMD_REAR3_AF"},
	{OIS_CMD_BASE + 0x4C, "OIS_CMD_MCERR_W"},
	{OIS_CMD_BASE + 0x4D, "OIS_CMD_MCERR_W2"},
	{OIS_CMD_BASE + 0x4E, "OIS_CMD_THRESH_ERR_LEV_M3"},
	{OIS_CMD_BASE + 0x50, "OIS_CMD_START_WAVE_CHECK"},
	{OIS_CMD_BASE + 0x51, "OIS_CMD_AUTO_TEST_RESULT"},
	{OIS_CMD_BASE + 0x52, "OIS_CMD_THRESH_ERR_LEV"},
	{OIS_CMD_BASE + 0x53, "OIS_CMD_ERR_VAL_CNT"},
	{OIS_CMD_BASE + 0x54, "OIS_CMD_FREQ_LEV"},
	{OIS_CMD_BASE + 0x55, "OIS_CMD_AMPLI_LEV"},
	{OIS_CMD_BASE + 0x56, "OIS_CMD_DUM_PULSE"},
	{OIS_CMD_BASE + 0x57, "OIS_CMD_VYVLE_LEV"},
	{OIS_CMD_BASE + 0x5B, "OIS_CMD_THRESH_ERR_LEV_M2"},
	{OIS_CMD_BASE + 0x5E, "OIS_CMD_SET_COEF"},
	{OIS_CMD_BASE + 0x60, "OIS_CMD_CTRL_AF"},
	{OIS_CMD_BASE + 0x80, "OIS_CMD_FWINFO_CTRL"},
	{OIS_CMD_BASE + 0x86, "OIS_CMD_TARGET_POS_REAR_X"},
	{OIS_CMD_BASE + 0x87, "OIS_CMD_TARGET_POS_REAR_X2"},
	{OIS_CMD_BASE + 0x88, "OIS_CMD_TARGET_POS_REAR_Y"},
	{OIS_CMD_BASE + 0x89, "OIS_CMD_TARGET_POS_REAR_Y2"},
	{OIS_CMD_BASE + 0x8E, "OIS_CMD_HALL_POS_REAR_X"},
	{OIS_CMD_BASE + 0x8F, "OIS_CMD_HALL_POS_REAR_X2"},
	{OIS_CMD_BASE + 0x90, "OIS_CMD_HALL_POS_REAR_Y"},
	{OIS_CMD_BASE + 0x91, "OIS_CMD_HALL_POS_REAR_Y2"},
	{OIS_CMD_BASE + 0x9E, "OIS_CMD_TARGET_POS_REAR3_X"},
	{OIS_CMD_BASE + 0x9F, "OIS_CMD_TARGET_POS_REAR3_X2"},
	{OIS_CMD_BASE + 0xA0, "OIS_CMD_TARGET_POS_REAR3_Y"},
	{OIS_CMD_BASE + 0xA1, "OIS_CMD_TARGET_POS_REAR3_Y2"},
	{OIS_CMD_BASE + 0xA6, "OIS_CMD_HALL_POS_REAR3_X"},
	{OIS_CMD_BASE + 0xA7, "OIS_CMD_HALL_POS_REAR3_X2"},
	{OIS_CMD_BASE + 0xA8, "OIS_CMD_HALL_POS_REAR3_Y"},
	{OIS_CMD_BASE + 0xA9, "OIS_CMD_HALL_POS_REAR3_Y2"},
	{OIS_CMD_BASE + 0xAC, "OIS_CMD_TARGET_POS_REAR2_X"},
	{OIS_CMD_BASE + 0xAD, "OIS_CMD_TARGET_POS_REAR2_X2"},
	{OIS_CMD_BASE + 0xAE, "OIS_CMD_TARGET_POS_REAR2_Y"},
	{OIS_CMD_BASE + 0xAF, "OIS_CMD_TARGET_POS_REAR2_Y2"},
	{OIS_CMD_BASE + 0xB4, "OIS_CMD_HALL_POS_REAR2_X"},
	{OIS_CMD_BASE + 0xB5, "OIS_CMD_HALL_POS_REAR2_X2"},
	{OIS_CMD_BASE + 0xB6, "OIS_CMD_HALL_POS_REAR2_Y"},
	{OIS_CMD_BASE + 0xB7, "OIS_CMD_HALL_POS_REAR2_Y2"},
	{OIS_CMD_BASE + 0xBE, "OIS_CMD_OIS_SEL"},
	{OIS_CMD_BASE + 0xC0, "OIS_CMD_REAR_SINX_COUNT1"},
	{OIS_CMD_BASE + 0xC1, "OIS_CMD_REAR_SINX_COUNT2"},
	{OIS_CMD_BASE + 0xC2, "OIS_CMD_REAR_SINY_COUNT1"},
	{OIS_CMD_BASE + 0xC3, "OIS_CMD_REAR_SINY_COUNT2"},
	{OIS_CMD_BASE + 0xC4, "OIS_CMD_REAR_SINX_DIFF1"},
	{OIS_CMD_BASE + 0xC5, "OIS_CMD_REAR_SINX_DIFF2"},
	{OIS_CMD_BASE + 0xC6, "OIS_CMD_REAR_SINY_DIFF1"},
	{OIS_CMD_BASE + 0xC7, "OIS_CMD_REAR_SINY_DIFF2"},
	{OIS_CMD_BASE + 0xD8, "OIS_CMD_REAR3_SINX_COUNT1"},
	{OIS_CMD_BASE + 0xD9, "OIS_CMD_REAR3_SINX_COUNT2"},
	{OIS_CMD_BASE + 0xDA, "OIS_CMD_REAR3_SINY_COUNT1"},
	{OIS_CMD_BASE + 0xDB, "OIS_CMD_REAR3_SINY_COUNT2"},
	{OIS_CMD_BASE + 0xDC, "OIS_CMD_REAR3_SINX_DIFF1"},
	{OIS_CMD_BASE + 0xDD, "OIS_CMD_REAR3_SINX_DIFF2"},
	{OIS_CMD_BASE + 0xDE, "OIS_CMD_REAR3_SINY_DIFF1"},
	{OIS_CMD_BASE + 0xDF, "OIS_CMD_REAR3_SINY_DIFF2"},
	{OIS_CMD_BASE + 0xE4, "OIS_CMD_REAR2_SINX_COUNT1"},
	{OIS_CMD_BASE + 0xE5, "OIS_CMD_REAR2_SINX_COUNT2"},
	{OIS_CMD_BASE + 0xE6, "OIS_CMD_REAR2_SINY_COUNT1"},
	{OIS_CMD_BASE + 0xE7, "OIS_CMD_REAR2_SINY_COUNT2"},
	{OIS_CMD_BASE + 0xE8, "OIS_CMD_REAR2_SINX_DIFF1"},
	{OIS_CMD_BASE + 0xE9, "OIS_CMD_REAR2_SINX_DIFF2"},
	{OIS_CMD_BASE + 0xEA, "OIS_CMD_REAR2_SINY_DIFF1"},
	{OIS_CMD_BASE + 0xEB, "OIS_CMD_REAR2_SINY_DIFF2"},
	{OIS_CMD_BASE + 0xEC, "OIS_CMD_GYRO_VAL_X"},
	{OIS_CMD_BASE + 0xED, "OIS_CMD_GYRO_LOG_X"},
	{OIS_CMD_BASE + 0xEE, "OIS_CMD_GYRO_VAL_Y"},
	{OIS_CMD_BASE + 0xEF, "OIS_CMD_GYRO_LOG_Y"},
	{OIS_CMD_BASE + 0x100, "OIS_CMD_BYPASS_DEVICE_ID1"},
	{OIS_CMD_BASE + 0x101, "OIS_CMD_BYPASS_DEVICE_ID2"},
	{OIS_CMD_BASE + 0x102, "OIS_CMD_BYPASS_REG_ADD1"},
	{OIS_CMD_BASE + 0x103, "OIS_CMD_BYPASS_REG_ADD2"},
	{OIS_CMD_BASE + 0x104, "OIS_CMD_BYPASS_REG_SIZE"},
	{OIS_CMD_BASE + 0x105, "OIS_CMD_BYPASS_DATA_SIZE"},
	{OIS_CMD_BASE + 0x106, "OIS_CMD_BYPASS_DATA_TRANSFER"},
	{OIS_CMD_BASE + 0x107, "OIS_CMD_BYPASS_DATA_TRANSFER2"},
	{OIS_CMD_BASE + 0x238, "OIS_CMD_FADE_UP1"},
	{OIS_CMD_BASE + 0x239, "OIS_CMD_FADE_UP2"},
	{OIS_CMD_BASE + 0x23A, "OIS_CMD_FADE_DOWN1"},
	{OIS_CMD_BASE + 0x23B, "OIS_CMD_FADE_DOWN2"},
	{OIS_CMD_BASE + 0x240, "OIS_CMD_GYRO_POLA_X"},
	{OIS_CMD_BASE + 0x241, "OIS_CMD_GYRO_POLA_Y"},
	{OIS_CMD_BASE + 0x242, "OIS_CMD_GYRO_ORIENT"},
	{OIS_CMD_BASE + 0x248, "OIS_CMD_RAW_DEBUG_X1"},
	{OIS_CMD_BASE + 0x249, "OIS_CMD_RAW_DEBUG_X2"},
	{OIS_CMD_BASE + 0x24A, "OIS_CMD_RAW_DEBUG_Y1"},
	{OIS_CMD_BASE + 0x24B, "OIS_CMD_RAW_DEBUG_Y2"},
	{OIS_CMD_BASE + 0x24E, "OIS_CMD_READ_GYRO_NOISE_X1"},
	{OIS_CMD_BASE + 0x24F, "OIS_CMD_READ_GYRO_NOISE_X2"},
	{OIS_CMD_BASE + 0x250, "OIS_CMD_READ_GYRO_NOISE_Y1"},
	{OIS_CMD_BASE + 0x251, "OIS_CMD_READ_GYRO_NOISE_Y2"},
	{OIS_CMD_BASE + 0x254, "OIS_CMD_REAR_XGG1"},
	{OIS_CMD_BASE + 0x255, "OIS_CMD_REAR_XGG2"},
	{OIS_CMD_BASE + 0x256, "OIS_CMD_REAR_XGG3"},
	{OIS_CMD_BASE + 0x257, "OIS_CMD_REAR_XGG4"},
	{OIS_CMD_BASE + 0x258, "OIS_CMD_REAR_YGG1"},
	{OIS_CMD_BASE + 0x259, "OIS_CMD_REAR_YGG2"},
	{OIS_CMD_BASE + 0x25A, "OIS_CMD_REAR_YGG3"},
	{OIS_CMD_BASE + 0x25B, "OIS_CMD_REAR_YGG4"},
	{OIS_CMD_BASE + 0x348, "OIS_CMD_ANGLE_COMP1"},
	{OIS_CMD_BASE + 0x349, "OIS_CMD_ANGLE_COMP2"},
	{OIS_CMD_BASE + 0x34A, "OIS_CMD_ANGLE_COMP3"},
	{OIS_CMD_BASE + 0x34B, "OIS_CMD_ANGLE_COMP4"},
	{OIS_CMD_BASE + 0x3D8, "OIS_CMD_ANGLE_COMP5"},
	{OIS_CMD_BASE + 0x3D9, "OIS_CMD_ANGLE_COMP6"},
	{OIS_CMD_BASE + 0x3DA, "OIS_CMD_ANGLE_COMP7"},
	{OIS_CMD_BASE + 0x3DB, "OIS_CMD_ANGLE_COMP8"},
	{OIS_CMD_BASE + 0x440, "OIS_CMD_ENABLE_DUALCAL"},
	{OIS_CMD_BASE + 0x442, "OIS_CMD_XCOEF_M1_1"},
	{OIS_CMD_BASE + 0x443, "OIS_CMD_XCOEF_M1_2"},
	{OIS_CMD_BASE + 0x444, "OIS_CMD_YCOEF_M1_1"},
	{OIS_CMD_BASE + 0x445, "OIS_CMD_YCOEF_M1_2"},
	{OIS_CMD_BASE + 0x446, "OIS_CMD_XCOEF_M2_1"},
	{OIS_CMD_BASE + 0x447, "OIS_CMD_XCOEF_M2_2"},
	{OIS_CMD_BASE + 0x448, "OIS_CMD_YCOEF_M2_1"},
	{OIS_CMD_BASE + 0x449, "OIS_CMD_YCOEF_M2_2"},
	{OIS_CMD_BASE + 0x44A, "OIS_CMD_XCOEF_M3_1"},
	{OIS_CMD_BASE + 0x44B, "OIS_CMD_XCOEF_M3_2"},
	{OIS_CMD_BASE + 0x44C, "OIS_CMD_YCOEF_M3_1"},
	{OIS_CMD_BASE + 0x44D, "OIS_CMD_YCOEF_M3_2"},
	{OIS_CMD_BASE + 0x514, "OIS_CMD_REAR3_XGG1"},
	{OIS_CMD_BASE + 0x515, "OIS_CMD_REAR3_XGG2"},
	{OIS_CMD_BASE + 0x516, "OIS_CMD_REAR3_XGG3"},
	{OIS_CMD_BASE + 0x517, "OIS_CMD_REAR3_XGG4"},
	{OIS_CMD_BASE + 0x518, "OIS_CMD_REAR3_YGG1"},
	{OIS_CMD_BASE + 0x519, "OIS_CMD_REAR3_YGG2"},
	{OIS_CMD_BASE + 0x51A, "OIS_CMD_REAR3_YGG3"},
	{OIS_CMD_BASE + 0x51B, "OIS_CMD_REAR3_YGG4"},
	{OIS_CMD_BASE + 0x54E, "OIS_CMD_GYRO_POLA_X_M3"},
	{OIS_CMD_BASE + 0x54F, "OIS_CMD_GYRO_POLA_Y_M3"},
	{OIS_CMD_BASE + 0x552, "OIS_CMD_GYRO_POLA_X_M2"},
	{OIS_CMD_BASE + 0x553, "OIS_CMD_GYRO_POLA_Y_M2"},
	{OIS_CMD_BASE + 0x554, "OIS_CMD_REAR2_XGG1"},
	{OIS_CMD_BASE + 0x555, "OIS_CMD_REAR2_XGG2"},
	{OIS_CMD_BASE + 0x556, "OIS_CMD_REAR2_XGG3"},
	{OIS_CMD_BASE + 0x557, "OIS_CMD_REAR2_XGG4"},
	{OIS_CMD_BASE + 0x558, "OIS_CMD_REAR2_YGG1"},
	{OIS_CMD_BASE + 0x559, "OIS_CMD_REAR2_YGG2"},
	{OIS_CMD_BASE + 0x55A, "OIS_CMD_REAR2_YGG3"},
	{OIS_CMD_BASE + 0x55B, "OIS_CMD_REAR2_YGG4"},
	{OIS_CMD_BASE + 0x560, "OIS_CMD_VDIS_TIME_STAMP_1"},
	{OIS_CMD_BASE + 0x561, "OIS_CMD_VDIS_TIME_STAMP_2"},
	{OIS_CMD_BASE + 0x562, "OIS_CMD_VDIS_TIME_STAMP_3"},
	{OIS_CMD_BASE + 0x563, "OIS_CMD_VDIS_TIME_STAMP_4"},
	{OIS_CMD_BASE + 0x564, "OIS_CMD_VDIS_X1_ANGVEL_1"},
	{OIS_CMD_BASE + 0x565, "OIS_CMD_VDIS_X1_ANGVEL_2"},
	{OIS_CMD_BASE + 0x566, "OIS_CMD_VDIS_Y1_ANGVEL_1"},
	{OIS_CMD_BASE + 0x567, "OIS_CMD_VDIS_Y1_ANGVEL_2"},
	{OIS_CMD_BASE + 0x568, "OIS_CMD_VDIS_Z1_ANGVEL_1"},
	{OIS_CMD_BASE + 0x569, "OIS_CMD_VDIS_Z1_ANGVEL_2"},
	{OIS_CMD_BASE + 0x56A, "OIS_CMD_VDIS_X2_ANGVEL_1"},
	{OIS_CMD_BASE + 0x56B, "OIS_CMD_VDIS_X2_ANGVEL_2"},
	{OIS_CMD_BASE + 0x56C, "OIS_CMD_VDIS_Y2_ANGVEL_1"},
	{OIS_CMD_BASE + 0x56D, "OIS_CMD_VDIS_Y2_ANGVEL_2"},
	{OIS_CMD_BASE + 0x56E, "OIS_CMD_VDIS_Z2_ANGVEL_1"},
	{OIS_CMD_BASE + 0x56F, "OIS_CMD_VDIS_Z2_ANGVEL_2"},
	{OIS_CMD_BASE + 0x570, "OIS_CMD_VDIS_X3_ANGVEL_1"},
	{OIS_CMD_BASE + 0x571, "OIS_CMD_VDIS_X3_ANGVEL_2"},
	{OIS_CMD_BASE + 0x572, "OIS_CMD_VDIS_Y3_ANGVEL_1"},
	{OIS_CMD_BASE + 0x573, "OIS_CMD_VDIS_Y3_ANGVEL_2"},
	{OIS_CMD_BASE + 0x574, "OIS_CMD_VDIS_Z3_ANGVEL_1"},
	{OIS_CMD_BASE + 0x575, "OIS_CMD_VDIS_Z3_ANGVEL_2"},
	{OIS_CMD_BASE + 0x576, "OIS_CMD_VDIS_X4_ANGVEL_1"},
	{OIS_CMD_BASE + 0x577, "OIS_CMD_VDIS_X4_ANGVEL_2"},
	{OIS_CMD_BASE + 0x578, "OIS_CMD_VDIS_Y4_ANGVEL_1"},
	{OIS_CMD_BASE + 0x579, "OIS_CMD_VDIS_Y4_ANGVEL_2"},
	{OIS_CMD_BASE + 0x57A, "OIS_CMD_VDIS_Z4_ANGVEL_1"},
	{OIS_CMD_BASE + 0x57B, "OIS_CMD_VDIS_Z4_ANGVEL_2"}
};

enum is_hw_ois_mcu_cmd_field {
	OIS_F_CMD_START,		
	OIS_F_CMD_STATUS,		
	OIS_F_CMD_MODE,
	OIS_REG_CMD_FIELD_CNT
};

static const struct is_field ois_mcu_cmd_fields[OIS_REG_CMD_FIELD_CNT] = {
	/* field_name, start_bit, bit_width, type, reset */
	{"OIS_CMD_START", 0, 1, RW, 0x00000000},
	{"OIS_CMD_STATUS", 0, 1, RO, 0x00000000},
	{"OIS_CMD_MODE", 0, 1, RW, 0x00000000}
};

enum is_hw_ois_mcu_reg_field {
	OIS_F_CM0P_BOOT_REQ,		/* OIS_CM0P_BOOT */
	OIS_F_CM0P_IRQ_REQ,		/* OIS_CM0P_IRQ */
	OIS_F_CM0P_SYSTICK_NOREF,	/* OIS_CM0P_SYSTICK */
	OIS_F_CM0P_SYSTICK_SKEW,
	OIS_F_CM0P_SYSTICK_TENMS,
	OIS_F_CM0P_IPCLKREQ_ON,		/* OIS_CM0P_CTRL0 */
	OIS_F_CM0P_IPCLKREQ_ENABLE,
	OIS_F_CM0P_SLEEP_CTRL,
	OIS_F_CM0P_QACTIVE_DIRECT_CTRL,
	OIS_F_CM0P_FORCE_DBG_PWRUP,
	OIS_F_CM0P_DISABLE_IRQ,
	OIS_F_CM0P_WDTIRQ_TO_HOST,
	OIS_F_CM0P_CONNECT_WDT_TO_NMI,
	OIS_F_CM0P_SYS_RST_ASSERTED,	/* OIS_CM0P_IRQ_STATUS */
	OIS_F_CM0P_LOCKUP_RST_ASSERTED,
	OIS_F_CM0P_WDT_RST_ASSERTED,
	OIS_F_CM0P_WDT_IRQ,
	OIS_F_CM0P_SYS_RST_ENABLE,	/* OIS_CM0P_IRQ_ENABLE */
	OIS_F_CM0P_LOCKUP_RST_ENABLE,
	OIS_F_CM0P_WDT_RST_ENABLE,
	OIS_F_CM0P_WDT_IRQ_ENABLE,
	OIS_F_CM0P_SYS_RST__CLEAR,	/* OIS_CM0P_IRQ_CLEAR */
	OIS_F_CM0P_LOCKUP_RST_CLEAR,
	OIS_F_CM0P_WDT_RST_CLEAR,
	OIS_F_CM0P_WDT_IRQ_CLEAR,
	OIS_F_CM0P_I2C_ADDR,
	OIS_F_CM0P_SPI_ADDR,
	OIS_F_CM0P_SPDMA_ADDR,
	OIS_F_CM0P_MISC0,
	OIS_F_CM0P_MISC1,
	OIS_REG_FIELD_CNT
};

static const struct is_field ois_mcu_fields[OIS_REG_FIELD_CNT] = {
	/* field_name, start_bit, bit_width, type, reset */
	{"OIS_CM0P_BOOT_REQ", 0, 1, RW, 0x00000000},
	{"OIS_CM0P_IRQ_REQ", 0, 1, RW, 0x00000000},
	{"OIS_CM0P_SYSTICK_NOREF", 25, 1, RW, 0x00000000},
	{"OIS_CM0P_SYSTICK_SKEW", 24, 1, RW, 0x00000000},
	{"OIS_CM0P_SYSTICK_TENMS", 0, 24, RW, 0x0000F42F}, /* default: 100MHz */
	{"OIS_CM0P_IPCLKREQ_ON", 28, 1, RW, 0x00000000},
	{"OIS_CM0P_IPCLKREQ_ENABLE", 27, 1, RW, 0x00000000},
	{"OIS_CM0P_SLEEP_CTRL", 26, 1, RW, 0x00000000},
	{"OIS_CM0P_QACTIVE_DIRECT_CTRL", 25, 1, RW, 0x00000001},
	{"OIS_CM0P_FORCE_DBG_PWRUP", 24, 1, RW, 0x00000001},
	{"OIS_CM0P_DISABLE_IRQ", 16, 1, RW, 0x00000000},
	{"OIS_CM0P_WDTIRQ_TO_HOST", 1, 1, RW, 0x00000000},
	{"OIS_CM0P_CONNECT_WDT_TO_NMI", 0, 1, RW, 0x00000000},
	{"OIS_CM0P_SYS_RST_ASSERTED", 3, 1, RO, 0x00000000},
	{"OIS_CM0P_LOCKUP_RST_ASSERTED", 2, 1, RO, 0x00000000},
	{"OIS_CM0P_WDT_RST_ASSERTED", 1, 1, RO, 0x00000000},
	{"OIS_CM0P_WDT_IRQ", 0, 1, RO, 0x00000000},
	{"OIS_CM0P_SYS_RST_ENABLE", 3, 1, RW, 0x00000000},
	{"OIS_CM0P_LOCKUP_RST_ENABLE", 2, 1, RW, 0x00000000},
	{"OIS_CM0P_WDT_RST_ENABLE", 1, 1, RW, 0x00000000},
	{"OIS_CM0P_WDT_IRQ_ENABLE", 0, 1, RW, 0x00000000},
	{"OIS_CM0P_SYS_RST_CLEAR", 3, 1, RW, 0x00000000},
	{"OIS_CM0P_LOCKUP_RST_CLEAR", 2, 1, RW, 0x00000000},
	{"OIS_CM0P_WDT_RST_CLEAR", 1, 1, RW, 0x00000000},
	{"OIS_CM0P_WDT_IRQ_CLEAR", 0, 1, RW, 0x00000000},
	{"OIS_CM0P_I2C_ADDR", 0, 32, RW, 0x00000000},
	{"OIS_CM0P_SPI_ADDR", 0, 32, RW, 0x00000000},
	{"OIS_CM0P_REMAP_SPDMA_ADDR", 0, 32, RW, 0x00000000},
	{"OIS_CM0P_MISC0", 0, 32, RW, 0x00000000},
	{"OIS_CM0P_MISC1", 0, 32, RW, 0x00000000}
};

#endif
