#if 0
ps_2_0
dcl t0
dcl t1.xy
dcl_2d s0
texld r0, t1, s0
mul r0, r0, t0
mov oC0, r0

ps_2_0
dcl t0
dcl t1.xys
dcl_2d s0
texld r0, r2, s0
mul oC0, r0, r1

ps_4_0
dcl_sampler s0, mode_default
dcl_resource_texture2d(float, float, float, float) t0
dcl_input_ps linear v1.xyzw
dcl_input_ps linear v2.xy
dcl_output o0.xyzw
dcl_temps 1
sample r0.xyzw, v2.xyxx, t0.xyzw, s0
mul o0.xyzw, r0.xyzw, v1.xyzw
ret
#endif

const BYTE nk_d3d11_pixel_shader[] =
{
	 68,  88,  66,  67, 249,  46,
	 26,  75, 111, 182, 161, 241,
	199, 179, 191,  89,  44, 229,
	245, 103,   1,   0,   0,   0,
	124,   2,   0,   0,   5,   0,
	  0,   0,  52,   0,   0,   0,
	176,   0,   0,   0,  56,   1,
	  0,   0, 212,   1,   0,   0,
	 72,   2,   0,   0,  88,  78,
	 65,  83, 116,   0,   0,   0,
	116,   0,   0,   0,   0,   2,
	255, 255,  76,   0,   0,   0,
	 40,   0,   0,   0,   0,   0,
	 40,   0,   0,   0,  40,   0,
	  0,   0,  40,   0,   1,   0,
	 36,   0,   0,   0,  40,   0,
	  0,   0,   0,   0,   0,   2,
	255, 255,  31,   0,   0,   2,
	  0,   0,   0, 128,   0,   0,
	 15, 176,  31,   0,   0,   2,
	  0,   0,   0, 128,   1,   0,
	  3, 176,  31,   0,   0,   2,
	  0,   0,   0, 144,   0,   8,
	 15, 160,  66,   0,   0,   3,
	  0,   0,  15, 128,   2,   0,
	228, 128,   0,   8, 228, 160,
	  5,   0,   0,   3,   0,   8,
	 15, 128,   0,   0, 228, 128,
	  1,   0, 228, 128, 255, 255,
	  0,   0,  65, 111, 110,  57,
	128,   0,   0,   0, 128,   0,
	  0,   0,   0,   2, 255, 255,
	 88,   0,   0,   0,  40,   0,
	  0,   0,   0,   0,  40,   0,
	  0,   0,  40,   0,   0,   0,
	 40,   0,   1,   0,  36,   0,
	  0,   0,  40,   0,   0,   0,
	  0,   0,   0,   2, 255, 255,
	 31,   0,   0,   2,   0,   0,
	  0, 128,   0,   0,  15, 176,
	 31,   0,   0,   2,   0,   0,
	  0, 128,   1,   0,   3, 176,
	 31,   0,   0,   2,   0,   0,
	  0, 144,   0,   8,  15, 160,
	 66,   0,   0,   3,   0,   0,
	 15, 128,   1,   0, 228, 176,
	  0,   8, 228, 160,   5,   0,
	  0,   3,   0,   0,  15, 128,
	  0,   0, 228, 128,   0,   0,
	228, 176,   1,   0,   0,   2,
	  0,   8,  15, 128,   0,   0,
	228, 128, 255, 255,   0,   0,
	 83,  72,  68,  82, 148,   0,
	  0,   0,  64,   0,   0,   0,
	 37,   0,   0,   0,  90,   0,
	  0,   3,   0,  96,  16,   0,
	  0,   0,   0,   0,  88,  24,
	  0,   4,   0, 112,  16,   0,
	  0,   0,   0,   0,  85,  85,
	  0,   0,  98,  16,   0,   3,
	242,  16,  16,   0,   1,   0,
	  0,   0,  98,  16,   0,   3,
	 50,  16,  16,   0,   2,   0,
	  0,   0, 101,   0,   0,   3,
	242,  32,  16,   0,   0,   0,
	  0,   0, 104,   0,   0,   2,
	  1,   0,   0,   0,  69,   0,
	  0,   9, 242,   0,  16,   0,
	  0,   0,   0,   0,  70,  16,
	 16,   0,   2,   0,   0,   0,
	 70, 126,  16,   0,   0,   0,
	  0,   0,   0,  96,  16,   0,
	  0,   0,   0,   0,  56,   0,
	  0,   7, 242,  32,  16,   0,
	  0,   0,   0,   0,  70,  14,
	 16,   0,   0,   0,   0,   0,
	 70,  30,  16,   0,   1,   0,
	  0,   0,  62,   0,   0,   1,
	 73,  83,  71,  78, 108,   0,
	  0,   0,   3,   0,   0,   0,
	  8,   0,   0,   0,  80,   0,
	  0,   0,   0,   0,   0,   0,
	  1,   0,   0,   0,   3,   0,
	  0,   0,   0,   0,   0,   0,
	 15,   0,   0,   0,  92,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   3,   0,
	  0,   0,   1,   0,   0,   0,
	 15,  15,   0,   0,  98,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   3,   0,
	  0,   0,   2,   0,   0,   0,
	  3,   3,   0,   0,  83,  86,
	 95,  80,  79,  83,  73,  84,
	 73,  79,  78,   0,  67,  79,
	 76,  79,  82,   0,  84,  69,
	 88,  67,  79,  79,  82,  68,
	  0, 171,  79,  83,  71,  78,
	 44,   0,   0,   0,   1,   0,
	  0,   0,   8,   0,   0,   0,
	 32,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  3,   0,   0,   0,   0,   0,
	  0,   0,  15,   0,   0,   0,
	 83,  86,  95,  84,  97, 114,
	103, 101, 116,   0, 171, 171
};