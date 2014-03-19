// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_bold_14_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_bold_14_usascii'.
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

#define STB_FONT_arial_bold_14_usascii_BITMAP_WIDTH         128
#define STB_FONT_arial_bold_14_usascii_BITMAP_HEIGHT         68
#define STB_FONT_arial_bold_14_usascii_BITMAP_HEIGHT_POW2   128

#define STB_FONT_arial_bold_14_usascii_FIRST_CHAR            32
#define STB_FONT_arial_bold_14_usascii_NUM_CHARS             95

#define STB_FONT_arial_bold_14_usascii_LINE_SPACING           9

static unsigned int stb__arial_bold_14_usascii_pixels[]={
    0x01300844,0x00000442,0xf10709f1,0x007ff6ff,0x00130880,0x00000011,
    0x27b04400,0x361fc3fd,0x6540d54f,0x9102dffe,0x10f7f545,0x07f2a5bf,
    0x203dffd7,0x3f62f8cd,0x7ecc0fc5,0xbefea81c,0x405feb80,0x3661f32f,
    0x39f31fc7,0x8df5c17c,0x43503fc9,0x3e26eecf,0xff70fd43,0x5f03ffb9,
    0x8fde61f3,0xbd7dd05b,0x6fdbffb8,0x81fce7c4,0xfb8db0f8,0x41f98fe0,
    0x5c475c6c,0x441f9a8a,0x11d3f34f,0x47ea1fc4,0x9be60ff8,0x54feefed,
    0x440fcbaf,0x3fc4f93f,0x9df88372,0x27cd503f,0x2a3f83ea,0x3f07d41f,
    0xb1ff9bf3,0x3be4f889,0x2a1fc40e,0xfd0bf31f,0x3bb3f6e1,0xb71f7f13,
    0x327e76c0,0x3ff200bf,0x1fc53204,0x323f8fe6,0x6997cc0f,0x45abf4bb,
    0x3ffa64f8,0x3f50fe23,0x87f60fea,0x1b987d5c,0x3fea063f,0x200fea2f,
    0x808afffa,0xf905f32e,0x41fe4fe7,0x8be973f8,0x4f88775e,0x7f10fdf8,
    0x0bf51fa8,0x33bae1ff,0x3ab703df,0x327f30fd,0x408bf30f,0xfdfe8df8,
    0x17cc3e20,0xa9fc7be2,0x972f886f,0x22fe25f3,0xc9a7c41e,0x7f11f8e8,
    0x1ff11fa8,0xddfb37cc,0x267e09df,0x547ea5d7,0xfd8ff11f,0x3fe65f50,
    0x50fe3544,0x1f71fc3f,0x3ed31f98,0x85dcfd9d,0x9dbf14f8,0x3ea1fc4f,
    0x3f33fee1,0x1ae3e62f,0x8baf35b8,0x7dc7eadf,0x3e24fdbe,0x22fffbae,
    0x3ee2744c,0x41fa8fe0,0x36a7e0fb,0x9833efbe,0x87bfaa3f,0x20fd43f8,
    0x541efffb,0xd0fc0b97,0x6ff541fb,0x0cefc982,0x7d6ffecc,0xb8d70ba2,
    0x85f31fc7,0x8817d44d,0x20bfea4e,0xd95ef886,0x0880203f,0x060a2011,
    0x01000008,0x3f23f018,0x7ff11fc6,0x3be603e2,0x4c4feccd,0x3320102c,
    0x00019974,0x00000000,0x2a800000,0x4c1c8197,0xa980732c,0x000001bc,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x40000000,0x00000001,0x533a8000,0x3e2dd000,0x06545403,0xd0299c98,
    0xbec88aaf,0x4067f4c0,0x81741dea,0x981effea,0x6cc1dffe,0xbffd302e,
    0x6eeefd85,0x6e80ffea,0x77c407f1,0x77ec2fff,0x3afd06ef,0x897efba6,
    0x7ec5fbef,0x5c2647eb,0x41ffdcff,0x227ebbef,0x7d45fcdf,0xf11ffbcf,
    0x9fe9be29,0x8b745d40,0x7c40b9bf,0x15f897a6,0x845fa0df,0x221f93f9,
    0xa7c4dd1b,0x3e235428,0xf89be60f,0x8fd472a5,0x883fe0fd,0xb745f53d,
    0x77ec2efa,0xddff16ff,0xf927c45f,0x06e8bea1,0x2e5f50fd,0x50fe441f,
    0xf881999f,0x3fe17e60,0x5073ff60,0x7c47f23f,0xf89fcc05,0x221dffb6,
    0x3e2df34f,0x25f897a6,0x6f8fe27d,0x25f70fd0,0x17f4c2fb,0xd0dd9ff7,
    0x7ec1fd45,0x37fff221,0x5ff7bf10,0x5eed8fea,0xe9bf6ffe,0x2df17d46,
    0x443f24f8,0x744fabff,0xfd06fcae,0xfb97d572,0x3ea1f901,0x24c83f54,
    0x00fd85f9,0x6ecc7fb3,0x6cbf11fc,0x27b227fe,0x7f31ba6e,0x365f8b7c,
    0x33fb7e26,0xb76ff4c0,0x9b75be6b,0x2e21f93f,0x53e65f70,0xf135c2f9,
    0xa9bebaaf,0x2193e23f,0xd03fe0fd,0x25f86e2f,0xfcaef86e,0x9f77ff16,
    0xd000a7c4,0x53f37ead,0x9bebbe58,0x746eadf8,0x0f987dbf,0x3ffb3fee,
    0x7f5e7f42,0x8bf5bf12,0x7febcffa,0xe8bfb7fa,0x6ddfe986,0x419fd9f1,
    0x374004f8,0x8721bff9,0x7540cfd9,0x77e441df,0xffb83f02,0x3661efef,
    0x7fdc3fff,0xeffda80b,0x0732a20c,0x200000dd,0x0154001a,0x00000000,
    0x0d882011,0x02000010,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0xeeeea800,0x86a15400,0x2fc40028,0x2a5fa9f6,
    0x3607f45f,0xfffffb0f,0xff99fa5f,0x3fe2bf10,0x7ec1deff,0x64c3fe22,
    0x9f300bef,0x80eeefc8,0x3ea3f77e,0x3f6617e2,0xfb17e21c,0x81fd2fd8,
    0xb9be23fb,0x91ccefcc,0x54bfee3f,0x999df13f,0x326f88ff,0x3eebba3f,
    0x6d89fd04,0x7c5ff620,0x177d4f94,0xf89bafba,0x3be23ec5,0x25f883fc,
    0x50bf03fa,0x5d3fb65f,0xfd8bf11f,0x37c67dc0,0x643ec591,0x6f7fc4ff,
    0xdb3ff7c1,0x25ffc93e,0x223f71e9,0x7dc3ec5f,0x6c3f606f,0xf10bf00f,
    0x3edb73e9,0xdd333bf1,0x807fbfa0,0x7d7cc5f9,0x3fafbe24,0x9f53ece0,
    0x6c05f83f,0x7d8bf10f,0x2a03ff88,0x2fc0bf3f,0xfbaf9ee8,0x3ffe25f8,
    0xff301dff,0x2077cc07,0x2a04f8ce,0x7fc7d82f,0x3ee05f87,0x21f62fc4,
    0xf100fffd,0x2fc05f5d,0xf98fcfc8,0x277e23fc,0x07ec03fd,0xbfc81dd0,
    0x21511dfb,0x647d82f9,0xf705f84f,0x47e8df0b,0x205fbdfa,0x2fc07efd,
    0x3fe6ffb8,0xfe97e21f,0x5901f602,0x9fffffb0,0x03f6bbe2,0xf03f91f6,
    0xb05fa85d,0x449fb7bf,0x205fb0ff,0x2fc05ffa,0x3f63ff98,0xff32fc47,
    0x9b01f601,0x19f33310,0xd80e7f54,0x320bfd57,0x333fe27f,0x3fff621c,
    0xf88ff20d,0x805ff00f,0xa87fe05f,0x2e2fc45f,0xf80fb04f,0x0027c405,
    0x017937d8,0x3fffee04,0x0000102f,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0xf3f40000,0xff13e41d,0x9d27fccb,0x3fa25f80,
    0x3ffffea2,0x3e29f11f,0x3e23efff,0xfff07ec5,0x7ffc4fff,0xfff14fff,
    0x04f887df,0x1bfffff1,0x3e7ea7c4,0xff89f24f,0x5f93fee7,0x2fe8afc0,
    0x7fee664c,0x3be29f10,0xbf12fecc,0x33be0fd8,0x33be24cc,0x9df12ccc,
    0x27c49fd9,0xfdccef88,0x3e7e9645,0x7c4f91ff,0x49fdd1fe,0xfeafc05f,
    0x117f4403,0xf997e29f,0x0fd8bf15,0x05f8817e,0x21fd17e2,0x222b8cf8,
    0x46a3745f,0x65bf7e6d,0x22ff3e27,0x017e4fcf,0xb009fbbf,0xf14f889f,
    0xef8a7d4b,0x3e0feaaa,0x3e21aaae,0xf10aaaae,0xdf11fc8b,0x3be27fdd,
    0x3e23fcaa,0x7de7cb94,0x373e27ca,0x3e4fafad,0x7ffffc05,0x2217ee00,
    0xfffff14f,0x3fffe23f,0x3ffe0fff,0x3ffe23ff,0x8bf11fff,0x7cdf12fb,
    0xffffff15,0x24ba7c43,0x44fbfd4f,0xf8fcfbcf,0x7ff017e4,0x3bea0bf5,
    0xdf14f880,0x2fc41799,0x99df83f6,0x8817e209,0xf88fdc5f,0x8afc5be4,
    0x29f10fe9,0x7fd53e29,0x3fe73e27,0x017e4f8d,0x2217ecbf,0x29f100ff,
    0x17e205f8,0x102fc1fb,0x22fc40bf,0x749f10fe,0x2fb8bf16,0x4f9729f1,
    0xf4f89ff6,0x77c9f17f,0x97e0cccc,0x3bfa0ff9,0x9f11cccc,0x5f8817e2,
    0x40bf07ec,0x3ccccef8,0x7fb99df1,0x22dd27c4,0x0ffcccef,0x4f9b69f1,
    0xb4f89fe2,0x7fc9f13f,0x17e1ffff,0x7fff4bf9,0x29f12fff,0x17e205f8,
    0x102fc1fb,0x2bffffff,0x43effff8,0x7c5ba4f8,0x222effff,0x0000004f,
    0x00000000,0x00000000,0x00000000,0x77777540,0xf104fd82,0x71013e29,
    0x20173015,0x797102ca,0x40acb881,0x99d4aa1a,0x22b8aa02,0x02b8751b,
    0xb98dcce6,0x3ffddd51,0xf107ff88,0xfc813e29,0x7efec6fe,0x0fff7e44,
    0xf89bf7fa,0x93e25fce,0x3feafb5f,0x7f8be40b,0x4c7ee5f3,0x15fea82f,
    0x7c0df1df,0x82fdfb84,0x269f14f8,0x3269f10a,0x99ee5f11,0x0a8bf15f,
    0x273ea1f9,0x5f93e219,0x6ffe4c31,0x3ff53f31,0x653e21f7,0x0b7ff227,
    0x2e03fff5,0x0bf1dd06,0x2b3e29f1,0x5c0bea5f,0xf51feeef,0xfb507e45,
    0x77ff41ff,0x05f93e22,0x97f2fec4,0xfd8bb7db,0x07bea4f8,0x7f104fd8,
    0x07f69f30,0x3f7e29f1,0x0a89fcc5,0x213335f5,0xfa9b63f9,0x5cc0fb8c,
    0x7c9f10fe,0x5dfd7105,0x7ee5f76c,0x10fe7d43,0xf8839ffb,0x80fb80ff,
    0x44fdcdfc,0xdfff14f8,0x23f95dd0,0x10ed9df8,0x547f95df,0xf51fe9bf,
    0x77c1f937,0x2ab95fc9,0xffa81dff,0xfe80ffa9,0x49ff9106,0x5d85fafe,
    0xfffffff0,0x7df14f88,0x3efd985f,0x22177fd4,0xffd83efe,0x3bfb22fc,
    0xaf67fdc2,0x4401957d,0x2e0df17f,0xf74b802f,0x09f0ff25,0x22fb87f5,
    0x3a9f14f8,0x08010007,0x00040040,0x00000000,0x0fe20000,0x4bf103f6,
    0x269f14f8,0x0000004f,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x5c41b880,0x83971c88,0x4dc3b89b,0x2eeee63b,
    0x22040102,0x9999932d,0x5fccbea7,0x211111fb,0x862c9808,0x3333323d,
    0x2200004c,0x76f7c42f,0x3e0ffdef,0xdf13fede,0x7fffdcbf,0x6884f985,
    0xfffb9fc4,0x265f55ff,0xff91fbbf,0xffb8fe6b,0xb93e6eff,0x003bbbbb,
    0x9bf99880,0x53eabf10,0x5f9be1fb,0x7f440df1,0x320ffd80,0x00ae3eed,
    0xaaf88fcc,0x4c79950f,0x376a26a4,0x00000001,0x2bfffff7,0x2a7f33f8,
    0x15e93e1f,0x40ff409f,0x7e43faf9,0xeeea9622,0x0c3064ee,0x00000000,
    0x7dd4c000,0x267f12ac,0x27c3f52f,0x6c13e2bd,0x9f2f902f,0x36a059e8,
    0x0004dddd,0x00000000,0x42f88000,0x2a5f33f8,0x15e93e1f,0x77df907f,
    0x1d99ec47,0x00000000,0x00000000,0x10762000,0x7d4be67f,0xf15e93e1,
    0xfffffb07,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__arial_bold_14_usascii_x[95]={ 0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,-1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0, };
static signed short stb__arial_bold_14_usascii_y[95]={ 11,2,2,1,1,1,1,2,1,1,1,3,9,6,
9,1,1,1,1,1,1,2,1,2,1,1,4,4,3,4,3,1,1,2,2,1,2,2,2,1,2,2,2,2,
2,2,2,1,2,1,2,1,2,2,2,2,2,2,2,2,1,2,1,12,1,4,2,4,2,4,1,4,2,2,
2,2,2,4,4,4,4,4,4,4,2,4,4,4,4,4,4,1,1,1,5, };
static unsigned short stb__arial_bold_14_usascii_w[95]={ 0,2,6,7,7,11,9,3,4,4,5,7,3,4,
3,5,7,5,7,7,7,7,7,7,7,7,2,2,7,7,7,8,13,10,9,9,9,8,8,9,9,3,6,10,
8,10,9,10,8,10,9,8,8,9,10,12,9,10,8,4,5,4,7,9,4,7,8,7,7,7,5,7,7,3,
4,7,3,11,7,8,8,7,6,7,5,7,7,10,7,7,7,5,2,5,7, };
static unsigned short stb__arial_bold_14_usascii_h[95]={ 0,9,4,11,12,11,11,4,13,13,6,7,5,3,
2,11,11,10,10,11,10,10,11,9,11,11,7,10,7,5,7,10,13,9,9,11,9,9,9,11,9,9,10,9,
9,9,9,11,9,11,9,11,9,10,9,9,9,9,9,12,11,12,6,2,3,8,10,8,10,8,10,10,9,9,
12,9,9,7,7,8,10,10,7,8,10,8,7,7,7,10,7,13,13,13,3, };
static unsigned short stb__arial_bold_14_usascii_s[95]={ 63,1,74,74,45,82,112,70,1,21,52,
1,58,81,99,122,1,26,46,9,10,18,17,1,94,51,81,124,111,62,84,
1,26,9,113,102,95,86,77,59,67,54,117,34,25,14,4,63,58,31,107,
42,85,54,74,94,64,117,45,53,25,58,44,103,86,57,91,32,83,40,77,
69,105,123,40,24,20,9,21,48,100,109,29,65,40,73,103,92,119,32,36,
15,12,6,91, };
static unsigned short stb__arial_bold_14_usascii_t[95]={ 13,38,58,1,1,1,1,58,1,1,58,
58,58,58,58,1,15,27,27,15,27,27,15,48,1,15,48,15,48,58,48,
27,1,48,38,1,38,38,38,15,38,38,15,38,38,38,38,1,38,15,27,
15,27,27,27,27,27,27,38,1,15,1,58,58,58,48,15,48,15,48,15,
15,38,38,1,48,48,58,58,48,15,15,58,48,27,48,48,48,48,27,58,
1,1,1,58, };
static unsigned short stb__arial_bold_14_usascii_a[95]={ 56,67,95,112,112,178,145,48,
67,67,78,117,56,67,56,56,112,112,112,112,112,112,112,112,
112,112,67,67,117,117,117,122,196,145,145,145,145,134,122,156,
145,56,112,145,122,167,145,156,134,156,145,134,122,145,134,189,
134,134,122,67,56,67,117,112,67,112,122,112,122,112,67,122,
122,56,56,112,56,178,122,122,122,122,78,112,67,122,112,156,
112,112,100,78,56,78,117, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_bold_14_usascii_BITMAP_HEIGHT or STB_FONT_arial_bold_14_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_bold_14_usascii(stb_fontchar font[STB_FONT_arial_bold_14_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_arial_bold_14_usascii_BITMAP_HEIGHT][STB_FONT_arial_bold_14_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_bold_14_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_bold_14_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_bold_14_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_bold_14_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_arial_bold_14_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_bold_14_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_bold_14_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__arial_bold_14_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__arial_bold_14_usascii_s[i] + stb__arial_bold_14_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__arial_bold_14_usascii_t[i] + stb__arial_bold_14_usascii_h[i]) * recip_height;
            font[i].x0 = stb__arial_bold_14_usascii_x[i];
            font[i].y0 = stb__arial_bold_14_usascii_y[i];
            font[i].x1 = stb__arial_bold_14_usascii_x[i] + stb__arial_bold_14_usascii_w[i];
            font[i].y1 = stb__arial_bold_14_usascii_y[i] + stb__arial_bold_14_usascii_h[i];
            font[i].advance_int = (stb__arial_bold_14_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__arial_bold_14_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_bold_14_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_bold_14_usascii_s[i] + stb__arial_bold_14_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_bold_14_usascii_t[i] + stb__arial_bold_14_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_bold_14_usascii_x[i] - 0.5f;
            font[i].y0f = stb__arial_bold_14_usascii_y[i] - 0.5f;
            font[i].x1f = stb__arial_bold_14_usascii_x[i] + stb__arial_bold_14_usascii_w[i] + 0.5f;
            font[i].y1f = stb__arial_bold_14_usascii_y[i] + stb__arial_bold_14_usascii_h[i] + 0.5f;
            font[i].advance = stb__arial_bold_14_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_bold_14_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_bold_14_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_bold_14_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_bold_14_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_bold_14_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_bold_14_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_bold_14_usascii_LINE_SPACING
#endif

