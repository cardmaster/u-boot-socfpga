/*
 *  Copyright (C) 2017 Intel Corporation <www.intel.com>
 *
 * SPDX-License-Identifier:	GPL-2.0
 */

#ifndef _HANDOFF_S10_H_
#define _HANDOFF_S10_H_

/*
 * Offset for HW handoff from Quartus tools
 */
#define CONFIG_HANDOFF_BASE		0xFFE3F000
#define CONFIG_HANDOFF_MUX		(CONFIG_HANDOFF_BASE + 0x10)
#define CONFIG_HANDOFF_IOCTL		(CONFIG_HANDOFF_BASE + 0x1A0)
#define CONFIG_HANDOFF_FPGA		(CONFIG_HANDOFF_BASE + 0x330)
#define CONFIG_HANODFF_DELAY		(CONFIG_HANDOFF_BASE + 0x3F0)
#define CONFIG_HANDOFF_CLOCK		(CONFIG_HANDOFF_BASE + 0x580)
#define CONFIG_HANDOFF_MISC		(CONFIG_HANDOFF_BASE + 0x610)
#define CONFIG_HANDOFF_MAGIC_MUX	0x504D5558
#define CONFIG_HANDOFF_MAGIC_IOCTL	0x494F4354
#define CONFIG_HANDOFF_MAGIC_FPGA	0x46504741
#define CONFIG_HANDOFF_MAGIC_DELAY	0x444C4159
#define CONFIG_HANDOFF_MAGIC_CLOCK	0x434C4B53
#define CONFIG_HANDOFF_MAGIC_MISC	0x4D495343
#define CONFIG_HANDOFF_OFFSET_LENGTH	0x4
#define CONFIG_HANDOFF_OFFSET_DATA	0x10

#define CONFIG_HANDOFF_CLOCK_OSC	(CONFIG_HANDOFF_BASE + 0x608)
#define CONFIG_HANDOFF_CLOCK_FPGA	(CONFIG_HANDOFF_BASE + 0x60C)

#endif /* _HANDOFF_S10_H_ */