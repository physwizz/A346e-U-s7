/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2015 MediaTek Inc.
 */

#ifndef CMDQ_EVENT_COMMON
#define CMDQ_EVENT_COMMON

/* Define CMDQ events
 *
 * For hardware event must define in device tree.
 * For SW event assign event ID here directly.
 *
 * Note: event name must sync to cmdq_events table in cmdq_event_common.c
 */
enum cmdq_event {
	/* MDP start frame */
	CMDQ_EVENT_MDP_RDMA0_SOF,			/* 0 */
	CMDQ_EVENT_MDP_RDMA1_SOF,			/* 1 */
	CMDQ_EVENT_MDP_RSZ0_SOF,			/* 2 */
	CMDQ_EVENT_MDP_RSZ1_SOF,			/* 3 */
	CMDQ_EVENT_MDP_RSZ2_SOF,			/* 4 */
	CMDQ_EVENT_MDP_TDSHP_SOF,			/* 5 */
	CMDQ_EVENT_MDP_TDSHP0_SOF,			/* 6 */
	CMDQ_EVENT_MDP_TDSHP1_SOF,			/* 7 */
	CMDQ_EVENT_MDP_WDMA_SOF,			/* 8 */
	CMDQ_EVENT_MDP_WROT_SOF,			/* 9 */
	CMDQ_EVENT_MDP_WROT0_SOF,			/* 10 */
	CMDQ_EVENT_MDP_WROT1_SOF,			/* 11 */
	CMDQ_EVENT_MDP_COLOR_SOF,			/* 12 */
	CMDQ_EVENT_MDP_MVW_SOF,				/* 13 */
	CMDQ_EVENT_MDP_CROP_SOF,			/* 14 */
	CMDQ_EVENT_MDP_AAL_SOF,				/* 15 */

	/* Display start frame */
	CMDQ_EVENT_DISP_OVL0_SOF,			/* 16 */
	CMDQ_EVENT_DISP_OVL1_SOF,			/* 17 */
	CMDQ_EVENT_DISP_2L_OVL0_SOF,			/* 18 */
	CMDQ_EVENT_DISP_2L_OVL1_SOF,			/* 19 */
	CMDQ_EVENT_DISP_RDMA0_SOF,			/* 20 */
	CMDQ_EVENT_DISP_RDMA1_SOF,			/* 21 */
	CMDQ_EVENT_DISP_RDMA2_SOF,			/* 22 */
	CMDQ_EVENT_DISP_WDMA0_SOF,			/* 23 */
	CMDQ_EVENT_DISP_WDMA1_SOF,			/* 24 */
	CMDQ_EVENT_DISP_COLOR_SOF,			/* 25 */
	CMDQ_EVENT_DISP_COLOR0_SOF,			/* 26 */
	CMDQ_EVENT_DISP_COLOR1_SOF,			/* 27 */
	CMDQ_EVENT_DISP_CCORR_SOF,			/* 28 */
	CMDQ_EVENT_DISP_CCORR0_SOF,			/* 29 */
	CMDQ_EVENT_DISP_CCORR1_SOF,			/* 30 */
	CMDQ_EVENT_DISP_AAL_SOF,			/* 31 */
	CMDQ_EVENT_DISP_AAL0_SOF,			/* 32 */
	CMDQ_EVENT_DISP_AAL1_SOF,			/* 33 */
	CMDQ_EVENT_DISP_GAMMA_SOF,			/* 34 */
	CMDQ_EVENT_DISP_GAMMA0_SOF,			/* 35 */
	CMDQ_EVENT_DISP_GAMMA1_SOF,			/* 36 */
	CMDQ_EVENT_DISP_DITHER_SOF,			/* 37 */
	CMDQ_EVENT_DISP_DITHER0_SOF,			/* 38 */
	CMDQ_EVENT_DISP_DITHER1_SOF,			/* 39 */
	CMDQ_EVENT_DISP_UFOE_SOF,			/* 40 */
	CMDQ_EVENT_DISP_PWM0_SOF,			/* 41 */
	CMDQ_EVENT_DISP_PWM1_SOF,			/* 42 */
	CMDQ_EVENT_DISP_OD_SOF,				/* 43 */
	CMDQ_EVENT_DISP_DSC_SOF,			/* 44 */

	CMDQ_EVENT_UFOD_RAMA0_L0_SOF,			/* 45 */
	CMDQ_EVENT_UFOD_RAMA0_L1_SOF,			/* 46 */
	CMDQ_EVENT_UFOD_RAMA0_L2_SOF,			/* 47 */
	CMDQ_EVENT_UFOD_RAMA0_L3_SOF,			/* 48 */
	CMDQ_EVENT_UFOD_RAMA1_L0_SOF,			/* 49 */
	CMDQ_EVENT_UFOD_RAMA1_L1_SOF,			/* 50 */
	CMDQ_EVENT_UFOD_RAMA1_L2_SOF,			/* 51 */
	CMDQ_EVENT_UFOD_RAMA1_L3_SOF,			/* 52 */

	/* MDP frame done */
	CMDQ_EVENT_MDP_RDMA0_EOF,			/* 53 */
	CMDQ_EVENT_MDP_RDMA1_EOF,			/* 54 */
	CMDQ_EVENT_MDP_RSZ0_EOF,			/* 55 */
	CMDQ_EVENT_MDP_RSZ1_EOF,			/* 56 */
	CMDQ_EVENT_MDP_RSZ2_EOF,			/* 57 */
	CMDQ_EVENT_MDP_TDSHP_EOF,			/* 58 */
	CMDQ_EVENT_MDP_TDSHP0_EOF,			/* 59 */
	CMDQ_EVENT_MDP_TDSHP1_EOF,			/* 60 */
	CMDQ_EVENT_MDP_WDMA_EOF,			/* 61 */
	CMDQ_EVENT_MDP_WROT_WRITE_EOF,			/* 62 */
	CMDQ_EVENT_MDP_WROT_READ_EOF,			/* 63 */
	CMDQ_EVENT_MDP_WROT0_WRITE_EOF,			/* 64 */
	CMDQ_EVENT_MDP_WROT0_READ_EOF,			/* 65 */
	CMDQ_EVENT_MDP_WROT1_WRITE_EOF,			/* 66 */
	CMDQ_EVENT_MDP_WROT1_READ_EOF,			/* 67 */
	CMDQ_EVENT_MDP_WROT0_W_EOF,			/* 68 */
	CMDQ_EVENT_MDP_WROT0_R_EOF,			/* 69 */
	CMDQ_EVENT_MDP_WROT1_W_EOF,			/* 70 */
	CMDQ_EVENT_MDP_WROT1_R_EOF,			/* 71 */
	CMDQ_EVENT_MDP_COLOR_EOF,			/* 72 */
	CMDQ_EVENT_MDP_CROP_EOF,			/* 73 */

	/* Display frame done */
	CMDQ_EVENT_DISP_OVL0_EOF,			/* 74 */
	CMDQ_EVENT_DISP_OVL1_EOF,			/* 75 */
	CMDQ_EVENT_DISP_2L_OVL0_EOF,			/* 76 */
	CMDQ_EVENT_DISP_2L_OVL1_EOF,			/* 77 */
	CMDQ_EVENT_DISP_RDMA0_EOF,			/* 78 */
	CMDQ_EVENT_DISP_RDMA1_EOF,			/* 79 */
	CMDQ_EVENT_DISP_RDMA2_EOF,			/* 80 */
	CMDQ_EVENT_DISP_WDMA0_EOF,			/* 81 */
	CMDQ_EVENT_DISP_WDMA1_EOF,			/* 82 */
	CMDQ_EVENT_DISP_COLOR_EOF,			/* 83 */
	CMDQ_EVENT_DISP_COLOR0_EOF,			/* 84 */
	CMDQ_EVENT_DISP_COLOR1_EOF,			/* 85 */
	CMDQ_EVENT_DISP_CCORR_EOF,			/* 86 */
	CMDQ_EVENT_DISP_CCORR0_EOF,			/* 87 */
	CMDQ_EVENT_DISP_CCORR1_EOF,			/* 88 */
	CMDQ_EVENT_DISP_AAL_EOF,			/* 89 */
	CMDQ_EVENT_DISP_AAL0_EOF,			/* 90 */
	CMDQ_EVENT_DISP_AAL1_EOF,			/* 91 */
	CMDQ_EVENT_DISP_GAMMA_EOF,			/* 92 */
	CMDQ_EVENT_DISP_GAMMA0_EOF,			/* 93 */
	CMDQ_EVENT_DISP_GAMMA1_EOF,			/* 94 */
	CMDQ_EVENT_DISP_DITHER_EOF,			/* 95 */
	CMDQ_EVENT_DISP_DITHER0_EOF,			/* 96 */
	CMDQ_EVENT_DISP_DITHER1_EOF,			/* 97 */
	CMDQ_EVENT_DISP_UFOE_EOF,			/* 98 */
	CMDQ_EVENT_DISP_OD_EOF,				/* 99 */
	CMDQ_EVENT_DISP_OD_RDMA_EOF,			/* 100 */
	CMDQ_EVENT_DISP_OD_WDMA_EOF,			/* 101 */
	CMDQ_EVENT_DISP_DSC_EOF,			/* 102 */
	CMDQ_EVENT_DISP_DSI0_EOF,			/* 103 */
	CMDQ_EVENT_DISP_DSI1_EOF,			/* 104 */
	CMDQ_EVENT_DISP_DPI0_EOF,			/* 105 */

	CMDQ_EVENT_UFOD_RAMA0_L0_EOF,			/* 106 */
	CMDQ_EVENT_UFOD_RAMA0_L1_EOF,			/* 107 */
	CMDQ_EVENT_UFOD_RAMA0_L2_EOF,			/* 108 */
	CMDQ_EVENT_UFOD_RAMA0_L3_EOF,			/* 109 */
	CMDQ_EVENT_UFOD_RAMA1_L0_EOF,			/* 110 */
	CMDQ_EVENT_UFOD_RAMA1_L1_EOF,			/* 111 */
	CMDQ_EVENT_UFOD_RAMA1_L2_EOF,			/* 112 */
	CMDQ_EVENT_UFOD_RAMA1_L3_EOF,			/* 113 */

	CMDQ_EVENT_DISP_POSTMASK0_SOF,			/* 114 */
	CMDQ_EVENT_DISP_POSTMASK0_FRAME_DONE,		/* 115 */
	CMDQ_EVENT_DISP_POSTMASK0_FRAME_RST_DONE_PULSE,	/* 116 */

	/* Mutex frame done */
	/* DISPSYS */
	CMDQ_EVENT_MUTEX0_STREAM_EOF,			/* 117 */
	/* DISPSYS */
	CMDQ_EVENT_MUTEX1_STREAM_EOF,			/* 118 */
	/* DISPSYS */
	CMDQ_EVENT_MUTEX2_STREAM_EOF,			/* 119 */
	/* DISPSYS */
	CMDQ_EVENT_MUTEX3_STREAM_EOF,			/* 120 */
	/* DISPSYS, please refer to disp_hal.h */
	CMDQ_EVENT_MUTEX4_STREAM_EOF,			/* 121 */
	/* DpFramework */
	CMDQ_EVENT_MUTEX5_STREAM_EOF,			/* 122 */
	/* DpFramework */
	CMDQ_EVENT_MUTEX6_STREAM_EOF,			/* 123 */
	/* DpFramework */
	CMDQ_EVENT_MUTEX7_STREAM_EOF,			/* 124 */
	/* DpFramework */
	CMDQ_EVENT_MUTEX8_STREAM_EOF,			/* 125 */
	/* DpFramework via CMDQ_IOCTL_LOCK_MUTEX */
	CMDQ_EVENT_MUTEX9_STREAM_EOF,			/* 126 */
	CMDQ_EVENT_MUTEX10_STREAM_EOF,			/* 127 */
	CMDQ_EVENT_MUTEX11_STREAM_EOF,			/* 128 */
	CMDQ_EVENT_MUTEX12_STREAM_EOF,			/* 129 */
	CMDQ_EVENT_MUTEX13_STREAM_EOF,			/* 130 */
	CMDQ_EVENT_MUTEX14_STREAM_EOF,			/* 131 */
	CMDQ_EVENT_MUTEX15_STREAM_EOF,			/* 132 */

	/* Display underrun */
	CMDQ_EVENT_DISP_RDMA0_UNDERRUN,			/* 133 */
	CMDQ_EVENT_DISP_RDMA1_UNDERRUN,			/* 134 */
	CMDQ_EVENT_DISP_RDMA2_UNDERRUN,			/* 135 */
	CMDQ_EVENT_DISP_RDMA3_UNDERRUN,			/* 136 */

	/* Display TE */
	CMDQ_EVENT_DSI_TE,				/* 137 */
	CMDQ_EVENT_DSI0_TE,				/* 138 */
	CMDQ_EVENT_DSI1_TE,				/* 139 */
	CMDQ_EVENT_MDP_DSI0_TE_SOF,			/* 140 */
	CMDQ_EVENT_MDP_DSI1_TE_SOF,			/* 141 */
	CMDQ_EVENT_DISP_DSI0_SOF,			/* 142 */
	CMDQ_EVENT_DISP_DSI1_SOF,			/* 143 */
	CMDQ_EVENT_DSI0_TO_GCE_MMCK0,			/* 144 */
	CMDQ_EVENT_DSI0_TO_GCE_MMCK1,			/* 145 */
	CMDQ_EVENT_DSI0_TO_GCE_MMCK2,			/* 146 */
	CMDQ_EVENT_DSI0_TO_GCE_MMCK3,			/* 147 */
	CMDQ_EVENT_DSI0_TO_GCE_MMCK4,			/* 148 */
	CMDQ_EVENT_DSI1_TO_GCE_MMCK0,			/* 149 */
	CMDQ_EVENT_DSI1_TO_GCE_MMCK1,			/* 150 */
	CMDQ_EVENT_DSI1_TO_GCE_MMCK2,			/* 151 */
	CMDQ_EVENT_DSI1_TO_GCE_MMCK3,			/* 152 */
	CMDQ_EVENT_DSI1_TO_GCE_MMCK4,			/* 153 */
	CMDQ_EVENT_DSI0_IRQ_EVENT,			/* 154 */
	CMDQ_EVENT_DSI0_DONE_EVENT,			/* 155 */
	CMDQ_EVENT_DSI1_IRQ_EVENT,			/* 156 */
	CMDQ_EVENT_DSI1_DONE_EVENT,			/* 157 */

	/* Reset Event */
	CMDQ_EVENT_DISP_WDMA0_RST_DONE,			/* 158 */
	CMDQ_EVENT_DISP_WDMA1_RST_DONE,			/* 159 */
	CMDQ_EVENT_MDP_WROT0_RST_DONE,			/* 160 */
	CMDQ_EVENT_MDP_WROT1_RST_DONE,			/* 161 */
	CMDQ_EVENT_MDP_WDMA_RST_DONE,			/* 162 */
	CMDQ_EVENT_MDP_RDMA0_RST_DONE,			/* 163 */
	CMDQ_EVENT_MDP_RDMA1_RST_DONE,			/* 164 */

	/* Display Mutex */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD0,		/* 165 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD1,		/* 166 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD2,		/* 167 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD3,		/* 168 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD4,		/* 169 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD5,		/* 170 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD6,		/* 171 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD7,		/* 172 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD8,		/* 173 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD9,		/* 174 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD10,		/* 175 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD11,		/* 176 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD12,		/* 177 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD13,		/* 178 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD14,		/* 179 */
	CMDQ_EVENT_DISP_MUTEX_ALL_MODULE_UPD15,		/* 180 */

	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE0,	/* 181 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE1,	/* 182 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE2,	/* 183 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE3,	/* 184 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE4,	/* 185 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE5,	/* 186 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE6,	/* 187 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE7,	/* 188 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE8,	/* 189 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE9,	/* 190 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE10,	/* 191 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE11,	/* 192 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE12,	/* 193 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE13,	/* 194 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE14,	/* 195 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE15,	/* 196 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE16,	/* 197 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE17,	/* 198 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE18,	/* 199 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE19,	/* 200 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE20,	/* 201 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE21,	/* 202 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE22,	/* 203 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE23,	/* 204 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE24,	/* 205 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE25,	/* 206 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE26,	/* 207 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE27,	/* 208 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE28,	/* 209 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE29,	/* 210 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE30,	/* 211 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE31,	/* 212 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE32,	/* 213 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE33,	/* 214 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE34,	/* 215 */

	/* ISP frame done */
	CMDQ_EVENT_ISP_PASS2_2_EOF,			/* 216 */
	CMDQ_EVENT_ISP_PASS2_1_EOF,			/* 217 */
	CMDQ_EVENT_ISP_PASS2_0_EOF,			/* 218 */
	CMDQ_EVENT_ISP_PASS1_1_EOF,			/* 219 */
	CMDQ_EVENT_ISP_PASS1_0_EOF,			/* 220 */

	/* ISP (IMGSYS) frame done */
	CMDQ_EVENT_DIP_CQ_THREAD0_EOF,			/* 221 */
	CMDQ_EVENT_DIP_CQ_THREAD1_EOF,			/* 222 */
	CMDQ_EVENT_DIP_CQ_THREAD2_EOF,			/* 223 */
	CMDQ_EVENT_DIP_CQ_THREAD3_EOF,			/* 224 */
	CMDQ_EVENT_DIP_CQ_THREAD4_EOF,			/* 225 */
	CMDQ_EVENT_DIP_CQ_THREAD5_EOF,			/* 226 */
	CMDQ_EVENT_DIP_CQ_THREAD6_EOF,			/* 227 */
	CMDQ_EVENT_DIP_CQ_THREAD7_EOF,			/* 228 */
	CMDQ_EVENT_DIP_CQ_THREAD8_EOF,			/* 229 */
	CMDQ_EVENT_DIP_CQ_THREAD9_EOF,			/* 230 */
	CMDQ_EVENT_DIP_CQ_THREAD10_EOF,			/* 231 */
	CMDQ_EVENT_DIP_CQ_THREAD11_EOF,			/* 232 */
	CMDQ_EVENT_DIP_CQ_THREAD12_EOF,			/* 233 */
	CMDQ_EVENT_DIP_CQ_THREAD13_EOF,			/* 234 */
	CMDQ_EVENT_DIP_CQ_THREAD14_EOF,			/* 235 */
	CMDQ_EVENT_DIP_CQ_THREAD15_EOF,			/* 236 */
	CMDQ_EVENT_DIP_CQ_THREAD16_EOF,			/* 237 */
	CMDQ_EVENT_DIP_CQ_THREAD17_EOF,			/* 238 */
	CMDQ_EVENT_DIP_CQ_THREAD18_EOF,			/* 239 */
	CMDQ_EVENT_DPE_EOF,				/* 240 */
	CMDQ_EVENT_DVE_EOF,				/* 241 */
	CMDQ_EVENT_WMF_EOF,				/* 242 */
	CMDQ_EVENT_GEPF_EOF,				/* 243 */
	CMDQ_EVENT_GEPF_TEMP_EOF,			/* 244 */
	CMDQ_EVENT_GEPF_BYPASS_EOF,			/* 245 */
	CMDQ_EVENT_RSC_EOF,				/* 246 */
	CMDQ_EVENT_DIP_DMA_ERR_EVENT,			/* 247 */

	/* ISP (IMGSYS) engine events */
	CMDQ_EVENT_ISP_SENINF_CAM1_2_3_FULL,		/* 248 */
	CMDQ_EVENT_ISP_SENINF_CAM0_FULL,		/* 249 */

	/* VENC frame done */
	CMDQ_EVENT_VENC_EOF,				/* 250 */
	CMDQ_EVENT_VENC_CMDQ_PAUSE_DONE,		/* 251 */

	/* JPEG frame done */
	CMDQ_EVENT_JPEG_ENC_EOF,			/* 252 */
	CMDQ_EVENT_JPEG_ENC_PASS2_EOF,			/* 253 */
	CMDQ_EVENT_JPEG_ENC_PASS1_EOF,			/* 254 */
	CMDQ_EVENT_JPEG_DEC_EOF,			/* 255 */

	/* VENC engine events */
	CMDQ_EVENT_VENC_MB_DONE,			/* 256 */
	CMDQ_EVENT_VENC_128BYTE_CNT_DONE,		/* 257 */

	/* ISP (CAMSYS) frame done */
	CMDQ_EVENT_ISP_FRAME_DONE_A,			/* 258 */
	CMDQ_EVENT_ISP_FRAME_DONE_B,			/* 259 */
	CMDQ_EVENT_ISP_FRAME_DONE_C,			/* 260 */
	CMDQ_EVENT_ISP_CAMSV_0_PASS1_DONE,		/* 261 */
	CMDQ_EVENT_ISP_CAMSV_0_2_PASS1_DONE,		/* 262 */
	CMDQ_EVENT_ISP_CAMSV_1_PASS1_DONE,		/* 263 */
	CMDQ_EVENT_ISP_CAMSV_2_PASS1_DONE,		/* 264 */
	CMDQ_EVENT_ISP_CAMSV_3_PASS1_DONE,		/* 265 */
	CMDQ_EVENT_ISP_TSF_DONE,			/* 266 */
	CMDQ_EVENT_ISP_RELAY_SOF,			/* 267 */
	CMDQ_EVENT_IPU_RELAY_SOF,			/* 268 */

	/* ISP (CAMSYS) engine events */
	CMDQ_EVENT_SENINF_0_FIFO_FULL,			/* 269 */
	CMDQ_EVENT_SENINF_1_FIFO_FULL,			/* 270 */
	CMDQ_EVENT_SENINF_2_FIFO_FULL,			/* 271 */
	CMDQ_EVENT_SENINF_3_FIFO_FULL,			/* 272 */
	CMDQ_EVENT_SENINF_4_FIFO_FULL,			/* 273 */
	CMDQ_EVENT_SENINF_5_FIFO_FULL,			/* 274 */
	CMDQ_EVENT_SENINF_6_FIFO_FULL,			/* 275 */
	CMDQ_EVENT_SENINF_7_FIFO_FULL,			/* 276 */

	CMDQ_EVENT_TG_OVRUN_A_INT_DLY,			/* 277 */
	CMDQ_EVENT_TG_OVRUN_B_INT_DLY,			/* 278 */
	CMDQ_EVENT_TG_OVRUN_C_INT,			/* 279 */
	CMDQ_EVENT_TG_GRABERR_A_INT_DLY,		/* 280 */
	CMDQ_EVENT_TG_GRABERR_B_INT_DLY,		/* 281 */
	CMDQ_EVENT_TG_GRABERR_C_INT,			/* 282 */

	CMDQ_EVENT_CQ_VR_SNAP_A_INT_DLY,		/* 283 */
	CMDQ_EVENT_CQ_VR_SNAP_B_INT_DLY,		/* 284 */
	CMDQ_EVENT_CQ_VR_SNAP_C_INT,			/* 285 */

	/* 6799 New Event */
	CMDQ_EVENT_DISP_DSC1_SOF,			/* 286 */
	CMDQ_EVENT_DISP_DSC2_SOF,			/* 287 */
	CMDQ_EVENT_DISP_RSZ0_SOF,			/* 288 */
	CMDQ_EVENT_DISP_RSZ1_SOF,			/* 289 */
	CMDQ_EVENT_DISP_DSC0_EOF,			/* 290 */
	CMDQ_EVENT_DISP_DSC1_EOF,			/* 291 */
	CMDQ_EVENT_DISP_RSZ0_EOF,			/* 292 */
	CMDQ_EVENT_DISP_RSZ1_EOF,			/* 293 */
	CMDQ_EVENT_DISP_OVL0_RST_DONE,			/* 294 */
	CMDQ_EVENT_DISP_OVL1_RST_DONE,			/* 295 */
	CMDQ_EVENT_DISP_OVL0_2L_RST_DONE,		/* 296 */
	CMDQ_EVENT_DISP_OVL1_2L_RST_DONE,		/* 297 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE35,	/* 298 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE36,	/* 299 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE37,	/* 300 */
	CMDQ_EVENT_DISP_MUTEX_REG_UPD_FOR_MODULE38,	/* 301 */
	CMDQ_EVENT_WPE_A_EOF,				/* 302 */
	CMDQ_EVENT_EAF_EOF,				/* 303 */
	CMDQ_EVENT_VENC_BSDMA_FULL,			/* 304 */
	CMDQ_EVENT_IPU0_EOF,				/* 305 */
	CMDQ_EVENT_IPU1_EOF,				/* 306 */
	CMDQ_EVENT_IPU2_EOF,				/* 307 */
	CMDQ_EVENT_IPU3_EOF,				/* 308 */

	/* 6759 New Event */
	CMDQ_EVENT_DISP_SPLIT_SOF,			/* 309 */
	CMDQ_EVENT_DISP_SPLIT_FRAME_DONE,		/* 310 */
	CMDQ_EVENT_AMD_FRAME_DONE,			/* 311 */

	CMDQ_EVENT_DISP_DPI0_SOF,			/* 312 */
	CMDQ_EVENT_DSI0_TE_INFRA,			/* 313 */

	/* 6739 New Event*/
	CMDQ_EVENT_DISP_DBI0_SOF,			/* 314 */
	CMDQ_EVENT_DISP_DBI0_EOF,			/* 315 */

	/* 6775 New Event*/
	CMDQ_EVENT_MDP_CCORR_SOF,			/* 316 */
	CMDQ_EVENT_MDP_CCORR_FRAME_DONE,		/* 317 */
	CMDQ_EVENT_MDP_AAL_FRAME_DONE,			/* 318 */
	CMDQ_EVENT_WPE_B_FRAME_DONE,			/* 319 */
	CMDQ_EVENT_MFB_DONE,				/* 320 */
	CMDQ_EVENT_OCC_DONE,				/* 321 */
	CMDQ_EVENT_IPU_DONE_1_1,			/* 322 */
	CMDQ_EVENT_IPU_DONE_1_2,			/* 323 */
	CMDQ_EVENT_IPU_DONE_1_0,			/* 324 */
	CMDQ_EVENT_IPU_DONE_1_3,			/* 325 */
	CMDQ_EVENT_IPU_DONE_2_0,			/* 326 */
	CMDQ_EVENT_IPU_DONE_2_1,			/* 327 */
	CMDQ_EVENT_IPU_DONE_2_3,			/* 328 */
	CMDQ_EVENT_IPU_DONE_2_2,			/* 329 */

	/* 6765 New Event */
	CMDQ_EVENT_MDP_CCORR0_SOF,			/* 330 */
	CMDQ_EVENT_MDP_CCORR0_FRAME_DONE,		/* 331 */
	CMDQ_EVENT_IMG_DL_RELAY_SOF,			/* 332 */

	CMDQ_EVENT_DMA_R1_ERROR_A_INT_DLY,		/* 333 */
	CMDQ_EVENT_DMA_R1_ERROR_B_INT_DLY,		/* 334 */
	CMDQ_EVENT_DMA_R1_ERROR_C_INT,			/* 335 */

	CMDQ_EVENT_APU_GCE_CORE0_EVENT_0,		/* 336 */
	CMDQ_EVENT_APU_GCE_CORE0_EVENT_1,		/* 337 */
	CMDQ_EVENT_APU_GCE_CORE0_EVENT_2,		/* 338 */
	CMDQ_EVENT_APU_GCE_CORE0_EVENT_3,		/* 339 */
	CMDQ_EVENT_APU_GCE_CORE1_EVENT_0,		/* 340 */
	CMDQ_EVENT_APU_GCE_CORE1_EVENT_1,		/* 341 */
	CMDQ_EVENT_APU_GCE_CORE1_EVENT_2,		/* 342 */
	CMDQ_EVENT_APU_GCE_CORE1_EVENT_3,		/* 343 */

	CMDQ_EVENT_VDEC_EVENT_0,			/* 344 */
	CMDQ_EVENT_VDEC_EVENT_1,			/* 345 */
	CMDQ_EVENT_VDEC_EVENT_2,			/* 346 */
	CMDQ_EVENT_VDEC_EVENT_3,			/* 347 */
	CMDQ_EVENT_VDEC_EVENT_4,			/* 348 */
	CMDQ_EVENT_VDEC_EVENT_5,			/* 349 */
	CMDQ_EVENT_VDEC_EVENT_6,			/* 350 */
	CMDQ_EVENT_VDEC_EVENT_7,			/* 351 */
	CMDQ_EVENT_VDEC_EVENT_8,			/* 352 */
	CMDQ_EVENT_VDEC_EVENT_9,			/* 353 */
	CMDQ_EVENT_VDEC_EVENT_10,			/* 354 */
	CMDQ_EVENT_VDEC_EVENT_11,			/* 355 */
	CMDQ_EVENT_VDEC_EVENT_12,			/* 356 */
	CMDQ_EVENT_VDEC_EVENT_13,			/* 357 */
	CMDQ_EVENT_VDEC_EVENT_14,			/* 358 */
	CMDQ_EVENT_VDEC_EVENT_15,			/* 359 */

	CMDQ_EVENT_FDVT_DONE,				/* 360 */
	CMDQ_EVENT_FE_DONE,				/* 361 */
	CMDQ_EVENT_DVS_DONE_ASYNC_SHOT,			/* 362 */
	CMDQ_EVENT_DVP_DONE_ASYNC_SHOT,			/* 363 */

	CMDQ_EVENT_VENC_FRAME_DONE,			/* 364 */
	CMDQ_EVENT_VENC_PAUSE_DONE,			/* 365 */

	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_0,		/* 366 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_1,		/* 367 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_2,		/* 368 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_3,		/* 369 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_4,		/* 370 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_5,		/* 371 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_6,		/* 372 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_7,		/* 373 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_8,		/* 374 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_9,		/* 375 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_10,		/* 376 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_11,		/* 377 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_12,		/* 378 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_13,		/* 379 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_14,		/* 380 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_15,		/* 381 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_16,		/* 382 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_17,		/* 383 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_18,		/* 384 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_19,		/* 385 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_20,		/* 386 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_21,		/* 387 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_22,		/* 388 */
	CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_23,		/* 389 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_0,		/* 390 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_1,		/* 391 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_2,		/* 392 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_3,		/* 393 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_4,		/* 394 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_5,		/* 395 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_6,		/* 396 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_7,		/* 397 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_8,		/* 398 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_9,		/* 399 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_10,		/* 400 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_11,		/* 401 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_12,		/* 402 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_13,		/* 403 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_14,		/* 404 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_15,		/* 405 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_16,		/* 406 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_17,		/* 407 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_18,		/* 408 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_19,		/* 409 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_20,		/* 410 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_21,		/* 411 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_22,		/* 412 */
	CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_23,		/* 413 */
	CMDQ_EVENT_IPE_EVENT_TX_FRAME_DONE_0,		/* 414 */
	CMDQ_EVENT_IPE_EVENT_TX_FRAME_DONE_1,		/* 415 */
	CMDQ_EVENT_IPE_EVENT_TX_FRAME_DONE_2,		/* 416 */
	CMDQ_EVENT_IPE_EVENT_TX_FRAME_DONE_3,		/* 417 */
	CMDQ_EVENT_IPE_EVENT_TX_FRAME_DONE_4,		/* 418 */

	/* Keep this at the end of HW events */
	CMDQ_MAX_HW_EVENT_COUNT = 512,

	/* token 512 to 639 may set secure */

	/* SW Sync Tokens (Pre-defined) */
	/* Config thread notify trigger thread */
	CMDQ_SYNC_TOKEN_CONFIG_DIRTY = 640,
	/* Trigger thread notify config thread */
	CMDQ_SYNC_TOKEN_STREAM_EOF,			/* 641 */
	/* Block Trigger thread until the ESD check finishes. */
	CMDQ_SYNC_TOKEN_ESD_EOF,			/* 642 */
	/* check CABC setup finish */
	CMDQ_SYNC_TOKEN_CABC_EOF,			/* 643 */
	/* Block Trigger thread until the path freeze finishes */
	CMDQ_SYNC_TOKEN_FREEZE_EOF,			/* 644 */
	/* Pass-2 notifies VENC frame is ready to be encoded */
	CMDQ_SYNC_TOKEN_VENC_INPUT_READY,		/* 645 */
	/* VENC notifies Pass-2 encode done so next frame may start */
	CMDQ_SYNC_TOKEN_VENC_EOF,			/* 646 */

	/* Notify normal CMDQ there are some secure task done */
	CMDQ_SYNC_SECURE_THR_EOF,			/* 647 */
	/* Lock WSM resource */
	CMDQ_SYNC_SECURE_WSM_LOCK,			/* 648 */

	/* SW Sync Tokens (User-defined) */
	CMDQ_SYNC_TOKEN_USER_0,				/* 649 */
	CMDQ_SYNC_TOKEN_USER_1,				/* 650 */
	CMDQ_SYNC_TOKEN_POLL_MONITOR,			/* 651 */

	/* SW Sync Tokens (Pre-defined) */
	/* Config thread notify trigger thread for external display */
	CMDQ_SYNC_TOKEN_EXT_CONFIG_DIRTY,		/* 652 */
	/* Trigger thread notify config thread */
	CMDQ_SYNC_TOKEN_EXT_STREAM_EOF,			/* 653 */
	/* Check CABC setup finish */
	CMDQ_SYNC_TOKEN_EXT_CABC_EOF,			/* 654 */

	/* Secure video path notify SW token */
	CMDQ_SYNC_DISP_OVL0_2NONSEC_END,		/* 655 */
	CMDQ_SYNC_DISP_OVL1_2NONSEC_END,		/* 656 */
	CMDQ_SYNC_DISP_2LOVL0_2NONSEC_END,		/* 657 */
	CMDQ_SYNC_DISP_2LOVL1_2NONSEC_END,		/* 658 */
	CMDQ_SYNC_DISP_RDMA0_2NONSEC_END,		/* 659 */
	CMDQ_SYNC_DISP_RDMA1_2NONSEC_END,		/* 660 */
	CMDQ_SYNC_DISP_WDMA0_2NONSEC_END,		/* 661 */
	CMDQ_SYNC_DISP_WDMA1_2NONSEC_END,		/* 662 */
	CMDQ_SYNC_DISP_EXT_STREAM_EOF,			/* 663 */

	/* Event for CMDQ to block executing command when append command
	 * Plz sync CMDQ_SYNC_TOKEN_APPEND_THR(id) in cmdq_core source file.
	 */
	CMDQ_SYNC_TOKEN_APPEND_THR0 = 670,
	CMDQ_SYNC_TOKEN_APPEND_THR1,			/* 671 */
	CMDQ_SYNC_TOKEN_APPEND_THR2,			/* 672 */
	CMDQ_SYNC_TOKEN_APPEND_THR3,			/* 673 */
	CMDQ_SYNC_TOKEN_APPEND_THR4,			/* 674 */
	CMDQ_SYNC_TOKEN_APPEND_THR5,			/* 675 */
	CMDQ_SYNC_TOKEN_APPEND_THR6,			/* 676 */
	CMDQ_SYNC_TOKEN_APPEND_THR7,			/* 677 */
	CMDQ_SYNC_TOKEN_APPEND_THR8,			/* 678 */
	CMDQ_SYNC_TOKEN_APPEND_THR9,			/* 679 */
	CMDQ_SYNC_TOKEN_APPEND_THR10,			/* 680 */
	CMDQ_SYNC_TOKEN_APPEND_THR11,			/* 681 */
	CMDQ_SYNC_TOKEN_APPEND_THR12,			/* 682 */
	CMDQ_SYNC_TOKEN_APPEND_THR13,			/* 683 */
	CMDQ_SYNC_TOKEN_APPEND_THR14,			/* 684 */
	CMDQ_SYNC_TOKEN_APPEND_THR15,			/* 685 */
	CMDQ_SYNC_TOKEN_APPEND_THR16,			/* 686 */
	CMDQ_SYNC_TOKEN_APPEND_THR17,			/* 687 */
	CMDQ_SYNC_TOKEN_APPEND_THR18,			/* 688 */
	CMDQ_SYNC_TOKEN_APPEND_THR19,			/* 689 */
	CMDQ_SYNC_TOKEN_APPEND_THR20,			/* 690 */
	CMDQ_SYNC_TOKEN_APPEND_THR21,			/* 691 */
	CMDQ_SYNC_TOKEN_APPEND_THR22,			/* 692 */
	CMDQ_SYNC_TOKEN_APPEND_THR23,			/* 693 */

	/* secure world notify normal world task done */
	CMDQ_SYNC_TOKEN_SEC_DONE,			/* 694 */

	/* token after 700 sync user space header */

	/* GPR access tokens (for HW register backup)
	 * There are 15 32-bit GPR, 3 GPR form a set
	 * (64-bit for address, 32-bit for value)
	 */
	CMDQ_SYNC_TOKEN_GPR_SET_0 = 700,
	CMDQ_SYNC_TOKEN_GPR_SET_1,			/* 701 */
	CMDQ_SYNC_TOKEN_GPR_SET_2,			/* 702 */
	CMDQ_SYNC_TOKEN_GPR_SET_3,			/* 703 */
	CMDQ_SYNC_TOKEN_GPR_SET_4,			/* 704 */

	/* Resource lock event to control resource in GCE thread */
	CMDQ_SYNC_RESOURCE_WROT0 = 710,
	CMDQ_SYNC_RESOURCE_WROT1 = 711,

	/**
	 * Event for CMDQ delay implement
	 * Plz sync CMDQ_SYNC_TOKEN_DELAY_THR(id) in cmdq_core source file.
	 */
	CMDQ_SYNC_TOKEN_TIMER = 720,
	CMDQ_SYNC_TOKEN_DELAY_SET0 = 721,
	CMDQ_SYNC_TOKEN_DELAY_SET1 = 722,
	CMDQ_SYNC_TOKEN_DELAY_SET2 = 723,

	/* GCE reserved hw event */
	CMDQ_OUT_EVENT = 898,

	/* GCE HW TPR Event*/
	CMDQ_EVENT_TIMER_00 = 962,
	CMDQ_EVENT_TIMER_01 = 963,
	CMDQ_EVENT_TIMER_02 = 964,
	CMDQ_EVENT_TIMER_03 = 965,
	CMDQ_EVENT_TIMER_04 = 966,
	/* 5: 1us */
	CMDQ_EVENT_TIMER_05 = 967,
	CMDQ_EVENT_TIMER_06 = 968,
	CMDQ_EVENT_TIMER_07 = 969,
	/* 8: 10us */
	CMDQ_EVENT_TIMER_08 = 970,
	CMDQ_EVENT_TIMER_09 = 971,
	CMDQ_EVENT_TIMER_10 = 972,
	/* 11: 100us */
	CMDQ_EVENT_TIMER_11 = 973,
	CMDQ_EVENT_TIMER_12 = 974,
	CMDQ_EVENT_TIMER_13 = 975,
	CMDQ_EVENT_TIMER_14 = 976,
	/* 15: 1ms */
	CMDQ_EVENT_TIMER_15 = 977,
	CMDQ_EVENT_TIMER_16 = 978,
	CMDQ_EVENT_TIMER_17 = 979,
	/* 18: 10ms */
	CMDQ_EVENT_TIMER_18 = 980,
	CMDQ_EVENT_TIMER_19 = 981,
	CMDQ_EVENT_TIMER_20 = 982,
	/* 21: 100ms */
	CMDQ_EVENT_TIMER_21 = 983,
	CMDQ_EVENT_TIMER_22 = 984,
	CMDQ_EVENT_TIMER_23 = 985,
	CMDQ_EVENT_TIMER_24 = 986,
	CMDQ_EVENT_TIMER_25 = 987,
	CMDQ_EVENT_TIMER_26 = 988,
	CMDQ_EVENT_TIMER_27 = 989,
	CMDQ_EVENT_TIMER_28 = 990,
	CMDQ_EVENT_TIMER_29 = 991,
	CMDQ_EVENT_TIMER_30 = 992,
	CMDQ_EVENT_TIMER_31 = 993,

	/* GPR timer token, 994 to 994+23 */
	CMDQ_EVENT_TIMER_GPR = 994,

	/* event id is 9 bit */
	CMDQ_SYNC_TOKEN_MAX = 0x3FF,
	CMDQ_SYNC_TOKEN_INVALID = -1,
};

#endif
