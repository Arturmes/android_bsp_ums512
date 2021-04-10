/*
 * Copyright (C) 2017-2018 Spreadtrum Communications Inc.
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


#ifndef _ISP_FMCU_H_
#define _ISP_FMCU_H_

#include <linux/types.h>
#include <linux/spinlock.h>
#include <linux/platform_device.h>

#include "cam_buf.h"

#define ISP_FMCU_CMDQ_SIZE		0x1000

enum fcmu_id {
	ISP_FMCU_0,
	ISP_FMCU_1,
	ISP_FMCU_NUM
};

enum fmcu_buf_id {
	PING,
	PANG,
	MAX_BUF
};

enum {
	FMCU_IS_NEED = (1 << 0),
	FMCU_IS_MUST = (1 << 1),
};

enum isp_fmcu_cmd {
	PRE0_SHADOW_DONE = 0x10,
	PRE0_ALL_DONE,
	PRE0_LENS_LOAD_DONE,
	CAP0_SHADOW_DONE,
	CAP0_ALL_DONE,
	CAP0_LENS_LOAD_DONE,
	PRE1_SHADOW_DONE,
	PRE1_ALL_DONE,
	PRE1_LENS_LOAD_DONE,
	CAP1_SHADOW_DONE,
	CAP1_ALL_DONE,
	CAP1_LENS_LOAD_DONE,
	CFG_TRIGGER_PULSE,
	SW_TRIGGER,
};

struct isp_fmcu_ops;
struct isp_fmcu_ctx_desc {
	enum fcmu_id fid;
	enum fmcu_buf_id cur_buf_id;
	struct camera_buf ion_pool[MAX_BUF];
	uint32_t *cmd_buf[MAX_BUF];
	unsigned long hw_addr[MAX_BUF];
	size_t cmdq_size;
	size_t cmdq_pos[MAX_BUF];
	spinlock_t lock;
	atomic_t  user_cnt;
	struct list_head list;
	struct isp_fmcu_ops *ops;
};

struct isp_fmcu_ops {
	int (*ctx_init)(struct isp_fmcu_ctx_desc *fmcu_ctx);
	int (*ctx_deinit)(struct isp_fmcu_ctx_desc *fmcu_ctx);
	int (*ctx_reset)(struct isp_fmcu_ctx_desc *fmcu_ctx);
	int (*push_cmdq)(struct isp_fmcu_ctx_desc *fmcu_ctx,
					uint32_t addr, uint32_t cmd);
	int (*hw_start)(struct isp_fmcu_ctx_desc *fmcu_ctx);
	int (*cmd_ready)(struct isp_fmcu_ctx_desc *fmcu_ctx);
};


struct isp_fmcu_ctx_desc *get_isp_fmcu_ctx_desc(void *arg);
int put_isp_fmcu_ctx_desc(struct isp_fmcu_ctx_desc *fmcu);

#endif /* _ISP_FMCU_H_ */