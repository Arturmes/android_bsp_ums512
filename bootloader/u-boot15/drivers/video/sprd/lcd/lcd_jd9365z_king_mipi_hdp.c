/*
 * Copyright (C) 2019 Spreadtrum Communications Inc.
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

#include "sprd_panel.h"
#include "sprd_dsi.h"
#include "dsi/mipi_dsi_api.h"
#include "sprd_dphy.h"
#include <i2c.h>

static uint8_t init_data[] = {
	0x39, 0x00, 0x00, 0x04, 0xDF, 0x93, 0x65, 0xF8,
	0x39, 0x00, 0x00, 0x04, 0xCC, 0x33, 0x08, 0x24,
	0x39, 0x00, 0x00, 0x08, 0xB0, 0x10, 0x13, 0x06, 0x00, 0x64, 0x06, 0x01,
	0x39, 0x00, 0x00, 0x03, 0xB2, 0x00, 0x3D,
	0x39, 0x00, 0x00, 0x03, 0xB3, 0x00, 0x3D,
	0x39, 0x00, 0x00, 0x03, 0xB5, 0x64, 0x84,
	0x39, 0x00, 0x00, 0x07, 0xB7, 0x00, 0xBF, 0x01, 0x00, 0xBF, 0x01,
	0x39, 0x00, 0x00, 0x05, 0xB9, 0x00, 0x04, 0x13, 0x07,
	0x39, 0x00, 0x00, 0x0C, 0xBB, 0x0F, 0x01, 0x24, 0x00, 0x2F, 0x13, 0x28, 0x04, 0xDD, 0xDD, 0xDD,
	0x39, 0x00, 0x00, 0x03, 0xBC, 0x0F, 0x04,
	0x39, 0x00, 0x00, 0x03, 0xBE, 0x1E, 0xF2,
	0x39, 0x00, 0x00, 0x03, 0xC0, 0x26, 0x03,
	0x39, 0x00, 0x00, 0x03, 0xC1, 0x00, 0x12,
	0x39, 0x00, 0x00, 0x08, 0xC3, 0x04, 0x02, 0x02, 0x66, 0x01, 0x80, 0x80,
	0x39, 0x00, 0x00, 0x0A, 0xC4, 0x24, 0xF8, 0xB4, 0x81, 0x12, 0x0F, 0x16, 0x00, 0x00,
	0x39, 0x00, 0x00, 0x27, 0xC8, 0x5F, 0x44, 0x36, 0x2A, 0x28, 0x1A, 0x20, 0x0B, 0x25, 0x24, 0x25, 0x44, 0x33, 0x3E, 0x30, 0x2C, 0x20, 0x12, 0x08, 0x5F, 0x44, 0x36, 0x2A, 0x28, 0x1A, 0x20, 0x0B, 0x25, 0x24, 0x25, 0x44, 0x33, 0x3E, 0x30, 0x2C, 0x20, 0x12, 0x08,
	0x39, 0x00, 0x00, 0x17, 0xD0, 0x1E, 0x1F, 0x57, 0x58, 0x44, 0x46, 0x48, 0x4A, 0x40, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x50, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
	0x39, 0x00, 0x00, 0x17, 0xD1, 0x1E, 0x1F, 0x57, 0x58, 0x45, 0x47, 0x49, 0x4B, 0x41, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x51, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
	0x39, 0x00, 0x00, 0x17, 0xD2, 0x1F, 0x1E, 0x17, 0x18, 0x0B, 0x09, 0x07, 0x05, 0x11, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x01, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
	0x39, 0x00, 0x00, 0x17, 0xD3, 0x1F, 0x1E, 0x17, 0x18, 0x0A, 0x08, 0x06, 0x04, 0x10, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
	0x39, 0x00, 0x00, 0x17, 0xD4, 0x00, 0x00, 0x00, 0x04, 0x0B, 0x30, 0x01, 0x02, 0x00, 0x58, 0x55, 0xFF, 0x30, 0x03, 0x04, 0x1C, 0x74, 0x73, 0x0D, 0x00, 0x58, 0x00,
	0x39, 0x00, 0x00, 0x12, 0xD5, 0x00, 0x08, 0x3F, 0x08, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBC, 0x50, 0x00, 0x06, 0x12, 0x18, 0x60,
	0x39, 0x00, 0x00, 0x04, 0xDD, 0x2C, 0xA3, 0x00,
	0x23, 0x00, 0x00, 0x02, 0xDE, 0x02,
	0x39, 0x01, 0x00, 0x08, 0xBB, 0x38, 0x05, 0x23, 0x24, 0x34, 0x35, 0x44,
	0x39, 0x00, 0x00, 0x03, 0xC5, 0x03, 0x19,
	0x23, 0x00, 0x00, 0x02, 0xC6, 0x02,
	0x23, 0x00, 0x00, 0x02, 0xD7, 0x12,
	0x23, 0x00, 0x00, 0x02, 0xE9, 0x06,
	0x39, 0x00, 0x00, 0x03, 0xB2, 0x32, 0x1C,
	0x39, 0x00, 0x00, 0x05, 0xB7, 0x1F, 0x00, 0x00, 0x04,
	0x23, 0x00, 0x00, 0x02, 0xC1, 0x11,
	0x23, 0x00, 0x00, 0x02, 0xDE, 0x00,
	0x39, 0x00, 0x00, 0x05, 0xC5, 0x09, 0x5D, 0xF0, 0x10,
	0x23, 0x00, 0x00, 0x02, 0x35, 0x00,
	0x23, 0x78, 0x00, 0x02, 0x11, 0x00,
	0x23, 0x00, 0x00, 0x02, 0xDE, 0x02,
	0x39, 0x00, 0x00, 0x03, 0xBC, 0x10, 0xFF,
	0x23, 0x00, 0x00, 0x02, 0xDE, 0x00,
	0x39, 0x00, 0x00, 0x05, 0xE8, 0x00, 0x00, 0x00, 0xAF,
	0x23, 0x32, 0x00, 0x02, 0x29, 0x00,
	0x23, 0x00, 0x00, 0x02, 0xDE, 0x00,
	0x39, 0x00, 0x00, 0x04, 0xDF, 0x09, 0xB1, 0x7F,
	CMD_END
};

static int mipi_dsi_send_cmds(struct sprd_dsi *dsi, void *data)
{
	uint16_t len;
	struct dsi_cmd_desc *cmds = data;

	if ((cmds == NULL) || (dsi == NULL))
		return -1;

	for (; cmds->data_type != CMD_END;) {
		len = (cmds->wc_h << 8) | cmds->wc_l;
		mipi_dsi_gen_write(dsi, cmds->payload, len);
		if (cmds->wait)
			msleep(cmds->wait);
		cmds = (struct dsi_cmd_desc *)(cmds->payload + len);
	}
	return 0;
}

static int jd9365z_init(void)
{
	struct sprd_dsi *dsi = &dsi_device;
	struct sprd_dphy *dphy = &dphy_device;

	mipi_dsi_lp_cmd_enable(dsi, true);
	mipi_dsi_send_cmds(dsi, init_data);
	mipi_dsi_set_work_mode(dsi, SPRD_MIPI_MODE_VIDEO);
	mipi_dsi_state_reset(dsi);
	mipi_dphy_hs_clk_en(dphy, true);

	return 0;
}

static int get_lcd_module_id(unsigned int gpio)
{
	int id;

	sprd_gpio_request(NULL, gpio);
	sprd_gpio_direction_input(NULL, gpio);
	id = sprd_gpio_get(NULL, gpio);

	return id ? 1 : 0;
}

static int jd9365z_readid(void)
{
	struct sprd_dsi *dsi = &dsi_device;
	uint8_t read_buf[4] = {0};
	int32_t lcd_module = 0;

	mipi_dsi_lp_cmd_enable(dsi, true);
	mipi_dsi_set_max_return_size(dsi, 2);
	mipi_dsi_dcs_read(dsi, 0x04, read_buf, 2);

	pr_info("jd9365z read id %02x%02x\n", read_buf[0], read_buf[1]);
	if ((read_buf[0] == 0x93) && (read_buf[1] == 0x65)) {
		pr_info("jd9365z read id success!\n");

		lcd_module = get_lcd_module_id(CONFIG_LCM_GPIO_MODULE_ID);
		pr_info("lcd module id is = %d\n", lcd_module);
		if (lcd_module == 0)
			return 0;
	}

	pr_err("jd9365z read id failed!\n");
	return -1;
}

#define SGM3804_SLAVE_ADDR		0x3E
#define SGM3804_I2C_SPEED		100000

static int sgm3804_i2c_init(void)
{
	int i;

	sprd_gpio_request(NULL, CONFIG_LCM_GPIO_AVEEEN);
	sprd_gpio_direction_output(NULL, CONFIG_LCM_GPIO_AVEEEN, 1);

	sprd_gpio_request(NULL, CONFIG_LCM_GPIO_AVDDEN);
	sprd_gpio_direction_output(NULL, CONFIG_LCM_GPIO_AVDDEN, 1);

	i2c_set_bus_num(CONFIG_LCM_SOURCE_I2C_NUM);
	i2c_init(SGM3804_I2C_SPEED, SGM3804_SLAVE_ADDR);
	for (i = 0; i < 3; i++) {
		i2c_reg_write(SGM3804_SLAVE_ADDR, 0x00, 0x0F);
		i2c_reg_write(SGM3804_SLAVE_ADDR, 0x01, 0x0F);
	}

	return 0;
}

static int jd9365z_power(int on)
{
	if (on) {
		sgm3804_i2c_init();

		sprd_gpio_request(NULL, CONFIG_LCM_GPIO_RSTN);
		sprd_gpio_direction_output(NULL, CONFIG_LCM_GPIO_RSTN, 1);
		mdelay(5);
		sprd_gpio_direction_output(NULL, CONFIG_LCM_GPIO_RSTN, 0);
		mdelay(10);
		sprd_gpio_direction_output(NULL, CONFIG_LCM_GPIO_RSTN, 1);
		mdelay(120);
	} else {
		sprd_gpio_direction_output(NULL, CONFIG_LCM_GPIO_RSTN, 0);
		mdelay(5);
	}

	return 0;
}

static struct panel_ops jd9365z_ops = {
	.init = jd9365z_init,
	.read_id = jd9365z_readid,
	.power = jd9365z_power,
};

static struct panel_info jd9365z_info = {
	/* common parameters */
	.lcd_name = "lcd_jd9365z_king_mipi_hdp",
	.type = SPRD_PANEL_TYPE_MIPI,
	.bpp = 24,
//	.fps = 60,
	.width = 720,
	.height = 1520,

	/* DPI specific parameters */
	.pixel_clk = 76800000, /*Hz*/
	.rgb_timing = {
		.hfp = 42,
		.hbp = 42,
		.hsync = 8,
		.vfp = 18,
		.vbp = 28,
		.vsync = 4,
	},

	/* MIPI DSI specific parameters */
	.phy_freq = 550000,
	.lane_num = 4,
	.work_mode = SPRD_MIPI_MODE_VIDEO,
	.burst_mode = PANEL_VIDEO_BURST_MODE,
	.nc_clk_en = false,
};

struct panel_driver jd9365z_king_driver = {
	.info = &jd9365z_info,
	.ops = &jd9365z_ops,
};