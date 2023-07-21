<<<<<<<< HEAD:include/media/pwm-ir.h
/* Copyright (C) 2013 by Xiang Xiao <xiaoxiang@xiaomi.com>
========
/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 * Copyright (C) 2017 XiaoMi, Inc.
>>>>>>>> sonic/Darkmoon:include/linux/input/gen_vkeys_atmel.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

<<<<<<<< HEAD:include/media/pwm-ir.h
#ifndef __PWM_IR_H__
#define __PWM_IR_H__

#define PWM_IR_NAME	"pwm-ir"

struct pwm_ir_data {
	const char  *reg_id;
	int          pwm_id;
	bool         low_active;
	bool         use_timer;
};

#endif /* __PWM_IR_H__ */
========
#ifndef __GEN_VKEYS_
struct vkeys_platform_data {
	const char *name;
	int disp_maxx;
	int disp_maxy;
	int panel_maxx;
	int panel_maxy;
	int *keycodes;
	int num_keys;
	int y_offset;
};
#endif
>>>>>>>> sonic/Darkmoon:include/linux/input/gen_vkeys_atmel.h
