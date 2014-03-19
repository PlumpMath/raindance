// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_20_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_20_usascii'.
//
/* // Example usage:

static stb_fontchar fontdata[STB_SOMEFONT_NUM_CHARS];

static void init(void)
{
    // optionally replace both STB_SOMEFONT_BITMAP_HEIGHT with STB_SOMEFONT_BITMAP_HEIGHT_POW2
    static unsigned char fontpixels[STB_SOMEFONT_BITMAP_HEIGHT][STB_SOMEFONT_BITMAP_WIDTH];
    STB_SOMEFONT_CREATE(fontdata, fontpixels, STB_SOMEFONT_BITMAP_HEIGHT);
    ... create texture ...
    // for best results rendering 1:1 pixels texels, use nearest-neighbor sampling
    // if allowed to scale up, use bilerp
}

// This function positions characters on integer coordinates, and assumes 1:1 texels to pixels
// Appropriate if nearest-neighbor sampling is used
static void draw_string_integer(int x, int y, char *str) // draw with top-left point x,y
{
    ... use texture ...
    ... turn on alpha blending and gamma-correct alpha blending ...
    glBegin(GL_QUADS);
    while (*str) {
        int char_codepoint = *str++;
        stb_fontchar *cd = &fontdata[char_codepoint - STB_SOMEFONT_FIRST_CHAR];
        glTexCoord2f(cd->s0, cd->t0); glVertex2i(x + cd->x0, y + cd->y0);
        glTexCoord2f(cd->s1, cd->t0); glVertex2i(x + cd->x1, y + cd->y0);
        glTexCoord2f(cd->s1, cd->t1); glVertex2i(x + cd->x1, y + cd->y1);
        glTexCoord2f(cd->s0, cd->t1); glVertex2i(x + cd->x0, y + cd->y1);
        // if bilerping, in D3D9 you'll need a half-pixel offset here for 1:1 to behave correct
        x += cd->advance_int;
    }
    glEnd();
}

// This function positions characters on float coordinates, and doesn't require 1:1 texels to pixels
// Appropriate if bilinear filtering is used
static void draw_string_float(float x, float y, char *str) // draw with top-left point x,y
{
    ... use texture ...
    ... turn on alpha blending and gamma-correct alpha blending ...
    glBegin(GL_QUADS);
    while (*str) {
        int char_codepoint = *str++;
        stb_fontchar *cd = &fontdata[char_codepoint - STB_SOMEFONT_FIRST_CHAR];
        glTexCoord2f(cd->s0f, cd->t0f); glVertex2f(x + cd->x0f, y + cd->y0f);
        glTexCoord2f(cd->s1f, cd->t0f); glVertex2f(x + cd->x1f, y + cd->y0f);
        glTexCoord2f(cd->s1f, cd->t1f); glVertex2f(x + cd->x1f, y + cd->y1f);
        glTexCoord2f(cd->s0f, cd->t1f); glVertex2f(x + cd->x0f, y + cd->y1f);
        // if bilerping, in D3D9 you'll need a half-pixel offset here for 1:1 to behave correct
        x += cd->advance;
    }
    glEnd();
}
*/

#ifndef STB_FONTCHAR__TYPEDEF
#define STB_FONTCHAR__TYPEDEF
typedef struct
{
    // coordinates if using integer positioning
    float s0,t0,s1,t1;
    signed short x0,y0,x1,y1;
    int   advance_int;
    // coordinates if using floating positioning
    float s0f,t0f,s1f,t1f;
    float x0f,y0f,x1f,y1f;
    float advance;
} stb_fontchar;
#endif

#define STB_FONT_times_20_usascii_BITMAP_WIDTH         256
#define STB_FONT_times_20_usascii_BITMAP_HEIGHT         60
#define STB_FONT_times_20_usascii_BITMAP_HEIGHT_POW2    64

#define STB_FONT_times_20_usascii_FIRST_CHAR            32
#define STB_FONT_times_20_usascii_NUM_CHARS             95

#define STB_FONT_times_20_usascii_LINE_SPACING          13

static unsigned int stb__times_20_usascii_pixels[]={
    0x0a804401,0xb80c0110,0x00133310,0x20003751,0x04ccc401,0x000c0048,
    0x00100110,0x08010081,0x30000200,0x02000510,0x02800401,0x00400a02,
    0x9805c408,0x01b80c83,0x25f10191,0x7103eaa8,0x00ee6157,0x07b6fb66,
    0x9702abae,0x3a603bdb,0x6e81dcbe,0x40f6554c,0x3201dbd9,0x077b5160,
    0x2fa60162,0x2f22002d,0x3002fdc1,0x0b7b97b9,0x480397b7,0x320cffc8,
    0x37736e00,0x1e55dc1d,0x0641c816,0x202c40ea,0x1b107b00,0x5d701c40,
    0x82dc3f98,0x2e0ee94b,0x3e1fc42e,0x3a1b62c7,0xb1601f11,0x1903f1f8,
    0x01a23d00,0x0bb0075c,0x1f20be60,0xa80fccb5,0x27d455c2,0xf31a6053,
    0xa87a2cc3,0x40c8b704,0x0005b03d,0x400360f6,0xf702f983,0x93e82dc3,
    0x205f30e2,0xf89ba1fb,0x46c87ea2,0x31ccb04d,0x0551361f,0x01a61f30,
    0x0bb003ea,0x23409f30,0x8482ec3d,0x6c1636c0,0x91321b84,0x45d81f89,
    0x3cc2740c,0x21ec0440,0x2152981d,0x3e207e83,0x477416e6,0xf80fd024,
    0x5c371766,0x1f913a0f,0x32672a62,0x9361f30b,0x27f30048,0x01fc402d,
    0xfb008ae4,0x2f885401,0xc80483dc,0x0fec0643,0x3a0fb862,0x226c26c1,
    0x2ec2e40c,0x7b05f910,0xfc96c24c,0x037c4330,0xa82dc3fe,0x0df104ef,
    0x80990fe8,0x3ee1fc4e,0xd559b531,0x0fc3e235,0x6f7c0019,0xfc859951,
    0x2b720298,0x03fc0dff,0x1fb89f10,0x21220154,0x03ffa829,0x20b27fa2,
    0x0643b86c,0x3013e0f2,0x15c7b05f,0x8e26c8b2,0x8ff405f9,0x0ffe605b,
    0x3fb017e6,0x4c69812e,0x3217d43f,0x92b2a160,0x3fa2002a,0x5f7417c2,
    0x2ec82fea,0x02fc4bf5,0x90f71b60,0x581eeb80,0x205dff50,0x0f704fe8,
    0x0640c891,0x5f100fe2,0xd706c7b0,0xf98664e8,0x5b8fec05,0x2627fc40,
    0xa8fec05f,0x5f303203,0x912c1fb8,0x65491040,0xff9d980c,0xd13e0b30,
    0x27c8b90d,0x7d4005f9,0x0485ea9d,0x3207fdc4,0x0bffb100,0xf707fd91,
    0x98646e03,0x8807f303,0xf1a3d82f,0x8870fc43,0xb737406f,0x449f9900,
    0x987f406f,0x0fe05102,0x2baa61f7,0x6c01adba,0xd71a6f30,0x880cafdc,
    0x3207e43f,0x0df17d45,0x7f157100,0x5f3002a8,0x7f4c0398,0x17ec3a64,
    0xc86a03ee,0x0fe20e60,0x47b05f10,0x48f91e65,0x727c07e8,0xd1f2900b,
    0x0626f80f,0x645d804c,0x32672a27,0xb86e009a,0x22743f16,0x0fe02cfe,
    0x4c5c81f5,0x0003f21f,0x00241fb8,0x105160ba,0x176264fd,0x0c8950f9,
    0x20274164,0x963d82f8,0x0b976a6b,0x3f502fa8,0x552382dc,0xfa81fd46,
    0x35c01001,0x02455176,0x2f9b2244,0x1ff88bf3,0x86a8bb04,0x3ea3dc5c,
    0x74402604,0x83400481,0xb364160c,0x436c6a87,0x1720644d,0x05f10176,
    0xbfa8dc7b,0x06574c9b,0x85d307ae,0x3ca4d05b,0x1f441ec8,0x8815c0aa,
    0x0c81d10f,0x5ea16016,0xb717f479,0x4c1715ff,0x1b20f61f,0x307f905b,
    0x2a0ba203,0x20950a02,0x8ba13639,0x0ba15c6a,0x5d819176,0x17c406a8,
    0x5dc731ec,0x82417930,0x80ddbdea,0x7b7db05b,0x65775407,0xbf06e81d,
    0x40e5ecc0,0x03701225,0xfd512e7a,0x3ffe65dd,0x03caca83,0x40597bd3,
    0x82ccdfeb,0x40901ba9,0x403dcff8,0x36f37725,0x43aaca83,0x0c8d9069,
    0x201d8274,0x643d80f8,0x9002e000,0x016e03ff,0x04c40093,0x40020110,
    0x18010200,0x08806a20,0x20010010,0x00620008,0x11001003,0x02608200,
    0xb80e4020,0x40ee0643,0x6c1a2058,0x1b800c83,0x701ff500,0x0000300b,
    0x00000000,0x00000000,0x00000000,0x00000000,0x57000000,0x103206c0,
    0x1911540b,0x1f4cc493,0x65cc0ac8,0x175c4001,0x000267ae,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x7028804c,0x8c402601,
    0x664c1dd8,0x2f2a202c,0x980001cd,0x2399950a,0xddddddd8,0x000000dd,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00530000,0x1b980062,0x00388060,0x1c404000,0x13fff200,0x80182017,
    0xefea8308,0x4c3bff71,0x7ffd52fd,0x36a5ff70,0x3ee20bff,0x01a8082e,
    0x00801802,0x22efeb88,0x0ffffffa,0x7105fd71,0x3ff665bf,0x2e002dde,
    0x2f32205f,0x3900ddeb,0xd9bc89f5,0x80ff53ee,0x0be61ffa,0x03f545c8,
    0x41999b10,0x4ef5c2f8,0xaba81dff,0x44f985ed,0x443b82fb,0xf30b606f,
    0x3ee0ec09,0x910bf622,0x2fa83bff,0x5f700340,0x6baabcd8,0x1b01ff88,
    0x13ee5f88,0x5d105d80,0x4b503f30,0x1fa9ea2a,0x07dc03e4,0x42fd40b1,
    0x0032007c,0x7d4fb601,0x417a2dc5,0x6c27c46e,0x0d00fd80,0x306407f1,
    0x42f885f7,0x446fb9bb,0x00bea00b,0x70510fdc,0x203bfa07,0x7f45f80d,
    0xd10bb000,0x2e40dc09,0x21fc4db0,0x23f8807b,0x0b9b101b,0x33e200f7,
    0x6c6c8002,0x0bb0be27,0xb0fd07ee,0x0ea0fe60,0x40c80fe2,0x217c42f8,
    0x20017d43,0x3f7005fd,0x2b601d00,0x5f80c85f,0x23100fe4,0x401fc85d,
    0x3f205d81,0x27b81f10,0x2059ee01,0x07b85c8d,0x01bffd70,0xfb8b9011,
    0x05d81f32,0x17fc49f1,0x6c3f4055,0x3203f880,0x3e217c40,0x0017c402,
    0x7001f993,0x2068803f,0x80c89f75,0x99037c5f,0x0ff0bf95,0x3ceec880,
    0x84c8ce88,0x80fed8fb,0x57039bf8,0xfa9ee172,0x4bf9100b,0x45c82fc8,
    0xd85f51f9,0xfab9ba05,0x2fa80364,0x01fc4122,0x442f8819,0x007cc02f,
    0x009f11b0,0x03b803f7,0x0322fd96,0x81fe457e,0x3e22fc6a,0x85999505,
    0x014dc05d,0xc81fc5f7,0x324880de,0x01b17b85,0x2f983ea0,0xf07dc6c8,
    0x3ee05d89,0x02c5f6b1,0x2203937c,0xf103203f,0x6402f885,0x7d962004,
    0x7401fb80,0x23fd1601,0xacbef80c,0x8bb0f600,0x13ee06f9,0x99db8176,
    0x2747b809,0xc8b05f88,0x00d8fb85,0x05f11f40,0x7ec4d8f9,0x2205ea8b,
    0x55f548cf,0x163f9005,0x03603f88,0x02f885f1,0x5c064c34,0xf700bea1,
    0x16034403,0xf0191ff1,0xb07e200b,0x2607f88b,0x2a05d83f,0x20dfffff,
    0x3b02ec7b,0xdb555970,0x02f7dc15,0x05f11e40,0x107759f9,0x80bb5ffb,
    0x177e1bfd,0x01d6fc40,0x442c09f1,0x9017c42f,0x9d0bf903,0xb80df999,
    0xb00ee00f,0xf01bdf30,0xb0fe600b,0x2603fd0b,0x2a05d83f,0x5c795311,
    0x20b02ec7,0xeffeeeec,0x00fe7ee2,0x417c41d0,0x6c10035c,0x3237d405,
    0x1bf6005f,0x88581ba0,0xb817c42f,0x05512202,0x03dc03f7,0x2e0b007a,
    0x005f80ff,0xf50bb17e,0x360fe60b,0x8660d105,0x3a82ec7b,0x5ee17200,
    0x5c3702fb,0x2e417c43,0x4405d800,0x0017cc4f,0x5f5009f3,0x85f103b0,
    0x082a82f8,0x3e20b0aa,0x205bb544,0x32078068,0x2006f80f,0x20dd12fc,
    0x83f984fb,0x37bf306d,0x6c7c8775,0x00177a65,0x7ecf70b9,0x82defe81,
    0x006d82f8,0x03b00bb0,0x003d000d,0x0b7737aa,0x0be217c4,0x4b5555b5,
    0xfb025419,0x0066fd43,0x67e4c077,0x7ecc1b01,0xfc8800bf,0xb303edce,
    0x419d757d,0x981bffb8,0x74c2cedb,0x12ffa8bf,0x5c80019b,0x7dc5ff54,
    0x9100883f,0x16ed43bf,0x00b76a00,0x02000201,0x32600c00,0x3bf912df,
    0x3fffffea,0x20bbea04,0x0222effa,0x20000220,0x84400000,0x00262000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x80b3ff26,0xd50bffc9,0x6fd983bf,
    0xb31dfe80,0x019dbdff,0x777777dc,0x9df930ff,0x3263fdb9,0x4fdcccef,
    0x37bbff66,0x260a00bd,0x2ddddffd,0xefeeefa8,0xff933fee,0x33fee217,
    0x417ffd51,0xfb32efc8,0x6fecc5ff,0x039ff931,0x0c000840,0x80226000,
    0x37c00001,0x2e88bf00,0xa80bfe20,0x32fc40ff,0x207201df,0xc85f82fc,
    0x22442fc1,0x0fec45f8,0x45f88344,0xf51545fa,0x417e1d45,0x80ff887d,
    0x90df706a,0xa801fa07,0x5005b53d,0x98bfea5f,0x1766ea2f,0xfa8baeaa,
    0x30dfc88e,0xf002f49f,0xfe801d8b,0x7c1f7606,0x82817e45,0x10bf04fa,
    0xf0305e81,0xdb07f60b,0x0fe42fc0,0x2142fa85,0x2a0fb05f,0x3200d84f,
    0x6e81262f,0xa81edc40,0x417100bd,0x8d1220fa,0xc8f71645,0xbd121fc6,
    0x03b2fc00,0x2607ef60,0xb8bf07dc,0x1df1003f,0x3a0117e0,0x20bf0085,
    0x33fae5f9,0x2fb85f83,0xbf00bea0,0x1fd81f60,0x23fa00ea,0x88374058,
    0x9b3002dc,0x0b93e003,0x3e2086fc,0x262fdccc,0x41a9b61f,0x237e005e,
    0x3e36001d,0xf07d8d85,0xb000fe8b,0x122fc03f,0x5f8242f4,0x40d71fa0,
    0x200fe85f,0x82fc02fa,0x45be207d,0x1bbf3005,0x66cc6e80,0x3b910001,
    0x2a127c80,0x007cc3ff,0x92fc8a74,0x6fc00bd0,0xfcac004e,0xf83ed221,
    0x001deb9d,0xcef809f5,0x99dd05dc,0x817e09d9,0xf81ae1fd,0x00decbbe,
    0x3be017d4,0x07eaaaaa,0x000e5fdc,0x8dd009f7,0x10001cd9,0xaf8805b7,
    0x4dfb1029,0x97b802f8,0xbd071bb1,0x1feefc00,0xc93e2b00,0x2bbe0fb1,
    0x1be2006e,0x126677e0,0x209512f4,0xb87f605f,0x2a677e06,0x3ea00cfc,
    0x4ccefc02,0xfd807d99,0x07fd4004,0x6e441ba0,0x03993002,0x144276c0,
    0x262f43f7,0xfa9dfc41,0x2005e80c,0x2007fb5f,0xd9623f25,0x13e6bf07,
    0x7c00fec0,0x285e8145,0x07f40bf0,0x5c2fc0d7,0x00bea03f,0x201f60bf,
    0x326001fa,0x037405f9,0x2a02f6e2,0x019100cd,0xf8d107f3,0x12abbee0,
    0x20bf07ec,0x4bf0205e,0x265803fd,0x41f61bcf,0x700bee5f,0x0bf0207f,
    0x5f8017a0,0x06b8df10,0x81fe217e,0x82fc02fa,0x01fa807d,0x01fdcb10,
    0x9ed400dd,0x2fa802da,0x5bf101d0,0x19ff7077,0x20591260,0x5f85105e,
    0xb16027ec,0xbf07d8bf,0xbf300fd8,0x00bf0a20,0x3e14417a,0xfb83fb05,
    0xf985f818,0xf00bea06,0x2a01f60b,0xe81b001f,0x000dd01f,0x40100021,
    0x00801800,0x0df00408,0x42fc41b1,0x98d105fe,0x7c07ec2f,0x74077c46,
    0x7c43b00f,0x360df005,0x3f622fc0,0xf81ff882,0x5017ec45,0x82fc407f,
    0x02fb807e,0x0ef982d8,0x000006f8,0x00000000,0xff930000,0x4cbfdddd,
    0xfb30bffc,0x3f6617df,0xffb8960b,0x17ffb31c,0xfc85f7d4,0x7feeeeef,
    0x402fff66,0xdccdffc9,0x3bff665e,0x4000bdcc,0xeeceffd9,0x3bfae01d,
    0x0bffc983,0x2039ff71,0xd502efeb,0x7fe4419f,0x37ff932e,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000260,0x30060053,0x4c300003,
    0x111804c0,0x00004c30,0x40814004,0x6dc97020,0x4ddddddd,0x82deb833,
    0x6eec4932,0x0000000d,0x00000000,0xc8000000,0x37545eab,0x029809f5,
    0x2a1f55d4,0x3a60fcad,0x7545f54f,0xe99ffd9f,0x2bfaa0ff,0x3a7baa7f,
    0x6667c0ff,0x406983fd,0xd97c40f8,0x02fe8f76,0x2331fa80,0x91cadeb8,
    0x3333221f,0x00000000,0x00000000,0x25c00000,0x4e8d913e,0x497014c0,
    0x3f8ba0fc,0xc81caf44,0x7c4bba2f,0x21457e44,0x24f88bfc,0x6c17a228,
    0x8e8dc82b,0x5b65f14d,0x00a620fb,0x53009dc0,0x00000081,0x00000000,
    0x00000000,0x91f617c0,0x14c04e8d,0x854183d0,0x3cf984f8,0x6c6c8f70,
    0x8d903dc5,0x203f605e,0xdc881b2b,0x647e0cdd,0x2e170f54,0xdddddddd,
    0x00000144,0x00000000,0x00000000,0x0fcc0000,0x746c87ee,0x665554c4,
    0x01f32aaa,0x209d7730,0xc8f700fc,0x81ee2ec6,0xfb82ec6b,0x21265881,
    0x5342cdca,0x00151627,0x00000000,0x00000000,0x00000000,0x87f30000,
    0x9d1b21f9,0xaccaaa98,0x805f32aa,0x76413a5b,0x46c8f705,0xd703dc5d,
    0x03f985d8,0x3f20c819,0x98e4f9d9,0x000000e1,0x00000000,0x00000000,
    0x00000000,0x23dc5e80,0x2602746c,0x21317a02,0x2e13a1f9,0x47b83f99,
    0x1ee2ec6c,0x222ec6b8,0x8839845e,0x223e2225,0x00000000,0x00000000,
    0x00000000,0x00000000,0x361fc800,0x5ea8fdc3,0xdf9014c0,0xa9fcc773,
    0xfc8ea1cf,0xb1b23dc1,0x1f207b8b,0x9c0fd8bb,0x00640200,0x00000000,
    0x00000000,0x00000000,0x00000000,0x20f33f20,0x3ee9efe8,0xfb880a60,
    0x4f7ec0cf,0x647f51ec,0x17fd32ef,0xff517fd5,0x5033faa5,0x5ff517fd,
    0x3b333bee,0x00000003,0x00000000,0x00000000,0x00000000,0x00000000,
    0x40043003,0x04010029,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__times_20_usascii_x[95]={ 0,2,1,0,0,0,0,0,0,0,1,0,0,0,
1,0,0,2,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,-1,1,0,-1,0,0,0,0,0,0,0,
-2,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,2,1,1,0, };
static signed short stb__times_20_usascii_y[95]={ 16,3,3,3,3,3,3,3,3,3,3,5,14,11,
14,3,3,3,3,3,3,4,3,4,3,3,7,7,5,8,5,3,3,3,4,3,4,4,4,3,4,4,4,4,
4,4,4,3,4,3,4,3,4,4,4,4,4,4,4,3,3,3,3,19,3,7,3,7,3,7,3,7,3,3,
3,3,3,7,7,7,7,7,7,7,5,7,7,7,7,7,7,3,3,3,10, };
static unsigned short stb__times_20_usascii_w[95]={ 0,3,6,9,9,15,14,3,6,6,7,10,4,6,
3,6,9,5,9,8,9,8,9,9,7,9,3,3,10,10,10,8,17,13,12,12,13,11,10,13,13,6,7,14,
11,16,14,13,10,13,13,9,11,13,13,17,13,13,11,5,6,5,9,11,3,8,10,8,10,8,8,9,9,5,
6,10,5,14,9,9,10,10,7,7,6,10,9,13,9,9,8,6,2,6,10, };
static unsigned short stb__times_20_usascii_h[95]={ 0,14,6,14,15,14,14,6,17,17,8,10,6,2,
3,14,14,13,13,14,13,13,14,13,14,14,10,13,10,4,10,14,17,13,12,14,12,12,12,14,12,12,13,12,
12,12,13,14,12,17,12,14,12,13,13,13,12,12,12,17,14,17,8,1,4,10,14,10,14,10,13,13,13,13,
17,13,13,9,9,10,13,13,9,10,12,10,10,10,9,13,9,17,17,17,3, };
static unsigned short stb__times_20_usascii_s[95]={ 93,107,125,130,83,140,156,121,25,1,113,
22,132,167,163,215,120,169,181,222,65,86,171,217,248,205,211,191,189,137,200,
111,45,195,115,192,94,82,71,12,140,182,209,13,1,28,227,93,242,63,45,
238,128,155,141,123,168,154,59,77,231,39,103,83,148,42,181,33,1,233,26,
35,45,95,32,75,175,61,84,1,101,112,76,225,108,11,215,242,51,55,94,
18,15,8,152, };
static unsigned short stb__times_20_usascii_t[95]={ 16,1,47,1,1,1,1,47,1,1,47,
47,47,47,47,1,1,19,19,1,19,19,1,19,1,1,34,19,34,47,34,
1,1,19,34,1,34,34,34,19,34,34,19,34,34,34,19,1,19,1,34,
1,34,19,19,19,34,34,34,1,1,1,47,17,47,47,1,47,19,34,19,
19,19,19,1,19,19,47,47,47,19,19,47,34,34,47,34,34,47,19,47,
1,1,1,47, };
static unsigned short stb__times_20_usascii_a[95]={ 72,96,118,144,144,241,225,52,
96,96,144,163,72,96,72,80,144,144,144,144,144,144,144,144,
144,144,80,80,163,163,163,128,266,209,193,193,209,177,161,209,
209,96,112,209,177,257,209,209,161,209,193,161,177,209,209,273,
209,209,177,96,80,96,136,144,96,128,144,128,144,128,96,144,
144,80,80,144,80,225,144,144,144,144,96,112,80,144,144,209,
144,144,128,139,58,139,156, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_20_usascii_BITMAP_HEIGHT or STB_FONT_times_20_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_20_usascii(stb_fontchar font[STB_FONT_times_20_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_times_20_usascii_BITMAP_HEIGHT][STB_FONT_times_20_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_20_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_20_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_20_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_20_usascii_BITMAP_WIDTH-1; ++i) {
                unsigned int value;
                if (numbits==0) bitpack = *bits++, numbits=32;
                value = bitpack & 1;
                bitpack >>= 1, --numbits;
                if (value) {
                    if (numbits < 3) bitpack = *bits++, numbits = 32;
                    data[j][i] = (bitpack & 7) * 0x20 + 0x1f;
                    bitpack >>= 3, numbits -= 3;
                } else {
                    data[j][i] = 0;
                }
            }
        }
    }

    // build font description
    if (font != 0) {
        float recip_width = 1.0f / STB_FONT_times_20_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_20_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_20_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__times_20_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__times_20_usascii_s[i] + stb__times_20_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__times_20_usascii_t[i] + stb__times_20_usascii_h[i]) * recip_height;
            font[i].x0 = stb__times_20_usascii_x[i];
            font[i].y0 = stb__times_20_usascii_y[i];
            font[i].x1 = stb__times_20_usascii_x[i] + stb__times_20_usascii_w[i];
            font[i].y1 = stb__times_20_usascii_y[i] + stb__times_20_usascii_h[i];
            font[i].advance_int = (stb__times_20_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__times_20_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_20_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_20_usascii_s[i] + stb__times_20_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_20_usascii_t[i] + stb__times_20_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_20_usascii_x[i] - 0.5f;
            font[i].y0f = stb__times_20_usascii_y[i] - 0.5f;
            font[i].x1f = stb__times_20_usascii_x[i] + stb__times_20_usascii_w[i] + 0.5f;
            font[i].y1f = stb__times_20_usascii_y[i] + stb__times_20_usascii_h[i] + 0.5f;
            font[i].advance = stb__times_20_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_20_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_20_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_20_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_20_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_20_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_20_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_20_usascii_LINE_SPACING
#endif

