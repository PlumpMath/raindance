// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_bold_7_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_bold_7_latin1'.
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

#define STB_FONT_times_bold_7_latin1_BITMAP_WIDTH         256
#define STB_FONT_times_bold_7_latin1_BITMAP_HEIGHT         28
#define STB_FONT_times_bold_7_latin1_BITMAP_HEIGHT_POW2    32

#define STB_FONT_times_bold_7_latin1_FIRST_CHAR            32
#define STB_FONT_times_bold_7_latin1_NUM_CHARS            224

#define STB_FONT_times_bold_7_latin1_LINE_SPACING           5

static unsigned int stb__times_bold_7_latin1_pixels[]={
    0x08809822,0x01302620,0x04c41010,0x1c0540a2,0x441104c4,0x40440808,
    0x41c40820,0x01085009,0x0c418188,0x09811026,0x040c1414,0x18230281,
    0x44085044,0x83010220,0x4c50a219,0x10a60cc0,0x04c0dc33,0xd88bf613,
    0x644310a8,0x262530c8,0x8281409a,0x305c4098,0x86204c45,0x2524130a,
    0x1315128a,0x4c4266a2,0x10a25088,0x82822662,0x55060d42,0x898854cb,
    0x30b88a08,0x4986a233,0xa88a141b,0x46623711,0x506e2198,0x22a85541,
    0xaa88a228,0x55c15510,0x2ab96ee2,0x0b21fe9c,0x2772c82e,0x4431d319,
    0x91910c8c,0x44323221,0x22530c8c,0x8cea0c8c,0x329219bb,0xb50d6a1b,
    0x99435a86,0x0d6a7712,0xb8d4cb57,0xab96ae5a,0x1b4c6a64,0x9a54c6a6,
    0x5e45551a,0x267533b9,0x2a67533a,0x8aaa7533,0x98aaa2aa,0x26599665,
    0x6cca3665,0x9b836228,0x3581b10d,0x0641643b,0x88ccee77,0x9dcb21ea,
    0x5cb2772c,0x94cee593,0x99cc772c,0x286215b9,0x30d26717,0x20349869,
    0x21a4c773,0x5c6726ab,0x9b9aae6a,0x56c3390d,0xb46c6720,0x6497319c,
    0x2d193b8b,0x32d1968c,0x2e6d1968,0x4b992e64,0x96659966,0xd98f6659,
    0x22ddc583,0xc8866385,0x9c882e19,0x2dc2330c,0xb9dcee77,0x9dcee773,
    0x5cee533b,0x6dd4ce63,0x5b129208,0x86930d26,0x32894349,0x950d261b,
    0x6ca8654d,0x24bb9b2a,0x951660ca,0x8654eaa1,0x327265bc,0x4e6a7350,
    0x2a73539a,0x5e4b7939,0x25996f25,0x25996659,0x307661d9,0x20cc1b83,
    0x10e06609,0x4a617903,0x545c490a,0x22151710,0x51710a8b,0x545c4a61,
    0x90618ee0,0x3b138994,0xb10cec43,0x81289433,0x000019d8,0x00354000,
    0x00000000,0x25a80000,0x25a96a5a,0x93d549ea,0x00604c0c,0x08002022,
    0x00000004,0x440c0020,0x00982080,0x00084000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x14000000,0x01103026,0x13101301,
    0x33050388,0x80402100,0x04088220,0x08808082,0x20409802,0x0cc41040,
    0x3010200c,0x22098130,0x88c41188,0x44110620,0x04462110,0x10103013,
    0x55c30404,0x41130622,0x15310998,0x41441414,0x19828819,0x99206030,
    0x2a28d452,0x4551d451,0x315752ab,0x8a6229a8,0x8546c41b,0x2a38a49b,
    0x5c4b9749,0x326530a9,0x26a29373,0x5225930a,0x86d19729,0x223b835a,
    0xa863a63b,0x341c5c34,0x26e19191,0x7b53a854,0x21d98362,0x4a3661ac,
    0x455528d9,0x442442aa,0x84884884,0x20848848,0x214d42a9,0xbb8cc29a,
    0x4dcc3ae4,0x5728cc82,0x05925dcb,0x5dc625d5,0x2628d1b1,0x2c8219bb,
    0x918a4ca6,0x4740ae3b,0x20d261ad,0xa8836e3b,0xd50c741e,0x25935d43,
    0x88ad193b,0x4c58a63a,0x4c3933bc,0xb98f663d,0x1d312e64,0x074c0e98,
    0x81d303a6,0x310a20e9,0x115cc453,0x4bb84533,0x4ee262dc,0xd570be9b,
    0x82c86cdc,0xb4ec55bb,0xb982a68d,0x2cc3118b,0x261864c1,0xcc8ae595,
    0x221a4c59,0x2e11223b,0x3a6225c5,0xb9dcd1b0,0x64629713,0x4c198a5d,
    0x4c5d52cd,0xbc87661d,0x79516f25,0x1e543ca8,0x87950f2a,0x28eae3ca,
    0x4a1b9477,0x826a533b,0xa64623aa,0xd952ebdb,0x3391255c,0x2aa29cdc,
    0x221c7554,0x4dcea2aa,0x21a98921,0x393911ab,0x4ec4494c,0x4db87321,
    0x70e2242a,0x8875d473,0x28510a8b,0x81a75cea,0xd50fcc5a,0x0127aa93,
    0x2e1f1170,0xf1170f88,0x5c3e22e1,0xf1170f88,0x010004c1,0x00102000,
    0x00000000,0x00022000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x2ae2aa80,0x304440c2,0x30c18825,0x5bb96a65,0x154c2662,0x41331013,
    0x44108808,0x42225540,0x1026259b,0x20023013,0x86662098,0x9884cc40,
    0x3104cc40,0x2018c422,0x1310c418,0x88446213,0x26110441,0x15cb572a,
    0x20c17955,0x4c3531a9,0x211b573a,0xb125cc10,0x8004dcc1,0x2030f268,
    0x4366e68c,0xa81928d9,0x2e28ea82,0x2e132a82,0x373255c2,0x49da9a6e,
    0x7099276a,0x2b662443,0x2e259554,0x6d4a3661,0x98b62659,0x31474c36,
    0x4caf6695,0x598ed665,0x1d316615,0xab8323d1,0x9ea896a6,0x27213530,
    0x368c8e71,0x322b879b,0x02e2245b,0x85734a60,0x9aea751b,0xa8f665bb,
    0xf1106e0c,0x8dc2ab87,0x5d4b771b,0x0ecb92e0,0x46dc3a93,0x986e371e,
    0xa8b3660e,0x2d996ee4,0x0b312b66,0x645b815b,0x2659b36a,0x4c3a7665,
    0x2e22cc4d,0x21951d9b,0x6432a6ca,0x41510beb,0x547370ca,0xa88a3239,
    0x0aba8003,0xa9a01111,0x26810dc3,0x0e0ecc1b,0x41e99837,0x1b8dc2db,
    0x525dcd57,0x0fa4c1c7,0xb8dc3a93,0x9c98f2a1,0x26ab92a5,0x0b7662d9,
    0xd30b303d,0x459a55c3,0x986d6659,0x885663dd,0x0001d9e8,0x09880100,
    0x00000000,0x3200e880,0x54098a02,0x4590249e,0x5dc73f33,0xb964b20e,
    0x541310eb,0x8eb6a023,0x64b23ada,0x2a1f1172,0xbb92e3ad,0xd1b516a6,
    0xd51276e1,0x500e99a8,0x236a5a8b,0x25f1b51e,0x271549ea,0x0000002d,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x02188000,0xadbb8283,0x3ba96ee4,
    0x262ba8a6,0x026a112c,0x82220221,0x10872080,0x11106040,0xb8546044,
    0x2aa35550,0x5554992a,0x00000000,0x00000000,0x00000000,0x2a000000,
    0x5ccae61a,0x5542ea09,0xa9aae58d,0x41d0a722,0x2d4ce668,0xa8d4ea77,
    0x0aa8ae5a,0x88dce611,0x82217532,0x188aa2aa,0x206aaa03,0x00000001,
    0x00000000,0x00000000,0x00000000,0x2371154c,0x155108b8,0xbb9a7aee,
    0x22988ee6,0x5caf24b9,0x98cc3352,0x4c622351,0x94c0e628,0x00000021,
    0x00000000,0x00000000,0x00000000,0x00000000,0x18020000,0x0000000c,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,
};

static signed short stb__times_bold_7_latin1_x[224]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__times_bold_7_latin1_y[224]={ 5,0,0,0,0,0,0,0,0,0,0,1,4,3,
4,0,0,0,0,0,0,0,0,0,0,0,2,2,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,2,0,2,0,2,0,2,0,0,
0,0,0,2,2,2,2,2,2,2,1,2,2,2,2,2,2,0,0,0,2,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,0,0,1,0,
0,0,0,0,0,2,2,3,0,0,0,1,0,0,0,2,0,2,4,0,0,2,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
 };
static unsigned short stb__times_bold_7_latin1_w[224]={ 0,2,3,4,3,6,5,2,3,2,3,4,2,2,
2,2,3,3,3,3,3,3,3,4,3,3,2,2,4,4,4,3,6,5,4,5,5,4,4,5,5,3,4,5,
4,6,5,5,4,5,5,4,4,5,5,7,5,5,5,2,2,2,4,5,2,4,4,3,4,3,3,4,4,2,
3,4,2,6,4,3,4,4,3,3,3,4,4,5,4,4,3,3,1,2,4,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,2,3,4,4,4,
1,3,3,5,2,4,4,2,5,5,3,4,2,2,2,4,4,2,2,2,2,4,5,5,5,3,5,5,5,5,
5,5,8,5,4,4,4,4,3,3,3,3,5,5,5,5,5,5,5,4,5,5,5,5,5,5,4,4,4,4,
4,4,4,4,5,3,3,3,3,3,3,2,3,3,3,4,3,3,3,3,3,4,3,4,4,4,4,4,4,4,
 };
static unsigned short stb__times_bold_7_latin1_h[224]={ 0,6,3,6,6,6,6,3,7,7,4,4,3,1,
2,6,6,5,5,6,5,6,6,6,6,6,4,5,4,2,4,6,7,5,5,6,5,5,5,6,5,5,6,5,
5,5,6,6,5,7,5,6,5,6,6,6,5,5,5,7,6,7,3,2,2,4,6,4,6,4,5,5,5,5,
7,5,5,3,3,4,5,5,3,4,5,4,4,4,3,5,3,7,7,7,2,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,6,7,6,4,5,
7,7,2,6,3,3,2,1,6,1,3,4,3,3,2,5,7,2,3,3,3,3,6,6,6,6,6,6,6,6,
6,6,5,7,6,6,6,6,6,6,6,6,5,7,7,7,7,7,7,4,6,7,7,7,7,6,5,6,6,6,
6,6,6,6,4,5,6,6,6,6,5,5,5,5,6,5,6,6,6,6,6,4,5,6,6,6,6,7,7,7,
 };
static unsigned short stb__times_bold_7_latin1_s[224]={ 254,79,67,82,87,91,98,86,30,16,6,
10,80,129,116,124,131,1,236,149,232,163,127,135,120,225,253,13,1,119,15,
153,86,97,103,114,79,26,118,167,160,156,187,166,172,177,197,219,151,34,123,
209,108,181,203,173,141,135,129,40,229,73,71,100,97,232,109,184,214,208,70,
65,60,57,82,48,94,20,27,217,21,16,32,193,5,188,237,221,41,240,46,
93,97,123,92,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,
247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,247,254,146,126,
192,212,250,121,99,106,157,61,36,124,129,140,132,76,242,50,83,110,74,19,
113,89,64,58,53,73,67,61,57,51,45,39,33,27,21,39,24,6,1,249,
244,240,236,232,228,85,43,49,55,61,67,76,227,187,130,115,103,109,164,245,
155,11,16,182,218,213,223,197,31,141,170,160,178,9,91,35,53,174,113,193,
197,201,205,209,203,147,136,150,145,104,11,6,1, };
static unsigned short stb__times_bold_7_latin1_t[224]={ 1,9,22,9,9,9,9,22,1,1,22,
22,22,22,22,9,9,16,9,9,9,9,9,9,9,9,15,16,22,22,22,
9,1,16,16,9,16,16,16,9,16,16,9,16,16,16,9,9,16,1,16,
9,16,9,9,9,16,16,16,1,9,1,22,22,22,15,9,16,9,16,16,
16,16,16,1,16,16,22,22,16,16,16,22,16,16,16,15,16,22,9,22,
1,1,1,22,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,1,9,1,
9,16,9,1,1,22,9,22,22,22,22,9,22,22,15,22,22,22,16,1,
22,22,22,22,22,9,9,9,9,9,9,9,9,9,9,16,1,9,9,1,
1,1,1,1,1,16,1,1,1,1,1,1,16,1,1,1,1,1,1,9,
1,9,9,1,1,1,1,16,16,1,1,1,1,16,16,16,16,1,16,1,
1,1,1,1,16,16,1,1,1,9,1,1,1, };
static unsigned short stb__times_bold_7_latin1_a[224]={ 25,34,56,51,51,101,84,28,
34,34,51,58,25,34,25,28,51,51,51,51,51,51,51,51,
51,51,34,34,58,58,58,51,94,73,67,73,73,67,62,79,
79,39,51,79,67,95,73,79,62,79,73,56,67,73,73,101,
73,73,67,34,28,34,59,51,34,51,56,45,56,45,34,51,
56,28,34,56,28,84,56,51,56,56,45,39,34,56,51,73,
51,51,45,40,22,40,53,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,25,34,51,51,51,51,22,51,
34,76,30,51,58,34,76,51,40,56,30,30,34,58,55,25,
34,30,33,51,76,76,76,51,73,73,73,73,73,73,101,73,
67,67,67,67,39,39,39,39,73,73,79,79,79,79,79,58,
79,73,73,73,73,73,62,56,51,51,51,51,51,51,73,45,
45,45,45,45,28,28,28,28,51,56,51,51,51,51,51,56,
51,56,56,56,56,51,56,51, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_bold_7_latin1_BITMAP_HEIGHT or STB_FONT_times_bold_7_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_bold_7_latin1(stb_fontchar font[STB_FONT_times_bold_7_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_times_bold_7_latin1_BITMAP_HEIGHT][STB_FONT_times_bold_7_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_bold_7_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_bold_7_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_bold_7_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_bold_7_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_bold_7_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_bold_7_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_bold_7_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__times_bold_7_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__times_bold_7_latin1_s[i] + stb__times_bold_7_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__times_bold_7_latin1_t[i] + stb__times_bold_7_latin1_h[i]) * recip_height;
            font[i].x0 = stb__times_bold_7_latin1_x[i];
            font[i].y0 = stb__times_bold_7_latin1_y[i];
            font[i].x1 = stb__times_bold_7_latin1_x[i] + stb__times_bold_7_latin1_w[i];
            font[i].y1 = stb__times_bold_7_latin1_y[i] + stb__times_bold_7_latin1_h[i];
            font[i].advance_int = (stb__times_bold_7_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__times_bold_7_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_bold_7_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_bold_7_latin1_s[i] + stb__times_bold_7_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_bold_7_latin1_t[i] + stb__times_bold_7_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_bold_7_latin1_x[i] - 0.5f;
            font[i].y0f = stb__times_bold_7_latin1_y[i] - 0.5f;
            font[i].x1f = stb__times_bold_7_latin1_x[i] + stb__times_bold_7_latin1_w[i] + 0.5f;
            font[i].y1f = stb__times_bold_7_latin1_y[i] + stb__times_bold_7_latin1_h[i] + 0.5f;
            font[i].advance = stb__times_bold_7_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_bold_7_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_bold_7_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_bold_7_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_bold_7_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_bold_7_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_bold_7_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_bold_7_latin1_LINE_SPACING
#endif

