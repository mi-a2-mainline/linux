// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2022 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_NT36672_TIANMA_FHD_VIDEO_H_
#define _PANEL_NT36672_TIANMA_FHD_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config nt36672_tianma_fhd_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_nt36672_tianma_fhd_video",
	.panel_controller = "dsi:0",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution nt36672_tianma_fhd_video_panel_res = {
	.panel_width = 1080,
	.panel_height = 2160,
	.hfront_porch = 96,
	.hback_porch = 56,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 4,
	.vback_porch = 33,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info nt36672_tianma_fhd_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char nt36672_tianma_fhd_video_on_cmd_0[] = {
	0xff, 0x20, 0x15, 0x80
};
static char nt36672_tianma_fhd_video_on_cmd_1[] = {
	0xfb, 0x01, 0x15, 0x80
};
static char nt36672_tianma_fhd_video_on_cmd_2[] = {
	0x30, 0x10, 0x15, 0x80
};
static char nt36672_tianma_fhd_video_on_cmd_3[] = {
	0x31, 0x50, 0x15, 0x80
};
static char nt36672_tianma_fhd_video_on_cmd_4[] = {
	0x32, 0x2f, 0x15, 0x80
};
static char nt36672_tianma_fhd_video_on_cmd_5[] = {
	0xff, 0x10, 0x15, 0x80
};
static char nt36672_tianma_fhd_video_on_cmd_6[] = {
	0x11, 0x00, 0x05, 0x80
};
static char nt36672_tianma_fhd_video_on_cmd_7[] = {
	0x51, 0xff, 0x15, 0x80
};
static char nt36672_tianma_fhd_video_on_cmd_8[] = {
	0x03, 0x00, 0x39, 0xc0, 0x68, 0x03, 0x04, 0xff
};
static char nt36672_tianma_fhd_video_on_cmd_9[] = {
	0x53, 0x2c, 0x15, 0x80
};
static char nt36672_tianma_fhd_video_on_cmd_10[] = {
	0x55, 0x00, 0x15, 0x80
};
static char nt36672_tianma_fhd_video_on_cmd_11[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd nt36672_tianma_fhd_video_on_command[] = {
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_0), nt36672_tianma_fhd_video_on_cmd_0, 0 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_1), nt36672_tianma_fhd_video_on_cmd_1, 0 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_2), nt36672_tianma_fhd_video_on_cmd_2, 0 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_3), nt36672_tianma_fhd_video_on_cmd_3, 0 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_4), nt36672_tianma_fhd_video_on_cmd_4, 0 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_5), nt36672_tianma_fhd_video_on_cmd_5, 0 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_6), nt36672_tianma_fhd_video_on_cmd_6, 70 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_7), nt36672_tianma_fhd_video_on_cmd_7, 0 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_8), nt36672_tianma_fhd_video_on_cmd_8, 0 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_9), nt36672_tianma_fhd_video_on_cmd_9, 0 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_10), nt36672_tianma_fhd_video_on_cmd_10, 0 },
	{ sizeof(nt36672_tianma_fhd_video_on_cmd_11), nt36672_tianma_fhd_video_on_cmd_11, 5 },
};

static char nt36672_tianma_fhd_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char nt36672_tianma_fhd_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd nt36672_tianma_fhd_video_off_command[] = {
	{ sizeof(nt36672_tianma_fhd_video_off_cmd_0), nt36672_tianma_fhd_video_off_cmd_0, 20 },
	{ sizeof(nt36672_tianma_fhd_video_off_cmd_1), nt36672_tianma_fhd_video_off_cmd_1, 120 },
};

static struct command_state nt36672_tianma_fhd_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info nt36672_tianma_fhd_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info nt36672_tianma_fhd_video_video_panel = {
	.hsync_pulse = 0,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration nt36672_tianma_fhd_video_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t nt36672_tianma_fhd_video_timings[] = {
	0xe6, 0x38, 0x26, 0x00, 0x68, 0x6e, 0x2a, 0x3c, 0x44, 0x03, 0x04, 0x00
};

static struct panel_timing nt36672_tianma_fhd_video_timing_info = {
	.tclk_post = 0x0d,
	.tclk_pre = 0x32,
};

static struct panel_reset_sequence nt36672_tianma_fhd_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 1, 5, 15 },
	.pin_direction = 2,
};

static struct backlight nt36672_tianma_fhd_video_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_nt36672_tianma_fhd_video_select(struct panel_struct *panel,
							 struct msm_panel_info *pinfo,
							 struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &nt36672_tianma_fhd_video_panel_data;
	panel->panelres = &nt36672_tianma_fhd_video_panel_res;
	panel->color = &nt36672_tianma_fhd_video_color;
	panel->videopanel = &nt36672_tianma_fhd_video_video_panel;
	panel->commandpanel = &nt36672_tianma_fhd_video_command_panel;
	panel->state = &nt36672_tianma_fhd_video_state;
	panel->laneconfig = &nt36672_tianma_fhd_video_lane_config;
	panel->paneltiminginfo = &nt36672_tianma_fhd_video_timing_info;
	panel->panelresetseq = &nt36672_tianma_fhd_video_reset_seq;
	panel->backlightinfo = &nt36672_tianma_fhd_video_backlight;
	pinfo->mipi.panel_cmds = nt36672_tianma_fhd_video_on_command;
	pinfo->mipi.num_of_panel_cmds = ARRAY_SIZE(nt36672_tianma_fhd_video_on_command);
	memcpy(phy_db->timing, nt36672_tianma_fhd_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_NT36672_TIANMA_FHD_VIDEO_H_ */
