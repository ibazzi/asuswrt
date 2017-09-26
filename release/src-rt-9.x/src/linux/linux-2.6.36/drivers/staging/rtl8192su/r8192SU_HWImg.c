/*Created on  2009/ 1/15,  3:10*/

#include "r8192SU_HWImg.h"

u8 Rtl8192SUFwMainArray[MainArrayLength] = {
0x0, };

u8 Rtl8192SUFwDataArray[DataArrayLength] = {
0x0, };

u32 Rtl8192SUPHY_REG_2T2RArray[PHY_REG_2T2RArrayLength] = {
0x01c,0x07000000,
0x800,0x00040000,
0x804,0x00008003,
0x808,0x0000fc00,
0x80c,0x0000000a,
0x810,0x10005088,
0x814,0x020c3d10,
0x818,0x00200185,
0x81c,0x00000000,
0x820,0x01000000,
0x824,0x00390004,
0x828,0x01000000,
0x82c,0x00390004,
0x830,0x00000004,
0x834,0x00690200,
0x838,0x00000004,
0x83c,0x00690200,
0x840,0x00010000,
0x844,0x00010000,
0x848,0x00000000,
0x84c,0x00000000,
0x850,0x00000000,
0x854,0x00000000,
0x858,0x48484848,
0x85c,0x65a965a9,
0x860,0x0f7f0130,
0x864,0x0f7f0130,
0x868,0x0f7f0130,
0x86c,0x0f7f0130,
0x870,0x03000700,
0x874,0x03000300,
0x878,0x00020002,
0x87c,0x004f0201,
0x880,0xa8300ac1,
0x884,0x00000058,
0x888,0x00000008,
0x88c,0x00000004,
0x890,0x00000000,
0x894,0xfffffffe,
0x898,0x40302010,
0x89c,0x00706050,
0x8b0,0x00000000,
0x8e0,0x00000000,
0x8e4,0x00000000,
0xe00,0x30333333,
0xe04,0x2a2d2e2f,
0xe08,0x00003232,
0xe10,0x30333333,
0xe14,0x2a2d2e2f,
0xe18,0x30333333,
0xe1c,0x2a2d2e2f,
0xe30,0x01007c00,
0xe34,0x01004800,
0xe38,0x1000dc1f,
0xe3c,0x10008c1f,
0xe40,0x021400a0,
0xe44,0x281600a0,
0xe48,0xf8000001,
0xe4c,0x00002910,
0xe50,0x01007c00,
0xe54,0x01004800,
0xe58,0x1000dc1f,
0xe5c,0x10008c1f,
0xe60,0x021400a0,
0xe64,0x281600a0,
0xe6c,0x00002910,
0xe70,0x31ed92fb,
0xe74,0x361536fb,
0xe78,0x361536fb,
0xe7c,0x361536fb,
0xe80,0x361536fb,
0xe84,0x000d92fb,
0xe88,0x000d92fb,
0xe8c,0x31ed92fb,
0xed0,0x31ed92fb,
0xed4,0x31ed92fb,
0xed8,0x000d92fb,
0xedc,0x000d92fb,
0xee0,0x000d92fb,
0xee4,0x015e5448,
0xee8,0x21555448,
0x900,0x00000000,
0x904,0x00000023,
0x908,0x00000000,
0x90c,0x01121313,
0xa00,0x00d047c8,
0xa04,0x80ff0008,
0xa08,0x8ccd8300,
0xa0c,0x2e62120f,
0xa10,0x9500bb78,
0xa14,0x11144028,
0xa18,0x00881117,
0xa1c,0x89140f00,
0xa20,0x1a1b0000,
0xa24,0x090e1317,
0xa28,0x00000204,
0xa2c,0x10d30000,
0xc00,0x40071d40,
0xc04,0x00a05633,
0xc08,0x000000e4,
0xc0c,0x6c6c6c6c,
0xc10,0x08800000,
0xc14,0x40000100,
0xc18,0x08000000,
0xc1c,0x40000100,
0xc20,0x08000000,
0xc24,0x40000100,
0xc28,0x08000000,
0xc2c,0x40000100,
0xc30,0x6de9ac44,
0xc34,0x469652cf,
0xc38,0x49795994,
0xc3c,0x0a979764,
0xc40,0x1f7c403f,
0xc44,0x000100b7,
0xc48,0xec020000,
0xc4c,0x007f037f,
0xc50,0x69543420,
0xc54,0x433c0094,
0xc58,0x69543420,
0xc5c,0x433c0094,
0xc60,0x69543420,
0xc64,0x433c0094,
0xc68,0x69543420,
0xc6c,0x433c0094,
0xc70,0x2c7f000d,
0xc74,0x0186175b,
0xc78,0x0000001f,
0xc7c,0x00b91612,
0xc80,0x40000100,
0xc84,0x20f60000,
0xc88,0x20000080,
0xc8c,0x20200000,
0xc90,0x40000100,
0xc94,0x00000000,
0xc98,0x40000100,
0xc9c,0x00000000,
0xca0,0x00492492,
0xca4,0x00000000,
0xca8,0x00000000,
0xcac,0x00000000,
0xcb0,0x00000000,
0xcb4,0x00000000,
0xcb8,0x00000000,
0xcbc,0x28000000,
0xcc0,0x00000000,
0xcc4,0x00000000,
0xcc8,0x00000000,
0xccc,0x00000000,
0xcd0,0x00000000,
0xcd4,0x00000000,
0xcd8,0x64b22427,
0xcdc,0x00766932,
0xce0,0x00222222,
0xce4,0x00000000,
0xce8,0x37644302,
0xcec,0x2f97d40c,
0xd00,0x00000750,
0xd04,0x00000403,
0xd08,0x0000907f,
0xd0c,0x00000001,
0xd10,0xa0633333,
0xd14,0x33333c63,
0xd18,0x6a8f5b6b,
0xd1c,0x00000000,
0xd20,0x00000000,
0xd24,0x00000000,
0xd28,0x00000000,
0xd2c,0xcc979975,
0xd30,0x00000000,
0xd34,0x00000000,
0xd38,0x00000000,
0xd3c,0x00027293,
0xd40,0x00000000,
0xd44,0x00000000,
0xd48,0x00000000,
0xd50,0x6437140a,
0xd54,0x024dbd02,
0xd58,0x00000000,
0xd5c,0x30032064,
0xd60,0x4653de68,
0xd64,0x00518a3c,
0xd68,0x00002101,
0xf14,0x00000003,
0xf4c,0x00000000,
0xf00,0x00000300,
};

u32 Rtl8192SUPHY_REG_1T2RArray[PHY_REG_1T2RArrayLength] = {
0x0, };

u32 Rtl8192SUPHY_ChangeTo_1T1RArray[PHY_ChangeTo_1T1RArrayLength] = {
0x844,0xffffffff,0x00010000,
0x804,0x0000000f,0x00000001,
0x824,0x00f0000f,0x00300004,
0x82c,0x00f0000f,0x00100002,
0x870,0x04000000,0x00000001,
0x864,0x00000400,0x00000000,
0x878,0x000f000f,0x00000002,
0xe74,0x0f000000,0x00000002,
0xe78,0x0f000000,0x00000002,
0xe7c,0x0f000000,0x00000002,
0xe80,0x0f000000,0x00000002,
0x90c,0x000000ff,0x00000011,
0xc04,0x000000ff,0x00000011,
0xd04,0x0000000f,0x00000001,
0x1f4,0xffff0000,0x00007777,
0x234,0xf8000000,0x0000000a,
};

u32 Rtl8192SUPHY_ChangeTo_1T2RArray[PHY_ChangeTo_1T2RArrayLength] = {
0x804,0x0000000f,0x00000003,
0x824,0x00f0000f,0x00300004,
0x82c,0x00f0000f,0x00300002,
0x870,0x04000000,0x00000001,
0x864,0x00000400,0x00000000,
0x878,0x000f000f,0x00000002,
0xe74,0x0f000000,0x00000002,
0xe78,0x0f000000,0x00000002,
0xe7c,0x0f000000,0x00000002,
0xe80,0x0f000000,0x00000002,
0x90c,0x000000ff,0x00000011,
0xc04,0x000000ff,0x00000033,
0xd04,0x0000000f,0x00000003,
0x1f4,0xffff0000,0x00007777,
0x234,0xf8000000,0x0000000a,
};

u32 Rtl8192SUPHY_ChangeTo_2T2RArray[PHY_ChangeTo_2T2RArrayLength] = {
0x804,0x0000000f,0x00000003,
0x824,0x00f0000f,0x00300004,
0x82c,0x00f0000f,0x00300004,
0x870,0x04000000,0x00000001,
0x864,0x00000400,0x00000001,
0x878,0x000f000f,0x00020002,
0xe74,0x0f000000,0x00000006,
0xe78,0x0f000000,0x00000006,
0xe7c,0x0f000000,0x00000006,
0xe80,0x0f000000,0x00000006,
0x90c,0x000000ff,0x00000033,
0xc04,0x000000ff,0x00000033,
0xd04,0x0000000f,0x00000003,
0x1f4,0xffff0000,0x0000ffff,
0x234,0xf8000000,0x00000013,
};

u32 Rtl8192SUPHY_REG_Array_PG[PHY_REG_Array_PGLength] = {
0xe00,0xffffffff,0x04060606,
0xe04,0xffffffff,0x00020204,
0xe08,0x0000ff00,0x00000000,
0xe10,0xffffffff,0x0408080a,
0xe14,0xffffffff,0x00020204,
0xe18,0xffffffff,0x0408080a,
0xe1c,0xffffffff,0x00020204,
0xe00,0xffffffff,0x00000000,
0xe04,0xffffffff,0x00000000,
0xe08,0x0000ff00,0x00000000,
0xe10,0xffffffff,0x00000000,
0xe14,0xffffffff,0x00000000,
0xe18,0xffffffff,0x00000000,
0xe1c,0xffffffff,0x00000000,
0xe00,0xffffffff,0x00000000,
0xe04,0xffffffff,0x00000000,
0xe08,0x0000ff00,0x00000000,
0xe10,0xffffffff,0x00000000,
0xe14,0xffffffff,0x00000000,
0xe18,0xffffffff,0x00000000,
0xe1c,0xffffffff,0x00000000,
0xe00,0xffffffff,0x00000000,
0xe04,0xffffffff,0x00000000,
0xe08,0x0000ff00,0x00000000,
0xe10,0xffffffff,0x00000000,
0xe14,0xffffffff,0x00000000,
0xe18,0xffffffff,0x00000000,
0xe1c,0xffffffff,0x00000000,
};

u32 Rtl8192SURadioA_1T_Array[RadioA_1T_ArrayLength] = {
0x000,0x00030159,
0x001,0x00030250,
0x002,0x00010000,
0x010,0x0008000f,
0x011,0x000231fc,
0x010,0x000c000f,
0x011,0x0003f9f8,
0x010,0x0002000f,
0x011,0x00020101,
0x014,0x0001093e,
0x014,0x0009093e,
0x015,0x000198f4,
0x017,0x000f6500,
0x01a,0x00013056,
0x01b,0x00060000,
0x01c,0x00000300,
0x01e,0x00031059,
0x021,0x00054000,
0x022,0x0000083c,
0x023,0x00001558,
0x024,0x00000060,
0x025,0x00022583,
0x026,0x0000f200,
0x027,0x000eacf1,
0x028,0x0009bd54,
0x029,0x00004582,
0x02a,0x00000001,
0x02b,0x00021334,
0x02a,0x00000000,
0x02b,0x0000000a,
0x02a,0x00000001,
0x02b,0x00000808,
0x02b,0x00053333,
0x02c,0x0000000c,
0x02a,0x00000002,
0x02b,0x00000808,
0x02b,0x0005b333,
0x02c,0x0000000d,
0x02a,0x00000003,
0x02b,0x00000808,
0x02b,0x00063333,
0x02c,0x0000000d,
0x02a,0x00000004,
0x02b,0x00000808,
0x02b,0x0006b333,
0x02c,0x0000000d,
0x02a,0x00000005,
0x02b,0x00000709,
0x02b,0x00053333,
0x02c,0x0000000d,
0x02a,0x00000006,
0x02b,0x00000709,
0x02b,0x0005b333,
0x02c,0x0000000d,
0x02a,0x00000007,
0x02b,0x00000709,
0x02b,0x00063333,
0x02c,0x0000000d,
0x02a,0x00000008,
0x02b,0x00000709,
0x02b,0x0006b333,
0x02c,0x0000000d,
0x02a,0x00000009,
0x02b,0x0000060a,
0x02b,0x00053333,
0x02c,0x0000000d,
0x02a,0x0000000a,
0x02b,0x0000060a,
0x02b,0x0005b333,
0x02c,0x0000000d,
0x02a,0x0000000b,
0x02b,0x0000060a,
0x02b,0x00063333,
0x02c,0x0000000d,
0x02a,0x0000000c,
0x02b,0x0000060a,
0x02b,0x0006b333,
0x02c,0x0000000d,
0x02a,0x0000000d,
0x02b,0x0000050b,
0x02b,0x00053333,
0x02c,0x0000000d,
0x02a,0x0000000e,
0x02b,0x0000050b,
0x02b,0x00066623,
0x02c,0x0000001a,
0x02a,0x000e4000,
0x030,0x00020000,
0x031,0x000b9631,
0x032,0x0000130d,
0x033,0x00000187,
0x013,0x00019e6c,
0x013,0x00015e94,
0x000,0x00010159,
0x018,0x0000f401,
0x0fe,0x00000000,
0x01e,0x0003105b,
0x0fe,0x00000000,
0x000,0x00030159,
0x010,0x0004000f,
0x011,0x000203f9,
};

u32 Rtl8192SURadioB_Array[RadioB_ArrayLength] = {
0x000,0x00030159,
0x001,0x00001041,
0x002,0x00011000,
0x005,0x00080fc0,
0x007,0x000fc803,
0x013,0x00017cb0,
0x013,0x00011cc0,
0x013,0x0000dc60,
0x013,0x00008c60,
0x013,0x00004450,
0x013,0x00000020,
};

u32 Rtl8192SURadioA_to1T_Array[RadioA_to1T_ArrayLength] = {
0x000,0x00000000,
};

u32 Rtl8192SURadioA_to2T_Array[RadioA_to2T_ArrayLength] = {
0x000,0x00000000,
};

u32 Rtl8192SURadioB_GM_Array[RadioB_GM_ArrayLength] = {
0x000,0x00030159,
0x001,0x00001041,
0x002,0x00011000,
0x005,0x00080fc0,
0x007,0x000fc803,
0x013,0x0000bef0,
0x013,0x00007e90,
0x013,0x00003e30,
};

u32 Rtl8192SUMAC_2T_Array[MAC_2T_ArrayLength] = {
0x020,0x00000035,
0x048,0x0000000e,
0x049,0x000000f0,
0x04a,0x00000077,
0x04b,0x00000083,
0x0b5,0x00000021,
0x0dc,0x000000ff,
0x0dd,0x000000ff,
0x0de,0x000000ff,
0x0df,0x000000ff,
0x116,0x00000000,
0x117,0x00000000,
0x118,0x00000000,
0x119,0x00000000,
0x11a,0x00000000,
0x11b,0x00000000,
0x11c,0x00000000,
0x11d,0x00000000,
0x160,0x0000000b,
0x161,0x0000000b,
0x162,0x0000000b,
0x163,0x0000000b,
0x164,0x0000000b,
0x165,0x0000000b,
0x166,0x0000000b,
0x167,0x0000000b,
0x168,0x0000000b,
0x169,0x0000000b,
0x16a,0x0000000b,
0x16b,0x0000000b,
0x16c,0x0000000b,
0x16d,0x0000000b,
0x16e,0x0000000b,
0x16f,0x0000000b,
0x170,0x0000000b,
0x171,0x0000000b,
0x172,0x0000000b,
0x173,0x0000000b,
0x174,0x0000000b,
0x175,0x0000000b,
0x176,0x0000000b,
0x177,0x0000000b,
0x178,0x0000000b,
0x179,0x0000000b,
0x17a,0x0000000b,
0x17b,0x0000000b,
0x17c,0x0000000b,
0x17d,0x0000000b,
0x17e,0x0000000b,
0x17f,0x0000000b,
0x236,0x0000000c,
0x503,0x00000022,
0x560,0x00000009,
};

u32 Rtl8192SUMACPHY_Array_PG[MACPHY_Array_PGLength] = {
0x0, };

u32 Rtl8192SUAGCTAB_Array[AGCTAB_ArrayLength] = {
0xc78,0x7f000001,
0xc78,0x7f010001,
0xc78,0x7e020001,
0xc78,0x7d030001,
0xc78,0x7c040001,
0xc78,0x7b050001,
0xc78,0x7a060001,
0xc78,0x79070001,
0xc78,0x78080001,
0xc78,0x77090001,
0xc78,0x760a0001,
0xc78,0x750b0001,
0xc78,0x740c0001,
0xc78,0x730d0001,
0xc78,0x720e0001,
0xc78,0x710f0001,
0xc78,0x70100001,
0xc78,0x6f110001,
0xc78,0x6f120001,
0xc78,0x6e130001,
0xc78,0x6d140001,
0xc78,0x6d150001,
0xc78,0x6c160001,
0xc78,0x6b170001,
0xc78,0x6a180001,
0xc78,0x6a190001,
0xc78,0x691a0001,
0xc78,0x681b0001,
0xc78,0x671c0001,
0xc78,0x661d0001,
0xc78,0x651e0001,
0xc78,0x641f0001,
0xc78,0x63200001,
0xc78,0x4c210001,
0xc78,0x4b220001,
0xc78,0x4a230001,
0xc78,0x49240001,
0xc78,0x48250001,
0xc78,0x47260001,
0xc78,0x46270001,
0xc78,0x45280001,
0xc78,0x44290001,
0xc78,0x2c2a0001,
0xc78,0x2b2b0001,
0xc78,0x2a2c0001,
0xc78,0x292d0001,
0xc78,0x282e0001,
0xc78,0x272f0001,
0xc78,0x26300001,
0xc78,0x25310001,
0xc78,0x24320001,
0xc78,0x23330001,
0xc78,0x22340001,
0xc78,0x09350001,
0xc78,0x08360001,
0xc78,0x07370001,
0xc78,0x06380001,
0xc78,0x05390001,
0xc78,0x043a0001,
0xc78,0x033b0001,
0xc78,0x023c0001,
0xc78,0x013d0001,
0xc78,0x003e0001,
0xc78,0x003f0001,
0xc78,0x7f400001,
0xc78,0x7f410001,
0xc78,0x7e420001,
0xc78,0x7d430001,
0xc78,0x7c440001,
0xc78,0x7b450001,
0xc78,0x7a460001,
0xc78,0x79470001,
0xc78,0x78480001,
0xc78,0x77490001,
0xc78,0x764a0001,
0xc78,0x754b0001,
0xc78,0x744c0001,
0xc78,0x734d0001,
0xc78,0x724e0001,
0xc78,0x714f0001,
0xc78,0x70500001,
0xc78,0x6f510001,
0xc78,0x6f520001,
0xc78,0x6e530001,
0xc78,0x6d540001,
0xc78,0x6d550001,
0xc78,0x6c560001,
0xc78,0x6b570001,
0xc78,0x6a580001,
0xc78,0x6a590001,
0xc78,0x695a0001,
0xc78,0x685b0001,
0xc78,0x675c0001,
0xc78,0x665d0001,
0xc78,0x655e0001,
0xc78,0x645f0001,
0xc78,0x63600001,
0xc78,0x4c610001,
0xc78,0x4b620001,
0xc78,0x4a630001,
0xc78,0x49640001,
0xc78,0x48650001,
0xc78,0x47660001,
0xc78,0x46670001,
0xc78,0x45680001,
0xc78,0x44690001,
0xc78,0x2c6a0001,
0xc78,0x2b6b0001,
0xc78,0x2a6c0001,
0xc78,0x296d0001,
0xc78,0x286e0001,
0xc78,0x276f0001,
0xc78,0x26700001,
0xc78,0x25710001,
0xc78,0x24720001,
0xc78,0x23730001,
0xc78,0x22740001,
0xc78,0x09750001,
0xc78,0x08760001,
0xc78,0x07770001,
0xc78,0x06780001,
0xc78,0x05790001,
0xc78,0x047a0001,
0xc78,0x037b0001,
0xc78,0x027c0001,
0xc78,0x017d0001,
0xc78,0x007e0001,
0xc78,0x007f0001,
0xc78,0x3000001e,
0xc78,0x3001001e,
0xc78,0x3002001e,
0xc78,0x3003001e,
0xc78,0x3004001e,
0xc78,0x3405001e,
0xc78,0x3806001e,
0xc78,0x3e07001e,
0xc78,0x3e08001e,
0xc78,0x4409001e,
0xc78,0x460a001e,
0xc78,0x480b001e,
0xc78,0x480c001e,
0xc78,0x4e0d001e,
0xc78,0x560e001e,
0xc78,0x5a0f001e,
0xc78,0x5e10001e,
0xc78,0x6211001e,
0xc78,0x6c12001e,
0xc78,0x7213001e,
0xc78,0x7214001e,
0xc78,0x7215001e,
0xc78,0x7216001e,
0xc78,0x7217001e,
0xc78,0x7218001e,
0xc78,0x7219001e,
0xc78,0x721a001e,
0xc78,0x721b001e,
0xc78,0x721c001e,
0xc78,0x721d001e,
0xc78,0x721e001e,
0xc78,0x721f001e,
};
