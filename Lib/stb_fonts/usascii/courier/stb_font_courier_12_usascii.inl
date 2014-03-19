// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_12_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_12_usascii'.
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

#define STB_FONT_courier_12_usascii_BITMAP_WIDTH         128
#define STB_FONT_courier_12_usascii_BITMAP_HEIGHT         42
#define STB_FONT_courier_12_usascii_BITMAP_HEIGHT_POW2    64

#define STB_FONT_courier_12_usascii_FIRST_CHAR            32
#define STB_FONT_courier_12_usascii_NUM_CHARS             95

#define STB_FONT_courier_12_usascii_LINE_SPACING           6

static unsigned int stb__courier_12_usascii_pixels[]={
    0x08304140,0x54081c01,0x002a8001,0x88aaaa02,0x2a20c542,0x40c0aa80,
    0x805cc0ba,0x71055440,0x22894198,0x50607138,0x8071c757,0x710311c2,
    0x4c50c395,0x0c60c5c4,0x37391c2a,0x0e331c66,0x38675375,0x20c4b373,
    0x8905c312,0x188a0aaa,0x38700547,0x21455971,0x711c4703,0x20d4c155,
    0x514e08e3,0x851098e1,0x0a205381,0x05c48625,0x394098c4,0x11c0a81c,
    0x44098503,0x9bb88e22,0xd88554c0,0x4c71a82c,0x04cae530,0x0dd45910,
    0x44832512,0x8131881a,0x8380a872,0x130a0623,0x332a1828,0x170d4543,
    0x151c150e,0x3098cd4c,0x0a815075,0x24312851,0x2386202e,0x0a870718,
    0x70a06238,0x20770070,0x38051c31,0x4388640a,0x388c8983,0xa8625062,
    0x730c4121,0x0e141c75,0x446eae1c,0x4c281cab,0x29881dc4,0x45d0aaa6,
    0x32a62bb8,0xb9556541,0x989312ab,0x51387140,0x9bd88660,0x06651072,
    0x0008041c,0x00006604,0x08010004,0x41030a00,0x3ba80840,0x206a0844,
    0x000aa052,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x80000000,0x882a0000,0x500662aa,0x30001017,0x0dd4cc17,0x13510dcc,
    0x80204445,0x08100200,0x955500a6,0x0ee27261,0x01c070c4,0x75555037,
    0x4262ca98,0x2a2986c3,0x55cb1380,0x9643625a,0x2ee590d8,0xa8654950,
    0x4c500a0c,0x2e2188e0,0x2022e189,0x20a60a8b,0x94381428,0x64ce1c48,
    0x4a38262a,0x4c28cc28,0x4a226289,0xaa833142,0x381a981b,0x43713862,
    0xa8ec39a9,0x04c57571,0x1d45c380,0x140a2896,0x40ea070b,0x2954c43a,
    0x0e190514,0x188e0b88,0x0980cc33,0x8cc6a712,0x5c38200a,0x1555c399,
    0x21554c0a,0x1dc0a00a,0x22144d54,0x14145052,0x22131c31,0xb05406a2,
    0x44623328,0x70a28843,0x014050a6,0x20623314,0x2b871982,0x50155037,
    0x21d56414,0x55d42ab9,0x98aaee4a,0x2ae0baac,0x70dd64c3,0x410b8355,
    0x3bda82d9,0x2ef22bb8,0x98b2e21b,0xc86c790d,0x1d883980,0x00802059,
    0x10000000,0x01bb8020,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x10000000,0x10310111,0x02005401,0x0020054c,0x80100881,
    0x88111020,0x200828aa,0x44440888,0x4d440440,0x0443acab,0x220aab22,
    0x02aaee01,0xa9dcb30a,0x1ca892a4,0x642c9644,0x0b2a6391,0x0f2a0e47,
    0xc8a555e4,0x2ab21baa,0x4a13b50b,0x98a02a62,0x20dc4c40,0x2e0a0a08,
    0x546a2313,0x06a50282,0x0cc2818a,0x30155033,0x50c450c1,0x8280a038,
    0xa988398b,0x50530881,0x22311350,0x028289a8,0x2aae0575,0x06e28283,
    0x2ea60a31,0x2141d5c0,0x41405022,0x2d881b9b,0x0a037910,0x9888c5ca,
    0x17045053,0x05117035,0x83355305,0x98984bbb,0x214145c0,0x0a028d72,
    0x1a98838a,0x94140088,0x142111a8,0x50714514,0x0620140c,0x40260445,
    0x88285142,0x5e5d42cb,0x70645b30,0x05970f23,0x36617975,0x5432e371,
    0x977b710d,0xb11ccb66,0x1e5d4b23,0x432e4b88,0x30af20ca,0x5ec7777b,
    0x0000003b,0x00000000,0x00000000,0x00000000,0x22054c00,0x1302ae00,
    0x22510660,0x314c730b,0x20151405,0x44a22aa8,0x4c055cc2,0x5501809a,
    0x08815501,0x070d44d4,0x23875591,0x2a20a263,0x14452d42,0x15414251,
    0x2851c154,0x42a14106,0x70b82829,0x444471c1,0x40e09640,0x14140262,
    0x3944029c,0x2618baa8,0x88ae200b,0x983141bb,0x330144aa,0x25062137,
    0x951bbbc9,0x9b983859,0x40eaae0a,0x28c42828,0x20a2a0d4,0x05cc2aaa,
    0x15043710,0x87144514,0x826e6602,0x2e028622,0x85528283,0x14c1988b,
    0x224ce428,0x2a82440e,0x5502ea0b,0xa9875590,0x326ae2cb,0x206aaa61,
    0x4c2aa982,0x50411baa,0x65d4c57b,0x014c50a0,0x26399885,0x80002882,
    0x201002a2,0x40100200,0x00010001,0x2eef6600,0xba92ef61,0x5c04b83c,
    0x0000002c,0x00000000,0x00000000,0x00000000,0x8d42e200,0x42e63aa9,
    0x86e6a22a,0x540b8b9a,0x0a266531,0x08111103,0x40a842ea,0x0000aaaa,
    0x00000000,0x5128e266,0x23902a28,0x7c2a4a63,0x9a72eb50,0x2aaa20ab,
    0x3a84d71a,0x02aaaa14,0x00000000,0x0e095000,0x43141c26,0x2498a509,
    0x2ab17549,0x55554470,0x00000001,0x00000000,0x0e14dc40,0x862819a8,
    0x4098a509,0x00006111,0x0dddddcc,0x00000000,0x36200000,0x32ef25b1,
    0x8ec42540,0x0652772c,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,
};

static signed short stb__courier_12_usascii_x[95]={ 0,2,1,0,1,0,1,2,3,1,0,0,1,0,
2,1,1,1,0,1,1,1,1,1,1,1,2,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,2,0,0,0,0,0,1,0,0,0,
0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,2,0,0, };
static signed short stb__courier_12_usascii_y[95]={ 8,1,1,1,0,1,2,1,1,1,1,2,6,4,
6,0,1,1,1,1,1,1,1,1,1,1,3,3,2,3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,10,1,3,1,3,1,3,1,3,1,1,
1,1,1,3,3,3,3,3,3,3,1,3,3,3,3,3,3,1,1,1,4, };
static unsigned short stb__courier_12_usascii_w[95]={ 0,2,4,6,5,6,5,2,2,3,4,6,3,6,
2,5,5,5,6,5,5,5,5,5,5,5,2,3,6,6,6,4,5,7,6,6,6,6,6,6,6,5,7,7,
6,7,6,6,6,6,7,6,6,6,7,7,6,6,5,2,4,2,5,7,3,6,6,6,7,6,5,6,6,6,
5,7,6,7,6,6,6,7,6,5,6,6,7,7,6,7,5,3,2,3,6, };
static unsigned short stb__courier_12_usascii_h[95]={ 0,8,4,8,9,8,7,4,9,9,5,6,4,2,
3,9,8,7,7,8,7,8,8,8,8,8,6,7,6,3,6,8,8,7,7,8,7,7,7,8,7,7,8,7,
7,7,7,8,7,9,7,8,7,8,7,7,7,7,7,9,9,9,4,1,2,6,8,6,8,6,7,7,7,7,
9,7,7,5,5,6,7,7,5,6,8,6,5,6,5,7,5,9,9,9,2, };
static unsigned short stb__courier_12_usascii_s[95]={ 55,75,88,78,1,85,1,85,18,21,115,
94,81,120,106,46,103,21,14,122,27,23,36,69,92,109,125,33,53,99,60,
98,57,96,7,42,118,111,104,115,75,82,49,67,60,52,45,62,31,31,15,
1,1,8,111,103,96,89,83,38,41,52,93,109,116,80,29,87,15,108,70,
76,119,8,25,23,38,73,66,101,63,88,120,67,55,73,58,45,45,37,52,
14,11,7,109, };
static unsigned short stb__courier_12_usascii_t[95]={ 10,1,35,1,1,1,28,35,1,1,28,
28,35,35,35,1,1,28,28,1,28,11,11,1,1,1,20,28,28,35,28,
1,11,20,28,11,20,20,20,1,20,20,11,20,20,20,20,1,20,1,20,
11,20,11,11,11,11,11,11,1,1,1,35,38,35,28,11,28,11,28,11,
11,11,20,1,20,20,35,35,28,11,20,28,28,1,28,35,28,35,28,35,
1,1,1,35, };
static unsigned short stb__courier_12_usascii_a[95]={ 102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,
102,102,102,102,102,102,102, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_12_usascii_BITMAP_HEIGHT or STB_FONT_courier_12_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_12_usascii(stb_fontchar font[STB_FONT_courier_12_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_courier_12_usascii_BITMAP_HEIGHT][STB_FONT_courier_12_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_12_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_12_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_12_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_12_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_12_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_12_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_12_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__courier_12_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__courier_12_usascii_s[i] + stb__courier_12_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__courier_12_usascii_t[i] + stb__courier_12_usascii_h[i]) * recip_height;
            font[i].x0 = stb__courier_12_usascii_x[i];
            font[i].y0 = stb__courier_12_usascii_y[i];
            font[i].x1 = stb__courier_12_usascii_x[i] + stb__courier_12_usascii_w[i];
            font[i].y1 = stb__courier_12_usascii_y[i] + stb__courier_12_usascii_h[i];
            font[i].advance_int = (stb__courier_12_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__courier_12_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_12_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_12_usascii_s[i] + stb__courier_12_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_12_usascii_t[i] + stb__courier_12_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_12_usascii_x[i] - 0.5f;
            font[i].y0f = stb__courier_12_usascii_y[i] - 0.5f;
            font[i].x1f = stb__courier_12_usascii_x[i] + stb__courier_12_usascii_w[i] + 0.5f;
            font[i].y1f = stb__courier_12_usascii_y[i] + stb__courier_12_usascii_h[i] + 0.5f;
            font[i].advance = stb__courier_12_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_12_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_12_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_12_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_12_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_12_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_12_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_12_usascii_LINE_SPACING
#endif

