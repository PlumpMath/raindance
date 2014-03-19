// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_13_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_13_usascii'.
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

#define STB_FONT_courier_13_usascii_BITMAP_WIDTH         128
#define STB_FONT_courier_13_usascii_BITMAP_HEIGHT         48
#define STB_FONT_courier_13_usascii_BITMAP_HEIGHT_POW2    64

#define STB_FONT_courier_13_usascii_FIRST_CHAR            32
#define STB_FONT_courier_13_usascii_NUM_CHARS             95

#define STB_FONT_courier_13_usascii_LINE_SPACING           6

static unsigned int stb__courier_13_usascii_pixels[]={
    0x40000004,0x11020001,0x00000103,0x28014002,0x80004088,0x5c3201b9,
    0x4510b8e0,0x5e54952d,0x414cc2a1,0x2b21c546,0x8dd5dcc4,0x261cbcb9,
    0x2aaea3ab,0x44150070,0x075712bd,0x1546e24c,0x2428e280,0x86233387,
    0x4a2c0ca4,0x47144263,0x20906c58,0x05101528,0x51142438,0xa850a1c0,
    0x0a38a3aa,0x0a670e35,0x431a88a6,0x1cb6b664,0x89120c4e,0xba85c40a,
    0x43301c1b,0x1a94c0a9,0x098e6f26,0x38e380cc,0x38739853,0x10dc2ee2,
    0x39c48355,0x8b31c70e,0x432e0e0d,0x81445308,0xb0d55d43,0x89624899,
    0x32380541,0x27103270,0x0c9c09c3,0x543054c6,0x23871cbd,0x4dc39ab8,
    0x1c0e00ba,0x4530660e,0x0cca2173,0x8e038712,0x4a6144e2,0x1b9ac9c3,
    0x40508835,0x04c2e18b,0x4e003870,0x38330a20,0x511ce388,0xac88b11c,
    0x8e28e00b,0x89c38642,0x2a0e20c8,0x19b8f119,0xda80ef22,0x32e05b31,
    0x177970ba,0xba814470,0xa875711b,0x6641c9ac,0x86670099,0x0e1c90e3,
    0x50200907,0x99801013,0x00803310,0x40284c01,0x88040100,0x1baa8331,
    0x04426085,0x2200aa55,0x00000000,0x00000000,0x80000000,0x00000018,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00100008,0x04000000,0x11c80600,0x2ea20039,0x02ccc880,
    0x00005dd4,0x3126e1b3,0x55c19357,0x4ceaab23,0x30cbb804,0x4a889009,
    0x470cc070,0x3227303a,0x49703100,0x545750e2,0x30c6444b,0x8cc751c3,
    0x070cc138,0x00070098,0x0556d41c,0x381c199c,0x441881c4,0x2038703a,
    0x98dd4a03,0x120a8e21,0x4377370e,0x5dc1abc9,0x40ea20cb,0x39980703,
    0x1c1c5938,0x4439c188,0x83805c1b,0x1c315171,0x1dce4475,0x5438361c,
    0x20e21700,0x200e0703,0x1c1bb81c,0x330c451c,0xba98130e,0x23e61c28,
    0x55c43593,0x28891838,0x00a82a24,0x07038387,0x1ec0e00e,0x31c35054,
    0x006d5641,0x841c2cce,0x50380264,0x0e0d8285,0x7070e015,0x1d55c0e0,
    0x1c5c12ea,0x2ee1e55c,0x89b0e02a,0x01c1cbb8,0x32aa0255,0x0e0f2a20,
    0x4c375593,0x47621abc,0x55b550da,0x220ab6aa,0x3a819980,0x00800395,
    0x2000836a,0x7701ada9,0x00203307,0x00000040,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x32e59300,0x35550080,
    0x5541aba8,0x06eee62a,0x00005775,0xa8eeeee2,0x2ea5730b,0x261711bb,
    0x51d4ae0b,0x54731b85,0x21c3800b,0x885c3ab9,0x172442a6,0x94298e2c,
    0x0aeee238,0x429c620e,0x505471c2,0x23870a61,0x2c8930c8,0x38702a8e,
    0x10a25114,0x20144214,0x7098a1c3,0x8c41c0c1,0x231c3833,0x87073828,
    0x215ce623,0x2b8870bb,0x31980e1c,0x315d4403,0x0bbab803,0x2ea1cc5c,
    0x0ef6ee0b,0x0151981c,0x2e032207,0x2a623bbb,0x0739c2a8,0x40e1c322,
    0x4400a638,0x87722533,0x1ac8398b,0x700e0e0c,0x10a839c0,0x4470e070,
    0x22a70ab1,0x50e1b883,0x20890730,0x1c3891c3,0x55902851,0x03807037,
    0x1c510a2a,0x311c381c,0x44771c28,0x0bac882b,0xbad8814c,0x986eab62,
    0x8f664aac,0x2017b52a,0x6dc40600,0x7790b103,0x21edc497,0x2a1b52d8,
    0x3665930c,0x04014912,0x083aaad8,0x00088020,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x2ee60000,0x15ddc2bb,
    0x985cc2e2,0x3ba81bbb,0x23731ba8,0x3b983bb8,0x36600173,0x00377730,
    0x5ddc0000,0x0e0001bb,0x150e2287,0x414470a6,0x508cc1aa,0x1a8e0381,
    0x06441730,0x20eee60e,0x54c3abb8,0x8a0c40ab,0x3e60bbb8,0x214084e0,
    0x1c1c5c19,0x2a21ce0a,0x9c070558,0x002b880b,0x4283300e,0x2310a1c3,
    0x788e1410,0x44282ddc,0xbbb82c42,0xa839440d,0x2038299a,0x203b84bb,
    0xbba8383a,0x79101c1c,0x3bd88777,0x27161c28,0x54188501,0x2a1c382a,
    0xb9dc1cbb,0x8b822382,0xe815c438,0x06628381,0x2201c087,0x04387031,
    0x21c2850e,0x54381519,0x73b850e0,0x4704c705,0x221b8819,0x75570704,
    0x43aab989,0x0c43baa9,0x40175730,0x645bbbd9,0x47660bbb,0x777b30d9,
    0x2d986545,0xb711d472,0x8f661977,0x4c03301c,0x40041bdb,0x3cb80400,
    0x00000040,0x00000000,0x00000000,0x00000000,0x00000000,0x44722193,
    0x65400ae4,0x4a96c3b8,0xb8e54726,0x3a802cbb,0x0430fdaa,0x02aaaaa2,
    0x22799990,0x00aaaaaa,0x44777795,0x3940cbbc,0x8141c387,0x0717102b,
    0x21c31445,0xb31740c8,0x1707cc3a,0x77044444,0x204444a7,0x20088888,
    0x4170a928,0x21c64542,0x177371c3,0x40744038,0x4e0e0728,0x16911a23,
    0x2eee2101,0x005c40bb,0x538c4000,0x54aa1c38,0x5b8711c2,0x039c4070,
    0x4508e0e7,0x02103128,0x00000000,0x214e3100,0x0e4e61c3,0x4436eee2,
    0x5dedc19a,0x06d47a20,0x77970362,0x00000007,0x80000000,0x2255194a,
    0x0000b32d,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,
};

static signed short stb__courier_13_usascii_x[95]={ 0,2,1,1,1,1,1,2,3,1,0,0,1,1,
2,1,1,1,0,1,1,1,1,1,1,1,2,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,
0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,2,0,0,0,0,0,1,0,0,1,
1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,3,0,1, };
static signed short stb__courier_13_usascii_y[95]={ 9,1,2,1,1,1,2,1,1,1,1,2,7,5,
7,1,1,1,1,1,1,1,1,1,1,1,4,4,2,4,2,2,1,2,2,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,11,1,3,1,3,1,3,1,3,1,1,
1,1,1,3,3,3,3,3,4,3,2,4,4,4,4,4,4,1,1,1,4, };
static unsigned short stb__courier_13_usascii_w[95]={ 0,3,5,5,5,5,5,3,3,3,5,7,4,5,
3,5,5,5,6,5,5,5,5,5,5,5,3,4,6,7,6,5,5,7,7,7,7,7,7,7,7,5,7,7,
7,7,7,6,6,7,7,5,7,7,7,7,7,7,5,2,5,2,5,8,3,7,7,7,7,7,6,7,7,5,
4,6,5,7,7,7,7,7,7,5,7,7,7,7,7,7,5,3,1,3,5, };
static unsigned short stb__courier_13_usascii_h[95]={ 0,9,4,9,10,9,8,5,10,10,6,7,4,2,
3,9,9,8,8,9,8,9,9,9,9,9,6,7,7,3,7,8,9,7,7,8,7,7,7,8,7,7,8,7,
7,7,7,8,7,9,7,8,7,8,7,7,7,7,7,10,9,10,4,2,3,7,9,7,9,7,8,9,8,8,
11,8,8,6,6,7,9,9,5,7,8,6,5,6,5,8,5,10,10,10,3, };
static unsigned short stb__courier_13_usascii_s[95]={ 126,42,80,46,26,36,112,123,32,16,33,
59,75,108,86,92,52,118,9,74,100,80,98,21,104,15,124,72,65,94,121,
106,1,33,25,16,9,1,107,30,97,77,92,57,49,105,113,85,46,118,38,
24,67,1,75,41,17,89,83,20,86,23,69,114,90,83,27,91,110,99,35,
7,42,50,1,78,56,1,9,115,66,58,39,53,62,25,55,17,47,70,63,
12,10,6,102, };
static unsigned short stb__courier_13_usascii_t[95]={ 1,1,40,1,1,1,13,32,1,1,40,
23,40,40,40,1,1,13,23,1,13,1,1,13,1,13,13,32,32,40,23,
13,13,32,32,23,32,32,32,23,23,32,13,32,32,23,23,13,23,1,23,
23,23,23,23,32,32,23,23,1,1,1,40,40,40,32,13,32,1,32,13,
13,13,13,1,13,13,40,40,32,1,1,40,23,13,40,40,40,40,13,40,
1,1,1,40, };
static unsigned short stb__courier_13_usascii_a[95]={ 110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_13_usascii_BITMAP_HEIGHT or STB_FONT_courier_13_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_13_usascii(stb_fontchar font[STB_FONT_courier_13_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_courier_13_usascii_BITMAP_HEIGHT][STB_FONT_courier_13_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_13_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_13_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_13_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_13_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_13_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_13_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_13_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__courier_13_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__courier_13_usascii_s[i] + stb__courier_13_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__courier_13_usascii_t[i] + stb__courier_13_usascii_h[i]) * recip_height;
            font[i].x0 = stb__courier_13_usascii_x[i];
            font[i].y0 = stb__courier_13_usascii_y[i];
            font[i].x1 = stb__courier_13_usascii_x[i] + stb__courier_13_usascii_w[i];
            font[i].y1 = stb__courier_13_usascii_y[i] + stb__courier_13_usascii_h[i];
            font[i].advance_int = (stb__courier_13_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__courier_13_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_13_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_13_usascii_s[i] + stb__courier_13_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_13_usascii_t[i] + stb__courier_13_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_13_usascii_x[i] - 0.5f;
            font[i].y0f = stb__courier_13_usascii_y[i] - 0.5f;
            font[i].x1f = stb__courier_13_usascii_x[i] + stb__courier_13_usascii_w[i] + 0.5f;
            font[i].y1f = stb__courier_13_usascii_y[i] + stb__courier_13_usascii_h[i] + 0.5f;
            font[i].advance = stb__courier_13_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_13_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_13_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_13_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_13_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_13_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_13_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_13_usascii_LINE_SPACING
#endif

