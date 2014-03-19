// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_15_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_15_latin1'.
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

#define STB_FONT_times_15_latin1_BITMAP_WIDTH         256
#define STB_FONT_times_15_latin1_BITMAP_HEIGHT         72
#define STB_FONT_times_15_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_times_15_latin1_FIRST_CHAR            32
#define STB_FONT_times_15_latin1_NUM_CHARS            224

#define STB_FONT_times_15_latin1_LINE_SPACING          10

static unsigned int stb__times_15_latin1_pixels[]={
    0x02200300,0x40220331,0x008c2000,0x40180660,0x88084400,0x20020099,
    0x05880118,0x26c01660,0xb8008c40,0x0088400d,0x0b3001c8,0x0501cac4,
    0x06200b30,0xfa830076,0x5f41e800,0xbea87702,0x9c5301db,0x22aa6038,
    0x26e38298,0x9cc80a24,0x4c2da987,0x701dbbbc,0x037007bd,0x26e006e0,
    0x1ef5c01b,0xf00e6a60,0x09100993,0x2a7006e0,0x016edd40,0x202a0037,
    0x3e071038,0x07414400,0x1f88b500,0x82a8e0c8,0x2670a029,0x001cc193,
    0x40e98b20,0x0026081c,0x1000800c,0x004c1004,0x00100082,0x00008004,
    0x060495a2,0x20101c40,0x0111f02c,0x88400e80,0x1e86c81f,0x21cc4b8e,
    0x4e188889,0x261b01e8,0x037622ee,0x0c417c59,0x0dd889f7,0x80ee5dcc,
    0x301dcbb9,0x2603b977,0x74c1dcbb,0x3037622e,0xe983b977,0x4c37622e,
    0x437622ee,0x7c4762fa,0x00dc0128,0x3665d571,0x1a1ecccf,0x2a2feaf8,
    0x8074762f,0x701f53e8,0xc8e1d81f,0x3a672243,0x03f91c50,0x14c26477,
    0x001f9964,0x542987f7,0x1aa0fc46,0x446a83f1,0x3e23541f,0x214c2641,
    0x320fc46a,0x42642984,0xc891ec29,0x204f803f,0x1ae3ab9b,0x1f81e231,
    0xe923d8d7,0x83dcf200,0x98e241f9,0x96a59243,0x0fcc5ca2,0x2984c96e,
    0x400f72c8,0x88a61fba,0x3e26c83f,0x0fe26c83,0xc83f89b2,0x114c2646,
    0x4c8d907f,0x4c264298,0xb81ab4c2,0x03eea03f,0x206b83b4,0x7c43e06a,
    0x1d0d5a61,0x81fa9e40,0x10e05c7b,0x772cce65,0x44a96062,0x0a61326a,
    0x8007ccb2,0x4530fb8a,0x50fa81fa,0x2a1f503f,0xf50fa81f,0x2641f503,
    0x503f514c,0x14c2641f,0x360a6132,0x413f204a,0x46be07d4,0x26389ae0,
    0x40e83e06,0x900744ad,0x1360fe27,0x985c3851,0x547e2772,0xa8713d80,
    0x20a61325,0x2040be2c,0xb8a6db0a,0x1ee3f307,0x307b8fcc,0x7cc1ee3f,
    0xb8a61321,0x2643f307,0x2613214c,0x2a02e982,0x0d529878,0x33ee19ba,
    0xf81e23dc,0x85d30b10,0x6b8f200e,0x70640f44,0x45e4e154,0xd1383379,
    0x323b8179,0x22c82984,0x2a04c0eb,0xfa8a77a0,0x3f50fa81,0x07ea1f50,
    0x40fd43ea,0x261320fa,0x3ea07ea2,0x90a61320,0x21605309,0x590b1519,
    0xff305f75,0x3a0c6b8b,0x03739f00,0x3c803a16,0x8065d75c,0xa43c8e1d,
    0x8a3792d9,0x87213a23,0x2c81a85b,0x4055e75c,0x88b7e20a,0x3e26b83f,
    0x0fe26b83,0xb83f89ae,0x10d42dc6,0x5b8d707f,0x542dc1a8,0x97d30701,
    0x2e438837,0x435c0454,0x047c0e60,0xc803a0e0,0x201fd882,0x4c4b8e0e,
    0x22705402,0x8798b0d0,0x03605904,0x217cc1b8,0x2e0f446b,0x1ae0f446,
    0x446b83d1,0x4243cc1e,0x260f446b,0x48798487,0x71005d44,0x83f30320,
    0x70e1ae03,0x2a201f01,0x9180e80b,0xb80f5c01,0x2980b8e1,0x399c1a88,
    0x77b70187,0x640b2039,0xb819b102,0x1dcbea82,0x03b97d50,0x40772faa,
    0x701dcbea,0x2a03977b,0xb701dcbe,0x36e03977,0x0ed41cbb,0x542fa800,
    0x6c4061ef,0x182dcabf,0x1da8174c,0x1bd85570,0x42605500,0x55440333,
    0x4cc701aa,0x40220020,0x02981ba9,0x00110000,0x00440022,0x01100088,
    0x04400220,0x00000880,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x04620136,
    0x01b00040,0x05c801b0,0x4197bdb1,0x4021102c,0x0806dc1d,0x40211011,
    0x01008058,0x80440408,0x0880c001,0x3300c098,0x00c02a20,0x30041026,
    0x02000440,0xd7006e6a,0x03a9807b,0x02a80398,0x7f41cd4c,0x824419cf,
    0x438879cc,0x93d039b8,0x40f3b709,0x20eb601a,0x59959504,0xfb83d905,
    0x885c8800,0x81c4b80e,0x464c0aa8,0xd102d81d,0x32057701,0x4c1db02e,
    0x2080b86b,0x40098200,0x000803a9,0x7c041001,0x00819cff,0x00410100,
    0xa8040000,0x5b80b8d4,0x1c660fcc,0x85a8007c,0x0150e01a,0x254b20ee,
    0x73015038,0x20e5103b,0x4c38288a,0x5c006e02,0x26039001,0x51ecccfd,
    0x86f4c5ff,0x1ecccfd9,0x88673ffa,0x33f662fd,0x5fb11ecc,0x37017ec4,
    0xb80bf620,0x4c3a9701,0x6641f882,0x003e0106,0x10041662,0x3a022070,
    0x20110971,0x003a6008,0x87aa0220,0xf8027c04,0x5c09f004,0x83f30c46,
    0x10c46b85,0x7a8339fb,0xf50c46b8,0x04f80f50,0x209f01ea,0xfa81cd59,
    0xa83ea2e0,0xfd9f85b9,0x22ecd4c2,0x5cd45b9a,0x264ec1c5,0x27616e7a,
    0x2264ec4c,0x3e64fbaa,0x64ec5c88,0x40171a84,0x5d400fba,0x07dd400f,
    0x26c806b8,0x2006b81b,0x5c35419b,0x35435406,0x2a01f750,0x403eea06,
    0x86a170aa,0x0fcc6a7b,0x1f85d339,0x916a68d5,0x4ce45d33,0x34886a2e,
    0x25c89e8d,0x9a44d348,0x0f8f5346,0x269a44b5,0x04c511aa,0x75201f52,
    0x703ea403,0x5f441c4d,0x1c4d7038,0x86a83370,0x0d50e26b,0x03ea40d5,
    0x03ea40d5,0x25757298,0x3ea299fa,0x81333950,0x32cc7e0f,0x84cce54b,
    0x1c0999ca,0x447a3dd4,0x543dd40f,0x0f896a7b,0x5d42d43e,0x21e89207,
    0x94c0d529,0x354a606a,0x03dccfb8,0x67dc09f5,0x066e03dc,0xb99f70d5,
    0x06a86a87,0x3541aa53,0x700d5298,0xbf8ad474,0x08d535c3,0x335cd07c,
    0x3542354b,0x446c4702,0x223d0f47,0x2362788d,0x41f1aa78,0x46c4b50f,
    0x2e215078,0x3eeab21c,0x5f755902,0x0beeab20,0x1f4031ae,0x2e018d70,
    0x35c35419,0x0d50d506,0x20beeab2,0xf755906a,0x2a3a1c05,0x81d11ee4,
    0x30f8333f,0x46a8fc49,0x99fc333f,0xf35b8d41,0xadcd29e8,0x23cd6e79,
    0x71e8d10f,0x8879adcb,0x1c4f6b23,0xb90e2172,0xb85c8710,0x407b0086,
    0x3370086b,0x086b86a8,0x221aa1aa,0x43542e43,0x1982e438,0x9770e55c,
    0xfd501755,0x81759b09,0x2a1fcceb,0x27f544fe,0x5f5bf138,0x88ab67e6,
    0xbf12fadf,0x656545f5,0x8f5e7640,0x242fadf8,0xf98191c8,0x07e60641,
    0x5c1f9819,0x407d0386,0x3370386b,0x386b86a8,0x321aa1aa,0x1aa0fcc0,
    0x303f3032,0x00410260,0x02004008,0x01004010,0x20000000,0x20004200,
    0x0bea1008,0x0bea3df5,0x0bea3df5,0x3f623df5,0xfa82dcab,0xabfd881d,
    0x433702dc,0x3f622fd8,0xfb12dcab,0xf517ec45,0xb11efa85,0x2a17d45f,
    0x000001ef,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x44008000,0x00000400,0x4040200c,0x30000100,0x06008801,0x02002200,
    0x08018010,0x40000000,0x00010020,0xac809804,0xce980049,0x30101018,
    0x2a055555,0x3b959305,0x07fd51aa,0x85b95793,0x83b8383b,0x0577700b,
    0x00f404a8,0x88156447,0x206ea00e,0x41dbbbc9,0x757303eb,0x03b97730,
    0x9a817553,0x3090b84b,0x73055555,0x41ee2175,0x4289a84c,0x2e10f12d,
    0x2355540c,0x46aae63d,0x91a07028,0xf3389ea3,0x0ea074c1,0x3a819875,
    0x916881c4,0x014c0700,0x83a8ec15,0x4c0b601a,0x2510e40e,0xd50e680b,
    0x77341f88,0x2385f24c,0xa9988cc4,0x3c493342,0x96c04400,0x92c02078,
    0x5474a043,0x17c00315,0x4481aa31,0x43a8303e,0x20487503,0x0802b8f9,
    0x3c470040,0x04b800b3,0x020620be,0x83f883c4,0x2689666c,0x64c4ba38,
    0x324a0c99,0x3a8fc317,0x6c04c1e2,0x7896c4c9,0x2a1caba8,0x23a13004,
    0x447cca68,0x4c27e45c,0x0fcc1505,0x402e3a80,0xbf006a3a,0x57507723,
    0x1caba839,0x3c4d51c4,0xf8b911f3,0x00fcc2ba,0x220e55d4,0xf503f507,
    0x80f89e61,0x32b2e668,0x0855131b,0x221dfd45,0x26910707,0x447896c6,
    0x046a9ae6,0x2836fa28,0x7dc2d43e,0x3aa1222e,0xbb30f70e,0x55299541,
    0x04c712a8,0x20e43f6a,0x2689ae68,0x8d70546b,0x32d43e1f,0x3dcbb13f,
    0x4cd73440,0x83dc3cfc,0x3d4be1f9,0x0b8cc0c8,0x64280eca,0x1d43c43f,
    0x53d8f750,0x1f12d42f,0x9820997c,0xf143b1d0,0x7ec416a1,0xf33d80e2,
    0x99c09b03,0x744902c9,0x246f4b61,0x2a1f12d4,0x4c383e25,0x50f83e26,
    0x21f3354b,0x12d400f9,0x3f50781f,0x5e441f50,0xbc98505c,0x77131ada,
    0x2faab8a0,0x101f11e2,0xdfc8f11b,0x1f1aa4e9,0x97e1f754,0x311d11d2,
    0x20c5a87c,0x23a8065c,0x1704d83e,0x711a81b8,0xdf99e639,0xa87c6a80,
    0x783887c6,0x96a1f1e6,0x05f07c79,0xd03e3542,0x1ae0fe20,0x440881e8,
    0x2a09c99c,0x431371d8,0x54789aa6,0x79adc766,0x21f10064,0x38839868,
    0x1d4caae6,0x7162dc7a,0x54190047,0x14c26c1f,0xac8e20a6,0x7f43f53d,
    0x6887c431,0x153443e2,0x3d0ea3b0,0x1623d16e,0xf10981d7,0x1eb89a21,
    0x3a235c33,0x02205901,0x98cc1c52,0x9634388a,0x1b87c478,0x3c5f5bf1,
    0x4065ecc0,0x54c19868,0xcec82a9a,0x2eb3a1eb,0xcbf99aa4,0xdb9bd982,
    0x156cc481,0x9fb0e40e,0x987df719,0x5ecc0cbd,0x56c40e0c,0x1ebcec84,
    0x2e02a726,0x6cc0abce,0x3aaea0cb,0xdcbea85f,0x3602a981,0x30199c43,
    0x75055355,0x217dc353,0x16002aca,0x006a0080,0x80210020,0x20010100,
    0x98811009,0x88080c09,0x80100440,0x10040080,0x00100002,0x08801001,
    0x10800020,0x00200200,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xffffe800,
    0x1886bae0,0x06d26062,0x3f2162ea,0x0000104f,0x44088300,0x227dc3fd,
    0x40000dd8,0x10111008,0x4c026022,0x437622ee,0x0f641ffa,0x4477d431,
    0x987aa2fd,0x406201b4,0x74c01300,0x74c0018c,0x640cdbcf,0x9b9813a9,
    0x1e444599,0x9440e8d3,0xb8872983,0x00f88099,0xb17d406e,0x0dd12d43,
    0x30fee0f5,0x7f540985,0x554c3b84,0x7f57d45d,0x4c807ea2,0x543dc298,
    0x4d90fa22,0x510e20f9,0x52e4dc0e,0x3ea39d37,0x8065c201,0xec896e03,
    0x1eca62e0,0x00110550,0x01002051,0x00fc8079,0x123d813e,0x54298a87,
    0x4c3f7506,0x32883a22,0x2d4d005f,0x0f46b8fc,0xf0530990,0x4c3c8485,
    0x00b8fe0f,0x87413440,0x4100fc3c,0x85b80e00,0x9002085f,0x0c4c9d81,
    0x072aea04,0xfec8b735,0x500f8b83,0x55a601f7,0x6a808081,0x261f7150,
    0x2046fea2,0x9926084c,0x43f10f85,0x2613201e,0x20e25c82,0xbd13e83c,
    0x3223e624,0x91f834c5,0xfa811e87,0x40702fba,0x3a27c85b,0x29116003,
    0x47d11c69,0x3391ae68,0x4c3f305d,0x1f5201f2,0x3e8895b0,0x41aa0fa2,
    0xd0a6db0a,0x7d116c01,0x1f0b32dc,0x2f63d074,0x20a61320,0x790171f8,
    0x23e6ed70,0x4b50f828,0x6d40aec9,0x2ecae83a,0x32e5a97c,0xb70cccec,
    0x83ea399f,0x2075003c,0x791227ba,0x2a1f12d4,0x9700999c,0x25301f24,
    0x20ba606a,0x3541e43c,0x0a77a0a8,0x3216201d,0x42d47e23,0xb9e8b10f,
    0x02984c81,0x41e4129b,0x177d48f8,0xb316a1f0,0x2a5d0120,0x70598745,
    0x23642dc0,0x0640223c,0x599e2362,0x0f8d51e4,0x293008d5,0x40bfaabc,
    0x202fbaac,0x83c87905,0x7c41506a,0x0b80742d,0x5efdc3c8,0x41b9cf85,
    0x50b703de,0x406be603,0x2e59b03c,0x16a1f04e,0x3bbfa0b3,0x745a8f44,
    0xb80e0b30,0xb1e43e85,0x4d6e1607,0x44791aa7,0x33f8d10f,0x32e17043,
    0x0e20cfcc,0x3c81c0b9,0x095131e4,0xe85f306e,0x07901a81,0x023e1661,
    0x3cc0fd74,0xc81ba024,0x3e21f503,0x316e3d02,0x154c4e0b,0x21d1663d,
    0x2b6aaa59,0xb896e0aa,0x4c01e40f,0x2fadf883,0x6cc3c8f7,0x27f540cb,
    0x7c039bf1,0x87e60640,0x87900ba8,0x202fae3c,0x215c0cd8,0x0986a1dc,
    0xf85a80f2,0x03ea7a00,0x0072ef6e,0x881e4077,0xcec806c5,0x2e1aa1eb,
    0x31e8710c,0x7e45fccb,0x33fa6001,0x6f440cdc,0x4c000400,0x02037a25,
    0x3e002010,0xdf50bea0,0x744076a3,0x041bd10d,0xff500000,0x06f44bff,
    0x0ba60db8,0x01ee9fcc,0xd1000011,0x8010201b,0x42fc8810,0x260addb8,
    0x001fc8bf,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x80000000,0x6cccffc8,0x7dc0bfa6,
    0x4ccc5d13,0x9fd30999,0xb30007b9,0x433ee25f,0x00dccee9,0x27fb999d,
    0x37a62ffa,0x261bfb30,0x45fb10cf,0x0cdccfe9,0x76667ecc,0xb9db9b71,
    0x744bf66d,0x333b661d,0x017fb36c,0x8f7c0fd3,0x204ccee9,0x04010000,
    0x02008800,0x79004444,0x202dc28b,0x8044712d,0x207d16e1,0x3f116e03,
    0x141b25b8,0x583f3176,0x541ccdb0,0x3b225b87,0x146235c0,0x4cb714b7,
    0x2e28b704,0x5c1fdc06,0x8bb2dc3f,0x23e66aaa,0x164e45c8,0x9fccb735,
    0x132761d8,0x64c39575,0xbb883faa,0x26675c05,0x0220bb54,0x05c8b70c,
    0x0fc2dc07,0x400fa96e,0x2e6c80fa,0x0917f101,0x3e16e1aa,0x5b8035c5,
    0xb80e6b70,0x7701ae05,0x5b87b90d,0xf0e4b1ee,0x315996a1,0x79174ce4,
    0x89a6911c,0x16e09ae6,0x702a5b9c,0x1cf42f4b,0x4b70c022,0x5c0703e8,
    0xb2dc1f85,0x102f880b,0xfa80717d,0xb70d500c,0x226b8f90,0x36e0b703,
    0x872dc03a,0x17c5c06b,0x25b87b35,0x0f812a4d,0x2a2ee8b5,0x5a60999c,
    0x2a7ba80a,0x1f303e25,0x333ee710,0x4f92dc0e,0x12acedaa,0xcafb8601,
    0x66e65c5e,0x2abae1cc,0x5f5c1faa,0x404e803f,0x0db004fa,0x542dc354,
    0x3733ee0f,0x3ae0b703,0x6675c03f,0x5ce035c5,0x3ae1ed26,0x11aa0cca,
    0xfb85a87c,0x57408d52,0x53c46c43,0x07a20f8d,0x112ee664,0x2617a5b8,
    0x5c300887,0x203836c5,0xadc1f85b,0x0075c04d,0x75cc01f4,0x0b70d503,
    0x80c6b8d9,0x7f3b705b,0x6b832dc0,0x299f89c0,0x7c05b87b,0x5b8f4132,
    0x27f25466,0x2e0f5419,0x887c4f35,0x14c31ec6,0xdceb80b7,0x2beeaa0c,
    0xb860112a,0x01c0fd45,0x5b83f0b7,0x07e605f1,0x7100f601,0x21aa07ea,
    0x35c3e85b,0x5b82dc04,0x816e07f3,0xdc8e086b,0x80b70f64,0x67643eea,
    0x375d31eb,0x86827f54,0x262fadf8,0x2fee0cbd,0x8b7124bb,0x2201ae28,
    0x5c300887,0x20383e45,0x2e0fc45b,0x13a07ea6,0x9101f40e,0xb86a86d8,
    0x1ae07dc5,0x2dc1ae0e,0x40b709f3,0x442e386b,0x0d70fa3f,0x02010800,
    0x80002008,0x98f64000,0x30fcbbfe,0x7e4405fd,0x4ccccc42,0xb79fd319,
    0xfe98001b,0x2619f712,0xc8fb22fe,0x84eccccf,0xdea81dfa,0x6c477f20,
    0x333fa62f,0x5fec40cd,0x7f4c2dca,0xe897f4c2,0x05fd32df,0x5d999fb3,
    0xf5242fa6,0x00bfa63b,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x30020041,0x08082204,0x20442202,0x0d408820,0x2651a800,0x8042188a,
    0x00000001,0x00300000,0x0c002020,0x332a0822,0xa821cccc,0x21cbbbbb,
    0x7773082a,0x84cccccc,0x7d4058ba,0x25b0de89,0x42e05329,0x0674dd43,
    0x1b57b93b,0x98baebea,0x57cc5b5e,0x40fcabeb,0xbb8802ca,0x96e6f621,
    0xb423d9fa,0x21b80d80,0x5c1b730b,0x5b984983,0x3f8865dc,0x70aea6b5,
    0x23c8f8b1,0x7c1d1e44,0x200fc001,0x59953528,0x551ddcc7,0x4a635555,
    0x4d52d803,0x541d8ec3,0xd93c4773,0xe99f9a44,0x262d4be2,0xf31e829f,
    0x83c981e4,0x42880bb9,0x666c1743,0x5cdc003d,0x20e61b81,0x144701ac,
    0x195a9c47,0x20d988d1,0x4e06c797,0x77750419,0x40043777,0x00a88128,
    0x5a800000,0xe98331d7,0x26d30e98,0x0f9aad46,0x04ccf654,0x1ae1661d,
    0x0ee68874,0x016e1d30,0x03a19815,0xccb8f722,0x16c0cccc,0x42e1cc38,
    0x2711d984,0xb9c42a28,0xac1b58b2,0x0000532a,0x00000000,0x1f000000,
    0x1d307975,0x7cc744d3,0x87c6baa0,0x3a0798d8,0x05d70b30,0x03b9a21d,
    0xbb981773,0x3a1c2880,0x04bc9d80,0x710dcdc0,0x88e23982,0x0eea1a82,
    0x9026e230,0x0088c595,0x2eeeee00,0x0000003b,0x20000000,0x1b05f16c,
    0x8ea73036,0xad4d12f8,0x874312f8,0x07c45459,0x8773447a,0xbb8802ba,
    0x16e6f621,0x1b03403d,0xca8dc370,0x2828aa1c,0x000006aa,0x00000000,
    0x00000000,0x73000000,0x0cc6606c,0x326170b8,0x33e20cad,0x3e64efbb,
    0x2b51fc8b,0x17f31ee8,0x21bb13f7,0x2350001a,0x7cc62532,0x0000000c,
    0x00000000,0x00000000,0x00000000,0x00000000,0x10000010,0x00081004,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__times_15_latin1_x[224]={ 0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,-1,0,0,-1,0,0,0,0,0,0,0,
-2,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,
1,1,0,0,-1,0,0,0,0,-1,0,0,0,0,1,0,-1,0,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
 };
static signed short stb__times_15_latin1_y[224]={ 12,2,2,2,2,2,2,2,2,2,2,3,10,8,
10,2,2,2,2,2,2,3,2,3,2,2,5,5,4,6,4,2,2,2,3,2,3,3,3,2,3,3,3,3,
3,3,3,2,3,2,3,2,3,3,3,3,3,3,3,2,2,2,2,14,2,5,2,5,2,5,2,5,2,2,
2,2,2,5,5,5,5,5,5,5,3,5,5,5,5,5,5,2,2,2,7,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,12,5,3,2,4,3,
2,2,3,2,2,5,6,8,2,1,2,3,2,2,2,5,3,6,11,2,2,5,2,2,2,5,0,0,0,0,
0,0,3,2,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,4,2,0,0,0,0,0,3,2,2,2,
2,3,3,2,5,5,2,2,2,3,2,2,2,3,2,3,2,2,2,3,3,4,5,2,2,2,3,2,2,3,
 };
static unsigned short stb__times_15_latin1_w[224]={ 0,3,5,7,7,11,11,2,5,4,6,8,3,4,
3,4,7,5,7,6,7,6,7,7,6,7,2,3,8,8,8,6,13,10,9,9,10,8,7,10,10,5,6,10,
8,12,11,10,8,10,10,7,8,10,10,13,10,10,8,4,4,4,7,8,3,6,8,6,7,6,6,7,7,4,
5,7,4,11,7,7,8,7,5,5,4,7,7,10,7,7,6,5,1,4,8,8,8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,3,6,7,7,7,
1,5,5,10,5,7,8,4,10,8,5,8,4,4,3,8,8,3,3,4,5,7,10,10,10,6,10,10,10,10,
10,10,13,9,8,8,8,8,5,5,5,5,10,11,10,10,10,10,10,6,10,10,10,10,10,10,8,7,6,6,
6,6,6,6,9,6,6,6,6,6,4,4,4,4,7,7,7,7,7,7,7,8,7,7,7,7,7,7,8,7,
 };
static unsigned short stb__times_15_latin1_h[224]={ 0,11,5,11,12,11,11,5,13,13,7,9,5,2,
3,11,11,10,10,11,10,10,11,10,11,11,8,10,7,3,7,11,13,10,9,11,9,9,9,11,9,9,10,9,
9,9,10,11,9,13,9,11,9,10,10,10,9,9,9,13,11,13,6,1,4,8,11,8,11,8,10,10,10,10,
13,10,10,7,7,8,10,10,7,8,10,8,8,8,7,10,7,13,13,13,3,9,9,9,9,9,9,9,9,9,
9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,0,10,12,11,7,9,
13,13,2,11,5,8,3,2,11,2,5,9,6,6,4,10,12,3,4,6,5,8,11,11,11,10,12,12,12,12,
12,12,9,13,12,12,12,12,12,12,12,12,9,13,13,13,13,13,13,7,11,13,13,13,13,12,9,11,11,11,
11,10,10,11,8,10,11,11,11,10,10,10,10,9,11,9,11,11,11,10,10,7,8,11,11,11,10,13,13,12,
 };
static unsigned short stb__times_15_latin1_s[224]={ 255,28,177,181,220,127,72,162,1,81,106,
51,158,230,195,100,105,207,108,32,47,40,121,1,200,166,251,251,83,199,74,
174,59,55,41,129,119,130,159,39,60,113,84,148,167,176,91,155,189,35,71,
20,139,146,157,173,102,91,82,24,188,97,139,195,187,234,157,198,166,219,195,
202,210,116,29,138,168,62,46,241,129,121,100,213,103,205,226,1,54,66,249,
46,52,54,221,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,255,16,239,
147,92,24,73,75,244,189,171,20,212,230,1,235,152,226,129,147,191,227,63,
208,183,134,165,12,61,50,245,213,116,228,1,12,99,23,1,102,246,34,54,
78,72,87,93,110,235,112,124,135,146,157,179,122,139,190,201,168,86,43,15,
200,208,215,238,9,220,193,36,244,181,174,150,33,20,74,79,246,222,218,84,
92,139,236,25,113,28,12,113,230,187,16,7,212, };
static unsigned short stb__times_15_latin1_t[224]={ 1,28,61,28,1,15,28,61,1,1,61,
51,61,61,61,28,28,28,40,28,40,40,28,40,28,28,40,28,61,61,61,
28,1,40,51,28,51,51,51,28,51,51,40,51,51,51,40,28,51,1,51,
28,51,40,40,40,51,51,51,1,15,1,61,65,61,51,15,51,15,51,40,
40,40,40,1,40,40,61,61,51,40,40,61,51,40,51,51,61,61,40,51,
1,1,1,61,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,
51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,1,40,1,
28,61,51,1,1,61,28,61,61,61,61,28,61,61,40,61,61,61,28,15,
61,61,61,61,61,28,28,15,28,15,1,15,15,15,15,51,1,1,15,15,
15,15,15,15,15,40,1,1,1,1,1,1,61,15,1,1,1,1,15,51,
15,15,15,15,40,28,15,61,28,15,15,15,40,40,40,40,40,15,40,28,
28,28,28,40,61,61,28,28,15,40,1,1,1, };
static unsigned short stb__times_15_latin1_a[224]={ 54,72,88,108,108,181,169,39,
72,72,108,122,54,72,54,60,108,108,108,108,108,108,108,108,
108,108,60,60,122,122,122,96,200,157,145,145,157,132,121,157,
157,72,84,157,132,193,157,157,121,157,145,121,132,157,157,205,
157,157,132,72,60,72,102,108,72,96,108,96,108,96,72,108,
108,60,60,108,60,169,108,108,108,108,72,84,60,108,108,157,
108,108,96,104,43,104,117,169,169,169,169,169,169,169,169,169,
169,169,169,169,169,169,169,169,169,169,169,169,169,169,169,169,
169,169,169,169,169,169,169,169,54,72,108,108,108,108,43,108,
72,165,60,108,122,72,165,108,87,119,65,65,72,125,98,54,
72,65,67,108,163,163,163,96,157,157,157,157,157,157,193,145,
132,132,132,132,72,72,72,72,157,157,157,157,157,157,157,122,
157,157,157,157,157,157,121,108,96,96,96,96,96,96,145,96,
96,96,96,96,60,60,60,60,108,108,108,108,108,108,108,119,
108,108,108,108,108,108,108,108, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_15_latin1_BITMAP_HEIGHT or STB_FONT_times_15_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_15_latin1(stb_fontchar font[STB_FONT_times_15_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_times_15_latin1_BITMAP_HEIGHT][STB_FONT_times_15_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_15_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_15_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_15_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_15_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_15_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_15_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_15_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__times_15_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__times_15_latin1_s[i] + stb__times_15_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__times_15_latin1_t[i] + stb__times_15_latin1_h[i]) * recip_height;
            font[i].x0 = stb__times_15_latin1_x[i];
            font[i].y0 = stb__times_15_latin1_y[i];
            font[i].x1 = stb__times_15_latin1_x[i] + stb__times_15_latin1_w[i];
            font[i].y1 = stb__times_15_latin1_y[i] + stb__times_15_latin1_h[i];
            font[i].advance_int = (stb__times_15_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__times_15_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_15_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_15_latin1_s[i] + stb__times_15_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_15_latin1_t[i] + stb__times_15_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_15_latin1_x[i] - 0.5f;
            font[i].y0f = stb__times_15_latin1_y[i] - 0.5f;
            font[i].x1f = stb__times_15_latin1_x[i] + stb__times_15_latin1_w[i] + 0.5f;
            font[i].y1f = stb__times_15_latin1_y[i] + stb__times_15_latin1_h[i] + 0.5f;
            font[i].advance = stb__times_15_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_15_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_15_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_15_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_15_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_15_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_15_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_15_latin1_LINE_SPACING
#endif

