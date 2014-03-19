// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_bold_15_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_bold_15_usascii'.
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

#define STB_FONT_courier_bold_15_usascii_BITMAP_WIDTH         128
#define STB_FONT_courier_bold_15_usascii_BITMAP_HEIGHT         62
#define STB_FONT_courier_bold_15_usascii_BITMAP_HEIGHT_POW2    64

#define STB_FONT_courier_bold_15_usascii_FIRST_CHAR            32
#define STB_FONT_courier_bold_15_usascii_NUM_CHARS             95

#define STB_FONT_courier_bold_15_usascii_LINE_SPACING           7

static unsigned int stb__courier_bold_15_usascii_pixels[]={
    0x81102600,0x44260008,0x18015101,0x5300c6aa,0x00017505,0x00000000,
    0x91e36e00,0x9f32643f,0x32f984c8,0x403f303f,0x3a9ff35c,0x221ffb04,
    0x75c46ccd,0xcffb882e,0x7fe76c5e,0x1775c40c,0xb0defec8,0x6c3cee4b,
    0x5c4c9324,0xd1b22eff,0x85f1000b,0x9b01f54c,0xfd8764a8,0x5f745fcb,
    0x7fd42ffb,0x5fec6dac,0x55f6c5fb,0x664991fc,0x9324d87a,0x3aefea4c,
    0x0fa85f13,0x701dddd9,0x41f4990d,0x75c4e44d,0x97cc1f51,0x3f83dc79,
    0x260fa974,0x0c81f10f,0x3ffff677,0x6c9926c6,0x98443ae4,0xa997c40f,
    0x83f80fba,0x1361ee4c,0x323b991d,0x41f34e86,0x7c49f07b,0x2e7d0d92,
    0xde98cc06,0xc9fdc1ed,0x7ec45f94,0x1fc1ee3e,0x41ee07cc,0x9b0be24c,
    0x323968e8,0x33b63d85,0x9bff07fd,0x9ec2e4dd,0x07ddb15c,0xd90d99d1,
    0x4274d323,0x01f53eb9,0xe81f305f,0x46b89903,0x7f5cec4d,0x07c41f52,
    0x20f9bb71,0x2e0bddcf,0x7d43e20f,0xf887f970,0x26c5ffff,0x45d26499,
    0xf983f35c,0x3ea0f981,0x2f889900,0x26279136,0x1baabba0,0x00be0f30,
    0x44bd55dd,0x81fa9adf,0x4d85dbf8,0x3fa4c932,0x913a2fed,0x4e83e60f,
    0xd9b21320,0x442874c4,0x6d403ffd,0x016fdc3f,0x9817ff91,0x880dfffe,
    0x1f443d9f,0xaa876499,0x887dc1ee,0x7d4f503f,0xf109b300,0xdf707763,
    0xcbdfe88b,0xd8bdd902,0x200004ee,0x1f47c401,0x224c83b6,0x2e826c4e,
    0x5ecca8d5,0x27fcc136,0x01ffb5d8,0x37b37a60,0x00000001,0x00084000,
    0x8000d400,0x00543deb,0x00003100,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x2aaaa000,0xba81541a,0x41555440,0x3000001a,
    0x40550017,0x0054c2b9,0x00ab8800,0x1d880440,0x457ffffe,0xfb10ffef,
    0xffffb8df,0xfc99fe21,0x3ae24edf,0x7f7ec4df,0x221fe600,0x0ff46efe,
    0x06eff640,0x4c1fddf7,0x37663efd,0x82e2e883,0xba74b94e,0x406b8fe6,
    0x3f2b7a6f,0x3aafae1e,0x02f43ea6,0x803ba1e6,0x55f6c01f,0x4d8a61fd,
    0x64faefb2,0x3f1000d0,0x4da745b2,0x0bceb972,0x5e8f56f8,0x35c951f4,
    0xdffc88f7,0xf00cfcc7,0x7cc19ffb,0x74c407c0,0xb55c8a64,0x6b800299,
    0x743fffe2,0xdefa9ae2,0x46aaf42f,0x0defdc5d,0x83fe67e2,0x5c7fcade,
    0xff81efff,0x01ae6dac,0xc880fff8,0x8fb3263f,0xfb93a06c,0x5c7d3fcc,
    0x4d8b9046,0x217ee73e,0x7e44fec9,0x41f30fef,0x646fdc7c,0x47e24f85,
    0x3aa2005c,0x3b22fc84,0x881741cc,0xb5c93a1f,0x8d5026cb,0x3bff6a19,
    0x221ea245,0xf71ae6d9,0x81f30fa8,0x0fa9f43f,0x0cc3d400,0x5996d6c2,
    0x33db1ae0,0x3eabea9d,0x13aa6b21,0x3e25c840,0x2626d99c,0x33e21fda,
    0x3e21fea9,0x77cc6c9c,0x3ba0fc9a,0x26e2ea9a,0x20085da9,0xc8022936,
    0x077ff443,0xfec85df9,0x2e26c0cf,0x3ba22fdc,0x3fee1dff,0xeffda81c,
    0x0f7fd47f,0x0b7ffbfe,0xd89fffb1,0x6e80efff,0x0001db70,0x10020110,
    0x16f6c040,0x40020110,0x88008008,0x00400800,0x00008022,0x00000000,
    0x00000000,0x00000000,0x20000000,0x23bae1a8,0x0d443ee8,0x035303b8,
    0x0aa202a0,0xdd90ae60,0xe887dd75,0x02985eee,0x06aa2154,0x3b6237ae,
    0x3ffa1322,0x7ecbf33f,0x203ffe61,0x009f904c,0x0df507f1,0x30ffefa8,
    0x83f9339f,0x322deaa8,0x1bea04ff,0xfd309ff7,0x44c87be2,0x26b810f9,
    0xd81ae43f,0x26c5eeff,0x2035c000,0x21f8fa3f,0x2a1f407a,0x1bfa04da,
    0xccf8826c,0x77f6400f,0x3ddfc44e,0xdea807dc,0x7ff6c1aa,0x81f7540d,
    0x045ee8eb,0x1ea1f93a,0x413207d0,0x09b06bfb,0x4c00ffcc,0xfb81aafc,
    0xdadfd83f,0x7fb02640,0x4ea889d5,0x05bf7d70,0x543f07ec,0x207d1227,
    0x6abf884c,0x7fcc09b0,0x03d41981,0x7d7d43fc,0x3604c86f,0x826c1724,
    0x36204ffb,0x4d517c1f,0x4c81f479,0xb07b9fd8,0x3f33e209,0x01ea3740,
    0x93f507f1,0x733d907f,0x20b926c7,0x1ddf704d,0xdb03dd10,0x5fcc7d35,
    0x09901fb9,0xb09fffff,0xd11dd109,0xf930441d,0x7ee4c155,0x1ffffb02,
    0x12effe88,0x983b61bd,0x3221adea,0xf10afd8e,0x6c43557f,0x3ae20cff,
    0xdea882ff,0x3f6a660a,0x86b7aa60,0x4ff99ffd,0x93ffffa0,0x2204eeea,
    0x7dc08800,0xf13ffaaf,0x7d4dffff,0x3e67ff76,0x0085ffff,0x3fff6008,
    0x24ffc85f,0x006fffff,0x00000000,0x00000000,0x00000000,0x00000000,
    0x3bbaa000,0x4fb62eee,0x8bb64eea,0x3bbaa5ea,0xceeed885,0x53bbbb21,
    0x1eeaaee9,0xdb11bdb1,0x2237ae1b,0xdddd73ee,0x6f775cdd,0x4eeeec82,
    0x77e44088,0x56f575c4,0x263fea2f,0xe9bf21fc,0x0b3ea24f,0x87eddfdc,
    0xd11adea9,0x641db33b,0xe98fee3f,0x3a63df16,0x3e67caad,0x6ec3fdbc,
    0x44c84fba,0x2e5fbbee,0xff0be9b6,0x3ff51e6b,0x05d07ff3,0xd87d0fc4,
    0x21724d84,0x3e61ae3f,0xba6c0fba,0x1f717c68,0x5dc6d9ec,0x20f9bcdd,
    0x536511f8,0x4dfdfc0b,0x6eeef547,0x2202e83e,0x4d85f51f,0x85ecced8,
    0x7dc0fa6b,0x0fded83f,0x887e22f8,0x7f540fb8,0x220faaef,0x3e04d82f,
    0x7547afba,0xe83eaff9,0xfff88262,0xfd84d84f,0x9f885fee,0x41ba00fa,
    0x2f80fefd,0x04bea0fc,0x9df8bfee,0x409b07d9,0x6a8ffd2f,0x8ba0fadd,
    0x02afe24d,0xb926c26c,0x90137760,0x0da53609,0x220f98be,0xbaf8f34f,
    0x03bffa26,0x3e20b7aa,0x7dc7f98c,0x224f9889,0x24eaacfa,0xea882bfa,
    0x11bd10ad,0x3ff301db,0x2216f540,0x12faaade,0xe8bf759f,0x1047caaf,
    0x3fea0110,0x9ffe41ff,0x23ffe27c,0xff50fff8,0x3e29ffff,0x7fec1fff,
    0x77ff75ff,0x81ba07ff,0x321ffff9,0x92ffffff,0xff09dfff,0x0000ffff,
    0x00000000,0x00000000,0x00000000,0x75c00000,0xed80bdee,0x39dd705e,
    0x288007dd,0x0a800000,0xeed80000,0x3ae5ee99,0xee882dee,0x1984eeee,
    0x9d75bd30,0x303ff950,0x83bf55bd,0x263dfec8,0x7f5c02ef,0x1fea804e,
    0x117bfaa2,0xed819fd7,0x264fa88a,0x443fcade,0x85daabfc,0x7b93604c,
    0x3609bbb0,0x5d904fac,0xdfc88bd5,0x3f557501,0x9033fa60,0x741fb57f,
    0xbd45ebad,0x24d85f4d,0x7137986a,0x76c09b09,0xaf884fdc,0x5fed80fa,
    0x80b37ea0,0x5c40dfd9,0x7ec43fed,0x2485f00d,0x0fdcccf9,0x3e7fe7e6,
    0x27dd6ec1,0x221f67cc,0xd82adeaa,0x5c0efeef,0xfd83fbaf,0xb71103fd,
    0x27fcc09f,0x90ff2fba,0x07e203df,0xeeeeefa8,0x33fb3e21,0x37ffec0f,
    0x4c3fef98,0x41eeffee,0xdd0fe24d,0x29b0dddd,0x99cf80fa,0x0dfd986c,
    0x67dccfcc,0x406fec40,0x22c99adc,0x40ba99cf,0xd87fccff,0x2f305f74,
    0x4413601a,0x23fbaade,0x88bee2fa,0xe83bb1de,0x3221dfff,0x3ff601ef,
    0xfd302fff,0xdfffd889,0x37fff660,0x37ccffc0,0x17dc77a2,0x9b006fee,
    0x3fffff20,0x223ffe24,0xbff90fff,0x404c1be6,0x031002e9,0x0101ea80,
    0xe9ba0188,0xfb2ffe45,0x03fffe61,0x000003b8,0x00000000,0x00000000,
    0x00000000,0x00000000,0xd93eb800,0xa7777649,0x5eea9eed,0x3dd55dd3,
    0x49db276c,0x999950ea,0x4c098599,0x2000fbaf,0x5532a848,0x3bba2355,
    0x6f4c5fce,0x676c0cfe,0x29d30efb,0x3af765d9,0xd11bd32f,0x2ebf623d,
    0x2abee0cf,0xa9722faa,0x21cccccc,0x27e20ef8,0x44f7d479,0x65ba2d44,
    0x3f24eeee,0x222fafdb,0x4c3eabfe,0x321cbffd,0xfa8996e4,0x17c47d43,
    0xaf81ffdc,0x20fc7aff,0x74199999,0x468bc5ed,0x086efdaf,0x32d50004,
    0x2e4c85d5,0x9900ec85,0x40bea2dc,0xff906cbe,0x3bffb609,0xfff91265,
    0x23b29fff,0x0428a4f8,0x80000175,0x90bab96a,0x02642dc9,0x21dd51b9,
    0x545badfa,0x57ec42ff,0x67e40dfa,0x888803fc,0x2982a088,0x55510000,
    0x80155555,0x49d5c8fb,0x41d90dd8,0xf981add9,0xffd2feff,0x70dd0dff,
    0x87ff55ff,0x001f99fa,0x40000000,0xfffffffa,0x33fe202f,0xf70feafc,
    0x225ff35f,0x101fffff,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_bold_15_usascii_x[95]={ 0,2,1,0,1,1,1,3,3,1,1,0,2,1,
2,1,1,1,0,0,0,0,1,0,1,1,2,2,-1,0,0,1,1,-1,0,0,0,0,0,0,0,1,0,0,
0,-1,-1,0,0,0,0,0,0,0,-1,-1,0,0,0,3,1,1,1,-1,2,0,-1,0,0,0,0,0,0,0,
1,0,0,-1,0,0,-1,0,0,0,0,0,0,-1,0,0,1,2,3,2,0, };
static signed short stb__courier_bold_15_usascii_y[95]={ 11,2,3,1,1,2,3,2,2,2,2,3,9,6,
9,1,2,2,2,2,2,2,2,2,2,2,5,5,3,5,3,2,2,3,3,2,3,3,3,2,3,3,3,3,
3,3,3,2,3,2,3,2,3,3,3,3,3,3,3,2,1,2,2,13,2,4,2,4,2,4,2,4,2,2,
2,2,2,4,4,4,4,4,4,4,3,5,5,5,5,5,5,2,2,2,5, };
static unsigned short stb__courier_bold_15_usascii_w[95]={ 0,3,6,8,6,6,7,2,4,4,6,8,4,6,
3,6,6,6,7,8,7,8,7,7,6,7,3,4,9,8,9,6,6,10,8,8,8,8,8,8,8,6,9,9,
8,10,9,8,8,8,9,8,8,8,10,10,8,8,8,4,6,4,6,10,4,8,9,8,9,8,8,8,8,8,
6,8,8,10,8,8,9,9,8,8,8,8,8,9,8,8,6,4,2,4,8, };
static unsigned short stb__courier_bold_15_usascii_h[95]={ 0,10,4,12,12,10,9,5,12,12,7,8,5,2,
3,12,10,9,9,10,9,10,10,10,10,10,7,8,8,5,8,10,11,8,8,10,8,8,8,10,8,8,9,8,
8,8,8,10,8,11,8,10,8,9,8,8,8,8,8,12,12,12,5,2,3,8,10,8,10,8,9,10,9,9,
12,9,9,7,7,8,10,10,7,8,9,7,6,6,6,9,6,12,12,12,4, };
static unsigned short stb__courier_bold_15_usascii_s[95]={ 125,32,95,1,23,115,19,125,30,35,121,
117,74,120,116,47,16,90,63,99,97,23,72,1,9,54,123,122,59,79,40,
108,71,10,1,90,103,94,108,116,65,58,80,21,40,29,19,107,49,78,98,
45,10,71,74,87,114,85,112,66,59,54,88,111,111,50,80,69,62,78,1,
36,36,45,40,54,105,1,12,1,97,87,21,31,27,30,46,64,55,10,39,
18,15,10,102, };
static unsigned short stb__courier_bold_15_usascii_t[95]={ 7,14,53,1,1,14,25,1,1,1,35,
44,53,53,53,1,14,25,25,14,25,14,14,14,14,14,25,14,44,53,44,
14,1,44,44,14,35,35,44,1,35,35,25,44,35,35,35,1,35,1,44,
14,35,25,35,44,25,35,35,1,1,1,53,57,53,44,14,44,14,44,25,
14,25,25,1,25,25,53,53,35,1,1,53,44,25,53,53,53,53,25,53,
1,1,1,53, };
static unsigned short stb__courier_bold_15_usascii_a[95]={ 127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_bold_15_usascii_BITMAP_HEIGHT or STB_FONT_courier_bold_15_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_bold_15_usascii(stb_fontchar font[STB_FONT_courier_bold_15_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_courier_bold_15_usascii_BITMAP_HEIGHT][STB_FONT_courier_bold_15_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_bold_15_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_bold_15_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_bold_15_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_bold_15_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_bold_15_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_bold_15_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_bold_15_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__courier_bold_15_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__courier_bold_15_usascii_s[i] + stb__courier_bold_15_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__courier_bold_15_usascii_t[i] + stb__courier_bold_15_usascii_h[i]) * recip_height;
            font[i].x0 = stb__courier_bold_15_usascii_x[i];
            font[i].y0 = stb__courier_bold_15_usascii_y[i];
            font[i].x1 = stb__courier_bold_15_usascii_x[i] + stb__courier_bold_15_usascii_w[i];
            font[i].y1 = stb__courier_bold_15_usascii_y[i] + stb__courier_bold_15_usascii_h[i];
            font[i].advance_int = (stb__courier_bold_15_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__courier_bold_15_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_bold_15_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_bold_15_usascii_s[i] + stb__courier_bold_15_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_bold_15_usascii_t[i] + stb__courier_bold_15_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_bold_15_usascii_x[i] - 0.5f;
            font[i].y0f = stb__courier_bold_15_usascii_y[i] - 0.5f;
            font[i].x1f = stb__courier_bold_15_usascii_x[i] + stb__courier_bold_15_usascii_w[i] + 0.5f;
            font[i].y1f = stb__courier_bold_15_usascii_y[i] + stb__courier_bold_15_usascii_h[i] + 0.5f;
            font[i].advance = stb__courier_bold_15_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_bold_15_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_bold_15_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_bold_15_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_bold_15_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_bold_15_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_bold_15_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_bold_15_usascii_LINE_SPACING
#endif

