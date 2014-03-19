// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_12_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_12_latin_ext'.
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

#define STB_FONT_courier_12_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_courier_12_latin_ext_BITMAP_HEIGHT         88
#define STB_FONT_courier_12_latin_ext_BITMAP_HEIGHT_POW2   128

#define STB_FONT_courier_12_latin_ext_FIRST_CHAR            32
#define STB_FONT_courier_12_latin_ext_NUM_CHARS            560

#define STB_FONT_courier_12_latin_ext_LINE_SPACING           6

static unsigned int stb__courier_12_latin_ext_pixels[]={
    0x80400400,0x00802a00,0x10800040,0x31000000,0x04000013,0x00000000,
    0x0000c404,0x00000000,0x01080400,0x20000000,0x0b806e03,0x403101a8,
    0x9881c40b,0x20d54c19,0x81701ba9,0x1bb81a88,0x2e20ccc4,0xa82ab883,
    0x7103aa82,0x77017170,0x06602e01,0x1d5c0dd4,0x1c5c0ddc,0x837700c4,
    0x39a82ab8,0x2a60d5c4,0x5cc0c428,0x2ae23aca,0x02200a81,0x500c1844,
    0x22202205,0x88830c08,0x88830c09,0x88830c08,0x44184408,0x00802010,
    0x01500405,0x88044041,0x0a011101,0x0a202222,0x0108814c,0x22022031,
    0xb8831008,0x394262ac,0x71055008,0xbaba8395,0x30395712,0x47555505,
    0x27261889,0x862263b8,0x263b89c9,0x22726188,0x4ea6ea3b,0x713b89c9,
    0x44e4c395,0x7713933b,0xc9872ae2,0x95713b89,0x1dc4e4c3,0x32619555,
    0x2aaa3b89,0x8eaaaa3a,0x2ea0caaa,0x226a23a9,0x2a1654c2,0x13930caa,
    0x872ae277,0x223b89c9,0x32a09401,0x38501303,0x3852b894,0x851055cc,
    0x470a2532,0x70a25318,0x851298c4,0x86144623,0x70e14623,0x28c470c4,
    0x85188e1c,0x314311c3,0x0a2311c1,0x31450a25,0x89c30a21,0x098a0e05,
    0x4385188e,0x40188623,0xca815702,0x0984c283,0x082614a7,0xa8e0098e,
    0xa8e188e0,0xa8e188e0,0x013188e0,0x130a311c,0x311c311c,0x311c130a,
    0x311c130a,0x311c0d4c,0x3004c026,0x13009835,0x3530701c,0x4c28c470,
    0x062188e0,0x20a31050,0x426140ab,0x30a50a89,0x1525dcc1,0x11c151c0,
    0x11c151c3,0x11c151c3,0x71d4c263,0x704c28c4,0x28c470c4,0x28c4704c,
    0x40c4704c,0x5188e0b8,0x22002a01,0x8ea6130b,0x101c1162,0x0a311c17,
    0xb8311c13,0x072a21ba,0x51889557,0x44721c28,0x38a23851,0x151c10e2,
    0x151c131c,0x151c131c,0x70e2131c,0x870a131c,0x42638263,0x5098e1c2,
    0x14131c38,0x22131c31,0x50438843,0x31c388c4,0x05144555,0x84c70c45,
    0x4098e1c2,0x47031028,0x112aae19,0x5e443957,0x072ae23a,0x64c3b357,
    0x32ea61ba,0x530aae62,0x155cc597,0xb98b2ea6,0x1556542a,0x55c45573,
    0x2155cc1c,0x2ae22ab9,0x1155cc1c,0xab983957,0x261d5642,0x5d64c2ab,
    0xc86eb261,0x556543aa,0x1aab8502,0x5cc3aac8,0x072ae22a,0x07105573,
    0x2a1970e2,0x040cc70c,0x0802010c,0x04008040,0x00804008,0x80401004,
    0x20100400,0x40080400,0x20080200,0x20080200,0x082ba880,0x04020080,
    0x00000020,0x0065432e,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00002000,0x00000800,0x2e206aa6,
    0x00000000,0x03551000,0x0aae2063,0x00070015,0x261540c0,0x20206071,
    0x0330a000,0x00005500,0x54000080,0x10201c41,0x155c4557,0x205dc05c,
    0x104771c8,0x81540a50,0x155c40bb,0x32a0a2a6,0x80630003,0x0c00c408,
    0x710b6593,0x26614455,0x540c2218,0x32aaa282,0x198a2a60,0x8557101c,
    0x0706ae63,0x85055593,0x83871038,0x0180d400,0x80820101,0x18898623,
    0x4c14c6a2,0x80c02082,0x302ae018,0x2a277139,0x44e4c531,0x06a2623b,
    0x1a9c1555,0xaa831020,0x1551530a,0x4514054c,0x0620c409,0x20603757,
    0x40540443,0x00850263,0x511cb373,0x55c04039,0xb8b2aa5a,0x542ee5aa,
    0x4a6311c4,0x4c511c28,0xc86c4512,0x43755932,0x0a3103ca,0x288e188e,
    0x54c4311c,0x2bb86201,0x13acab98,0x11986203,0x54c50503,0x8dd564c1,
    0x22986c28,0x4ce0baac,0xb8382aac,0x59318399,0x50702855,0x292b3260,
    0x51285051,0x1c29cccc,0x44151c31,0x30547072,0x20c470e3,0x4aab80ab,
    0x72886238,0x5b10c470,0x2a2e1880,0x327284c1,0x88cc3100,0xb8828281,
    0x712188e0,0x71c70e38,0x3702a04c,0x02638037,0x8141c375,0x207033a8,
    0x3b988702,0x2382a385,0x1c14540a,0xab83b815,0x47051884,0xa8311c19,
    0x88623828,0x386201a9,0x0621280e,0x062330c4,0x86228a0a,0x961444ab,
    0x71c50e28,0x470e0733,0x73370c0b,0x22838540,0x2e1322a0,0x50170500,
    0xab985157,0x588151c2,0x41405470,0x89557053,0x1c1950cb,0x47058813,
    0x81e46e09,0x0e659318,0x8c406214,0x2818abba,0x70eab228,0xaab8310a,
    0x2e38a1c2,0x64c501b9,0x26e28322,0x71c4641b,0x37571c50,0x42831198,
    0xb95c3119,0xba981981,0xa981442c,0x438282cb,0x140198e2,0x0a20aae6,
    0x008155cc,0x0a0040cc,0x19804c0e,0x38282828,0x701c0994,0x02e38e38,
    0x714020a2,0x3893105c,0x292ab2a2,0x5d564227,0x56459551,0x06c361ba,
    0xa88080a8,0x5440202c,0x2aab262c,0x032a1973,0x54408098,0x2880402c,
    0x05107750,0xa81072a2,0x543b983a,0x53020aca,0x33aaac98,0x55902c98,
    0x22c99547,0x8144280c,0x20645930,0x5d400d42,0x0001bac9,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x15380800,0x41844010,0x98000aaa,0x00110002,
    0x00400040,0x00800100,0x08aa8002,0x4800054c,0x20718800,0x22008004,
    0x40403102,0x400a6000,0x3aba8000,0xa806e008,0x0e20080b,0x2e20c4c4,
    0x5c40aa03,0x9d55542a,0x4c3b88e9,0x0e607102,0x20a605dc,0x440bb839,
    0x9510a028,0x2b260c03,0x418001ba,0x038828a9,0xba82880a,0xbb8713a9,
    0x654c0880,0x40aa0e22,0x655c4622,0x26a20101,0x03957128,0x144d4401,
    0x40098041,0x3b8a1441,0x80201031,0x40404100,0xab882080,0x40a0501c,
    0x88e3aaaa,0x8ee27261,0x0623a9ba,0x298d440c,0x28944d44,0x40820b8c,
    0x090500a8,0x52813053,0x381e5438,0x950e14b1,0x2a2c4e07,0x3079503c,
    0x0267711d,0x931889b8,0x23a63755,0x755933b8,0x46eab263,0x32aa2caa,
    0x428b2aa2,0x220a0503,0x20957142,0x46144623,0x43622caa,0x9c288e2c,
    0x12402658,0x05039139,0xab982e0a,0x214a04c0,0x26055c09,0x204c28e0,
    0x0704c0ab,0x02ae0157,0x00a8c4ee,0x4470c5ce,0x470c4ee1,0x14188e18,
    0x4c285028,0x98450280,0x23814e00,0x82801318,0x87288719,0x53098e09,
    0x40547127,0x04350502,0x428c4707,0x14146209,0x1882614b,0x4622c505,
    0x37051882,0x410e2311,0x255c3713,0x570c44dc,0x0a095709,0x26142814,
    0xa9c50280,0x23850e00,0x0ea61318,0x4540ee05,0x43896282,0x0caab893,
    0x41705028,0xab984bb9,0xaab870a3,0x0a2aa984,0x984aab87,0x2555c2aa,
    0xb9c2555c,0x46eb2618,0x29c371c9,0x29c31738,0x140a0538,0x550e1428,
    0x2b2a2159,0x9308714a,0x26387555,0x01438710,0x54c16205,0x9556542a,
    0x2a0a8e1a,0x59530aca,0x8838a248,0x957129bd,0x28066383,0x47072ae2,
    0x4c70a019,0x138331c1,0x40407037,0x86e27143,0x14287143,0xab885028,
    0x4040101c,0x1301bac9,0x6542ab98,0x050142aa,0x140a00a2,0x2a05471c,
    0x21440a80,0x8441d9ab,0x50cb8080,0x415d4419,0x1950cb80,0x19715d44,
    0xa865c32a,0x06e3930c,0x930a2053,0x47267555,0x7555931b,0x54eaab26,
    0x8b2aa2ca,0x20082caa,0x04051028,0x020080c0,0xca885955,0x440b2a22,
    0x082882ba,0x88591391,0x08042882,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x0e310000,
    0x018b8873,0x18441cc0,0x22000010,0x101cc1aa,0x20080015,0xaa880052,
    0x31031310,0x0c220e20,0x55100054,0x40005403,0x50040999,0x14062a0a,
    0x00710620,0x8944a231,0x200502bb,0x04c22898,0x81973195,0xad817500,
    0x777910a9,0x000d5443,0x80c41c01,0x4419aaba,0x22a01883,0x02881cc1,
    0x2205d402,0x001aa881,0x55444ba8,0xa982ae01,0xb80b882b,0x23107018,
    0x32229418,0xa8a4c771,0x36238028,0x8aae2590,0x8a1c2caa,0x0aa82caa,
    0x0e0b8a14,0x16554155,0x20a0b557,0x91142acb,0x65c41550,0x220aa82a,
    0x20aa82ab,0x541baac9,0x20aae20a,0x2ab260aa,0x8626e21b,0x8a885129,
    0xa82894c3,0x2aae209a,0x9704d540,0x41355055,0x42388623,0x46605403,
    0x382828e3,0xb85c1414,0x49555530,0x02e17143,0xa8851285,0x04c0c41c,
    0x0621c70e,0x1470b85c,0x4311c38e,0x470a38e3,0x89c311c3,0x9c151c1b,
    0xa82a383a,0x4ddc4530,0x3114c2a0,0x4714c2a0,0x1728e218,0x0ee07035,
    0x70503771,0x21442828,0x4a1c7072,0x1c0a1428,0x42cb8850,0x55731c09,
    0x1440c435,0x730ddc4a,0x255c3555,0x446aaae6,0x2aae61bb,0x3312ae1a,
    0x30a8e0cc,0x4151c1c1,0x50f32a02,0x20280c40,0x4e230623,0x200a870c,
    0x82815042,0x5050312b,0x8a2188c4,0x20c45143,0x20a00b82,0x21c45018,
    0x11406202,0x80a0a823,0xa8205053,0x885380a0,0x854706a2,0x54707118,
    0x707700e0,0x20380c40,0x39c40263,0x2140382a,0x54283aac,0x30503a9c,
    0x2aba8755,0x986a6322,0x8cc283aa,0xab814418,0x212ee61b,0x55c1baaa,
    0xc8eaa61b,0x5d5543aa,0x555450e1,0xa875591b,0x450e1baa,0x54c4aaba,
    0x32aaa2cb,0x3165d4c0,0x83b83557,0x55c1aab9,0x86aae61b,0x9a4c3aa8,
    0x01985473,0xa8105951,0x2aa002ca,0x4000102c,0x2caa8100,0x3b86eab2,
    0x08010040,0x01008020,0x2aab2604,0x04010083,0x00eaab26,0x00400010,
    0x0100cc02,0x10001004,0x0a590c88,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x01500000,0x202a2073,0x05330308,0x440554c0,0x20718830,0x26020819,
    0x00540e03,0x10108815,0x20701cc0,0xa828c40a,0x5005d418,0x84000201,
    0x40e03980,0xa880cc0a,0x2210080a,0x40e60080,0x82898818,0x202ea031,
    0x0d54409a,0x0005d400,0x41889814,0x00a82898,0x8440c40a,0x2215d4c1,
    0x200a8289,0x8aea2002,0x20c40719,0x3260a9aa,0x0c223b89,0x02a0a262,
    0x1c303828,0x89839571,0x215d4c08,0x9aa82898,0x2614c530,0x20ab981a,
    0xab985129,0x94c1e540,0x2eab2628,0x982e2aa1,0x2894c512,0x253144a6,
    0x429aa828,0x80aa80aa,0x80aa80aa,0x0b2aa0aa,0x15142aa6,0x230c4dc4,
    0x311c2999,0x0aa80aa8,0x0aa80aa8,0x2380545c,0x02ae61c2,0xab981573,
    0x51298540,0x0554c146,0x20a8e1c1,0x202ae0e0,0x062382a3,0x05470eb1,
    0x05470547,0xb1170547,0x2e0b85c3,0x0b85c170,0x21705c2e,0x445c140b,
    0x2704c72c,0x1306a1b8,0x871c311c,0x8e1c70e3,0x221a8ec3,0x04130a2c,
    0x1c10e087,0x19baa80a,0x2e60d454,0x4c151c4b,0x828c44bb,0x44ab82a3,
    0x1c3adbb9,0x1c151c15,0x22151c15,0x4a144e71,0x94289428,0x14289428,
    0x39c4330a,0x4330cc2a,0x2382609a,0x35557318,0x4c6aaae6,0x5731aaab,
    0x20e24355,0x2609850a,0x25dcc4bb,0x40712ee6,0x86303aba,0x85470e28,
    0x95570e28,0x0a705470,0x82a38247,0x82a382a3,0x513a82a3,0x31143114,
    0x31143114,0x44283114,0x4451c221,0x133186a2,0x02826385,0x80a0280a,
    0x4284c145,0x8a238a23,0x5cc38a23,0x82caa1aa,0x6cd5c298,0xb8b2ea61,
    0x198e1d9a,0x87165d4c,0x875b7552,0x2a62cba9,0x32ea62cb,0xd8b2ea62,
    0x1d54c3ab,0x5530eaa6,0x4c3aa987,0xaa8283aa,0x50aee229,0x9aa89557,
    0x2155cc0a,0x2aa1baaa,0x2eaaa1ba,0x4c6eaaa1,0x5770baac,0x20e55c45,
    0x2ae1d9ab,0x366ae1d9,0x80000081,0xb8080200,0x8081950c,0x823aaac9,
    0x10040100,0x40104040,0x20080200,0x59550200,0x00000000,0x00401004,
    0x00000401,0x40100401,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x402a0700,0x3350001a,
    0x0c4cc0c1,0x513102e6,0x2aa88c20,0x98173010,0x41998188,0x0c5c40aa,
    0x20205555,0x20550153,0x0ba80400,0x2a6022aa,0x10c4cc28,0x40010405,
    0x2a014111,0x062621ba,0x20133011,0x200a8019,0x980a8a82,0x1546c2ca,
    0x42a83739,0x50730709,0xa80e5757,0x0e333aaa,0x844220aa,0x4130870a,
    0x753750a1,0x2aa0cc00,0x655540a9,0x0a2206e0,0x98550750,0x391c81ac,
    0x2a205dd4,0x142e01c2,0x539510a6,0x80500cc1,0x55cc0ab9,0x0e0199c0,
    0x8e08aa71,0x244a0ab9,0x5c4a0554,0x42881172,0x12984c72,0x8e383a85,
    0x383b88e9,0x1e5430a2,0x289b8980,0x40a61314,0x4c1403ca,0x21a8a81a,
    0x262cbbd8,0x441a981a,0x43141b9a,0x83283aa9,0x22287128,0x0e087043,
    0x41c05717,0x21a82aab,0x43a8b8e0,0x9c26170b,0x04c73532,0x51c57298,
    0xb10d4621,0x8313b859,0x57002628,0x99941701,0x706a6099,0x01570575,
    0x21705014,0x281d55c2,0x21c720a0,0x50512862,0x43553330,0x4c1ba8b9,
    0x25dcc4bb,0x03820a8e,0xb98150aa,0x88e66e4b,0x50a89942,0x9802a130,
    0x20a8e19a,0x1c2e3128,0x8506226e,0x8c475309,0x4d4a05c2,0x50b88098,
    0x05188663,0x0c505014,0x0140a22e,0x1b10c505,0x41140e06,0x5cc398b8,
    0x1c511888,0x188e1c51,0x05501451,0x5338e288,0x11c86228,0x10e21503,
    0x0151c190,0x9c28e355,0x0e21c18b,0x8e2555c7,0x50a63130,0x431198c4,
    0x80a04aab,0x0c506282,0x18a0a028,0x514070a0,0x1418770c,0xab8766ae,
    0x771931d9,0x2a01aab8,0x26ae1742,0x5302171d,0x1d5e4475,0xac985577,
    0x9839531b,0x22822cba,0xb89c2aa9,0x55654141,0x2e6198e2,0x02a6aa2a,
    0x3ab87559,0xcba8331c,0x42f6ea0b,0x362590d8,0x5edd4591,0x442f6ea0,
    0x2a98591d,0x5c432ef2,0x19104bbd,0x00833910,0x20040002,0x04020a99,
    0x18101bb8,0x02020002,0x01533008,0x006e3930,0xca865c08,0x00100000,
    0x0065432e,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x400cc000,
    0x21b980aa,0x5cd44528,0x44088881,0x98512880,0x0a80100a,0x026a6010,
    0x0c402205,0x20370188,0x44044400,0x50041400,0x20103513,0x88880881,
    0x98294088,0x288aaa21,0x71011051,0x01530e61,0x80501111,0x260150e3,
    0xc9871c83,0x05d544ac,0x7705018a,0x82802605,0x4188530a,0x02881ca8,
    0x10262a05,0xacbb8555,0x41556444,0x2c86c409,0x0d5c0964,0x555910e2,
    0x20e20404,0x22851c18,0x140e5441,0x5730a051,0x2e228759,0x23777930,
    0x1b9a8849,0x32a88314,0x06281a98,0x2af22054,0x20373510,0x06a60282,
    0x21d54c14,0x41a981a9,0x28e1b9a8,0x350cc503,0x828cc351,0x15301303,
    0x40466289,0x4c6a26a0,0x06ee23aa,0x510280c5,0x284c280e,0x0d545cc5,
    0x2390280a,0xc8a83143,0x828a0a03,0x450441c8,0x65dc471c,0x40a00a1b,
    0x5028942c,0x238e4140,0x2b2a0f22,0xa812c850,0x39710503,0x21595028,
    0x12c81012,0x0541144a,0x849a8145,0x112a028a,0x31710373,0x21baa987,
    0x3b10c502,0x01bab8b2,0x8b2eb20a,0x8e0882a8,0x54c14062,0x5cc281aa,
    0x01407022,0x5c50c505,0x0e141701,0x36a0dcc4,0x8541c42b,0x202505c0,
    0xac8701c0,0x0e5d4c3a,0x40488114,0x40dcc40a,0x20260ee1,0x8080c502,
    0x20a02252,0x6441400a,0x0a03143b,0x5140a038,0x8280a01c,0x044a2862,
    0x8814198a,0x8a0081b9,0x4c506ea0,0x70281011,0x140a01c0,0x01402885,
    0x88191005,0x3621ed41,0x54288591,0x2a1bbd9b,0xa80a0bdb,0x0b2e0bcb,
    0x5c4b23b1,0x414c1bbb,0x9710bdba,0x32ef2977,0xa82f6ea0,0x23b10bdb,
    0x2ef6aa2c,0x506ef661,0x1cb8857b,0xbbbd8198,0x2ef66141,0x82222261,
    0x2ef22bda,0x5100a60c,0x725dedc4,0x2f2ea059,0x00072e20,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0xb9800000,0x1101080a,0x80980440,0x26628aa8,0x5c0401ba,0x54c1980a,
    0x02200a80,0x1014c188,0x1b985135,0x45102222,0x40100400,0x53020400,
    0x00220101,0x88811102,0x20444408,0x82044400,0x5409a980,0x0504a20a,
    0xaac88263,0x260e5442,0xb0723828,0x95254a61,0x05510e38,0x6440620a,
    0x280883aa,0x02a2c4e0,0x54375591,0xa8b21b15,0x590d883c,0x952542ee,
    0x703832a1,0x55641557,0xb9dcb30b,0x555e45aa,0x27595734,0x54c592c8,
    0x21c8e42c,0x471c530a,0x3095535a,0x404c5035,0x4c330a02,0x8d44e1c1,
    0x0a70a02a,0x0dc4c414,0x02a6098a,0x20986eaa,0x450ab263,0x41466018,
    0x289980aa,0x8a14a226,0x20881c19,0x89dc70a2,0x4130a251,0x2514a131,
    0x0c50501a,0x5dde4c0a,0x14071441,0x0281cc5c,0x2c1b8a0a,0x226a2251,
    0x28c45102,0x03531050,0x20a07557,0x5162870c,0x06a0eae0,0x40a31075,
    0x2954c43a,0xa9b98514,0x8514c220,0x706226a2,0x0a017530,0xb8280aea,
    0x050143aa,0x01c9ab84,0x20373705,0x55305022,0x22aab833,0x53053988,
    0x050499c8,0x222e05b1,0x0a282819,0x70285553,0x0501d051,0x0ee09777,
    0x510a26aa,0x910aa50a,0x25142837,0x2602a18b,0x17050098,0x22e0a035,
    0x0d554c28,0x9ae37553,0x8a0a0130,0x00a14503,0x21102831,0x98829850,
    0x53105039,0x82828503,0x814280a2,0x05029942,0x1c660445,0x5540dcae,
    0x1065d4c0,0x89450a01,0x9862331a,0x07141400,0x01018a0a,0xba830004,
    0x645b30bd,0x2977b710,0x97103cba,0x865c16cc,0x12ef60da,0x1797512e,
    0x3663c8dc,0x32ea1bbb,0x0b23b10b,0x1ded4577,0x407777b3,0x432e2cb8,
    0x321b30ca,0x4c064363,0x4165c003,0x47663bbd,0x4377791b,0x2cb882bc,
    0x751ccb66,0x2c8ec479,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x5314c000,0x550151a8,
    0xa80ab981,0x8aaa218a,0x06035128,0x20c0a251,0x2a2aa00a,0x26aa0a00,
    0x20aa1732,0x21d54c11,0xb8aa81a9,0x11044010,0x17173506,0x2a1a85c4,
    0x73511a89,0x30cc1a83,0x26284c35,0x30605541,0x5d413333,0x998d4530,
    0x41111028,0x7528a128,0x082e170a,0x38ee170a,0x0814c50a,0x54140628,
    0x54156202,0x20c88b82,0x731702a2,0x50502894,0x25ddc171,0x4c641111,
    0x4c2a4a63,0x412c8389,0x2813071c,0x417712a6,0xb8a15188,0x2666620a,
    0x96a71513,0x94d3970f,0x2a1aaaa8,0x6c4a18ba,0x4c50624b,0x470624aa,
    0x03141bb8,0x31413333,0x4409b998,0x2b6ae62b,0x46202e63,0x64384c53,
    0x14070499,0x238a0e54,0x5c6c2cca,0x5414a133,0x818a0704,0x19371419,
    0x443105dc,0x00e1529a,0x3498de45,0x29ac5d49,0x54355551,0x039942aa,
    0x0e288c45,0x05410c45,0x4cccc145,0x5ccc28a0,0x470dc409,0x7500b984,
    0x983350a2,0x14038194,0x1c2a1a94,0x432930ee,0x3710a509,0x418a0505,
    0x882e609a,0x9b894260,0x01800040,0x0c22098c,0x4c595400,0x54c3aaba,
    0x0e4d5c2a,0xaac85553,0x80e5d4c3,0x82cba980,0xbaa82a82,0x40ba83ac,
    0x04a82abc,0xcbbc8e51,0xc82f6ea0,0x2eaae372,0x17388410,0x221949dc,
    0x5ed45b1d,0x01647622,0x00000000,0x00000000,0x20002000,0x04020000,
    0x0c0080c0,0x0020802a,0x00000045,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x4b708000,0x555502a3,
    0x50422155,0xaaaa8217,0x37777730,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x8c5ae000,0x2222140a,0x10c22088,
    0x155550ea,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_12_latin_ext_x[560]={ 0,2,1,0,1,0,1,2,3,1,0,0,1,0,
2,1,1,1,0,1,1,1,1,1,1,1,2,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,2,0,0,0,0,0,1,0,0,0,
0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,2,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,2,1,0,1,0,
2,0,1,0,0,0,0,0,0,-1,1,0,1,1,2,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,1,1,-1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static signed short stb__courier_12_latin_ext_y[560]={ 8,1,1,1,0,1,2,1,1,1,1,2,6,4,
6,0,1,1,1,1,1,1,1,1,1,1,3,3,2,3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,10,1,3,1,3,1,3,1,3,1,1,
1,1,1,3,3,3,3,3,3,3,1,3,3,3,3,3,3,1,1,1,4,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,3,1,1,2,1,
1,1,1,1,1,3,4,4,1,0,0,1,1,1,1,3,1,4,7,1,1,3,1,1,1,3,-1,-1,-1,0,
0,-1,1,1,-1,-1,-1,0,-1,-1,-1,0,1,0,-1,-1,-1,0,0,3,1,-1,-1,-1,0,-1,1,1,1,1,
1,1,1,0,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,
0,1,-1,1,1,3,-1,1,-1,1,0,1,-1,1,-1,1,1,1,0,1,-1,1,0,1,1,3,-1,1,-1,1,
-1,1,0,1,1,0,-1,-1,1,1,0,1,0,1,-1,1,1,1,0,3,1,1,-1,1,1,1,3,-1,-1,1,
1,1,1,1,1,1,1,-1,1,1,3,-1,1,1,1,3,0,1,-1,1,-1,1,1,3,-1,1,1,3,-1,1,
-1,1,-1,1,1,3,-1,1,1,1,-1,1,1,1,0,1,0,1,-1,1,-1,0,-1,1,1,3,-1,1,-1,1,
0,-1,1,0,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,1,-1,1,-1,
1,-1,1,-1,0,-1,-1,-1,-1,-1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,-3,-1,-1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static unsigned short stb__courier_12_latin_ext_w[560]={ 0,2,4,6,5,6,5,2,2,3,4,6,3,6,
2,5,5,5,6,5,5,5,5,5,5,5,2,3,6,6,6,4,5,7,6,6,6,6,6,6,6,5,7,7,
6,7,6,6,6,6,7,6,6,6,7,7,6,6,5,2,4,2,5,7,3,6,6,6,7,6,5,6,6,6,
5,7,6,7,6,6,6,7,6,5,6,6,7,7,6,7,5,3,2,3,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,2,4,6,5,6,
2,6,4,7,4,6,6,6,7,8,4,6,4,4,3,6,6,2,2,4,4,6,7,7,7,4,7,7,7,7,
7,7,7,6,6,6,6,6,5,5,5,5,7,6,6,6,6,6,6,4,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,6,7,
7,6,7,6,7,7,6,6,6,6,6,6,6,6,6,7,7,7,6,6,6,6,6,6,7,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,5,6,5,6,5,6,5,6,5,6,7,6,7,5,7,7,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,7,6,7,6,
6,5,6,5,6,5,6,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,7,
6,5,5,5,5,5,5,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,6,5,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,7,6,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6, };
static unsigned short stb__courier_12_latin_ext_h[560]={ 0,8,4,8,9,8,7,4,9,9,5,6,4,2,
3,9,8,7,7,8,7,8,8,8,8,8,6,7,6,3,6,8,8,7,7,8,7,7,7,8,7,7,8,7,
7,7,7,8,7,9,7,8,7,8,7,7,7,7,7,9,9,9,4,1,2,6,8,6,8,6,7,7,7,7,
9,7,7,5,5,6,7,7,5,6,8,6,5,6,5,7,5,9,9,9,2,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,8,7,7,5,7,
9,8,2,8,4,5,4,2,8,2,4,7,4,4,2,7,8,2,3,4,4,5,7,7,7,8,9,9,9,8,
8,9,7,9,9,9,9,8,9,9,9,8,7,8,10,10,10,9,9,4,8,10,10,10,9,9,7,8,8,8,
8,8,8,9,6,7,8,8,8,8,7,7,7,7,8,7,8,8,8,8,8,6,6,8,8,8,8,9,9,9,
8,8,9,8,9,7,10,8,10,8,9,8,10,8,9,8,7,8,8,8,9,8,8,8,9,7,9,8,10,9,
10,9,9,9,9,10,9,9,7,7,8,7,8,7,9,7,9,9,8,5,8,9,10,9,9,9,5,9,9,9,
9,7,7,7,7,7,7,9,7,9,7,9,7,7,8,7,9,8,10,8,10,8,7,6,9,7,9,7,9,7,
10,8,10,8,9,7,10,8,10,10,9,8,7,8,9,8,9,8,10,8,10,9,10,8,9,7,9,8,9,9,
8,9,7,8,7,9,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,7,7,8,7,7,7,
7,7,7,7,7,7,7,7,7,7,8,6,7,7,7,7,7,7,7,7,7,7,7,7,7,8,6,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,9,8,9,7,10,
8,10,8,10,9,10,10,10,10,10,10,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,11,10,9,8,10,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7, };
static unsigned short stb__courier_12_latin_ext_s[560]={ 255,250,240,214,239,16,171,233,220,243,144,
67,236,138,103,8,157,31,60,221,67,69,156,115,102,82,253,129,89,248,74,
37,49,140,88,75,184,122,204,121,232,226,22,218,24,52,191,227,177,1,16,
149,211,179,163,155,148,133,198,245,215,204,215,145,113,24,214,239,163,246,116,
109,102,95,124,80,73,156,178,17,45,37,171,39,116,60,103,1,164,232,118,
145,169,186,131,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,
191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,255,253,178,
171,138,157,228,95,126,171,195,111,221,138,141,117,228,79,205,185,109,51,30,
106,245,190,210,149,1,247,239,136,15,37,52,162,128,60,36,75,89,103,110,
59,117,123,129,144,183,108,9,23,100,135,8,200,62,114,128,142,171,191,65,
15,8,1,248,241,234,247,81,86,207,200,193,186,93,113,120,9,150,127,137,
130,123,116,109,53,96,95,88,81,74,198,190,101,44,37,78,23,86,1,37,
1,163,235,156,221,170,207,197,192,142,177,170,163,179,150,143,136,163,9,71,
109,86,45,184,23,178,206,213,191,223,1,191,184,27,44,75,198,185,205,237,
230,41,124,33,155,198,149,130,116,131,248,162,149,142,232,170,225,240,100,58,
96,72,82,29,68,22,212,61,219,30,68,135,47,220,123,134,9,231,150,220,
164,207,198,149,157,177,21,172,211,206,130,241,234,138,228,247,94,109,200,94,
185,227,52,156,57,213,30,35,217,27,8,64,49,14,21,205,81,107,9,226,
16,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,54,191,191,87,
191,191,191,191,191,191,191,191,191,191,191,191,191,101,31,191,191,191,191,191,
191,191,191,191,191,191,191,191,242,45,191,191,191,191,191,191,191,191,191,191,
191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,248,42,
15,177,121,55,107,88,93,42,79,72,65,58,51,44,191,191,191,191,191,191,
191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,
191,191,191,1,30,1,66,16,102,191,191,191,191,191,191,191,191,191,191,191,
191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,
191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,
191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,191,
191,191,191,191,191,191,191,191,191, };
static unsigned short stb__courier_12_latin_ext_t[560]={ 11,33,77,33,12,43,69,77,23,23,77,
77,77,83,83,33,43,69,69,43,69,52,52,52,52,52,69,69,77,77,77,
52,52,69,69,52,69,69,69,52,69,69,52,69,69,69,69,43,69,23,69,
52,69,43,69,69,69,69,69,12,12,12,77,83,83,77,43,69,43,69,69,
69,69,69,12,69,69,77,77,77,69,69,77,77,33,77,77,77,77,61,77,
12,12,12,83,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,
61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,11,33,61,
61,77,61,12,52,83,43,77,77,77,83,52,83,77,61,77,77,83,61,52,
83,77,77,77,77,61,52,52,52,23,23,23,52,52,23,61,23,23,23,23,
43,23,23,23,43,61,52,1,1,1,23,23,77,52,1,1,1,23,23,61,
52,52,52,43,43,43,23,77,61,43,43,43,43,61,61,61,69,43,61,43,
43,43,43,43,77,77,43,43,43,43,23,12,12,43,43,12,43,12,69,1,
43,1,33,23,33,1,33,12,33,61,33,33,33,12,33,33,33,23,61,12,
33,1,23,1,23,23,23,23,1,23,33,52,52,33,61,33,52,23,52,23,
23,33,77,33,12,1,12,12,12,77,11,12,23,23,52,52,61,61,61,61,
23,61,23,61,23,61,52,33,52,23,33,1,33,1,33,61,77,12,61,12,
61,12,61,1,33,1,33,12,61,1,33,1,1,12,33,61,33,12,33,12,
33,1,43,1,12,1,43,12,61,12,43,12,12,33,12,61,33,61,12,52,
61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,33,61,61,33,
61,61,61,61,61,61,61,61,61,61,61,61,61,33,77,61,61,61,61,61,
61,61,61,61,61,61,61,61,33,77,61,61,61,61,61,61,61,61,61,61,
61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,1,52,
12,52,1,52,1,52,1,12,1,1,1,1,1,1,61,61,61,61,61,61,
61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,
61,61,61,1,1,13,43,1,43,61,61,61,61,61,61,61,61,61,61,61,
61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,
61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,
61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,61,
61,61,61,61,61,61,61,61,61, };
static unsigned short stb__courier_12_latin_ext_a[560]={ 102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_12_latin_ext_BITMAP_HEIGHT or STB_FONT_courier_12_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_12_latin_ext(stb_fontchar font[STB_FONT_courier_12_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_courier_12_latin_ext_BITMAP_HEIGHT][STB_FONT_courier_12_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_12_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_12_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_12_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_12_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_12_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_12_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_12_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__courier_12_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__courier_12_latin_ext_s[i] + stb__courier_12_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__courier_12_latin_ext_t[i] + stb__courier_12_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__courier_12_latin_ext_x[i];
            font[i].y0 = stb__courier_12_latin_ext_y[i];
            font[i].x1 = stb__courier_12_latin_ext_x[i] + stb__courier_12_latin_ext_w[i];
            font[i].y1 = stb__courier_12_latin_ext_y[i] + stb__courier_12_latin_ext_h[i];
            font[i].advance_int = (stb__courier_12_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__courier_12_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_12_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_12_latin_ext_s[i] + stb__courier_12_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_12_latin_ext_t[i] + stb__courier_12_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_12_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__courier_12_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__courier_12_latin_ext_x[i] + stb__courier_12_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__courier_12_latin_ext_y[i] + stb__courier_12_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__courier_12_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_12_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_12_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_12_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_12_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_12_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_12_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_12_latin_ext_LINE_SPACING
#endif

