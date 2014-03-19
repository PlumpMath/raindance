// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_bold_14_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_bold_14_usascii'.
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

#define STB_FONT_times_bold_14_usascii_BITMAP_WIDTH         128
#define STB_FONT_times_bold_14_usascii_BITMAP_HEIGHT         64
#define STB_FONT_times_bold_14_usascii_BITMAP_HEIGHT_POW2    64

#define STB_FONT_times_bold_14_usascii_FIRST_CHAR            32
#define STB_FONT_times_bold_14_usascii_NUM_CHARS             95

#define STB_FONT_times_bold_14_usascii_LINE_SPACING           9

static unsigned int stb__times_bold_14_usascii_pixels[]={
    0x50e0a608,0x26202983,0x5dd400aa,0x5511a981,0x03553002,0x85315554,
    0xa982aaaa,0x0a20a380,0x302e6207,0x5b2c5a83,0x42b20f90,0x9ed882b8,
    0x71720de9,0x3b620a2d,0xff00dd89,0xff887f41,0x1f9745ff,0x656439b4,
    0x32d0193c,0x8f50b51f,0x20220be5,0xfd85300c,0x45c8fe60,0x1fb12e6b,
    0x47f81fcc,0x326aea7d,0x126cfe62,0x38fa8aeb,0x33f10aa7,0x1ee0b67f,
    0x1b621f4b,0x4f2f2219,0xdf11fe64,0x789ae2e4,0x41be1fe6,0x1d02e47f,
    0xc8f57fc4,0x3e66fefe,0x3ee0583e,0x46a81f89,0x91f20ba5,0x2297cdf4,
    0x91fe85fb,0x47e26b8b,0x81fe85fa,0x5981d47f,0x8dc4ffa8,0x6c2ffc85,
    0x07ea3b00,0x40eab15c,0x47dce67c,0x37cc50fb,0x5c5c87fc,0x86f9a7c6,
    0x447f80ff,0xf9905702,0x3a6b627f,0x2a2ffa81,0x07ea1982,0x40eab15c,
    0xeb746a7c,0x4c1ff0a6,0x8d71726f,0xdf03fa4f,0x2007f94c,0x7cc7d40e,
    0x49bb9f75,0x0489bb20,0x58d503f0,0x299f20ba,0x02a9f5bf,0x917dc5f7,
    0x87e26b8b,0xd8bea2fb,0x984b8df6,0x27d0fa85,0x70a85758,0x43c85899,
    0xf2c6b82d,0xd938f907,0x81315b91,0x641dbbd9,0x70f335c5,0xc985d77d,
    0x5c3ec1fb,0x21b57903,0xbe981b39,0x3a0dc0cd,0x23d42d45,0x51f20be5,
    0xfb00c403,0x26b8b905,0x1002204b,0x88000800,0x1014c010,0x8b506600,
    0x6cd98b65,0x014c42a8,0x5c8aff62,0x00028b64,0x00000000,0x82000000,
    0x70d44828,0x2aaa2017,0x304c4001,0x004aa655,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x40000000,0x54c28819,0x4c06aa0a,
    0x8dd4400b,0x18acb981,0x18809b98,0x0a982a98,0x153006a6,0x22055550,
    0x54c55551,0x4cbc96e2,0x237ec06c,0x40d75b05,0x23ea8aec,0x8bd31ed8,
    0x0390f51d,0x4d3791f6,0x3fb604f8,0x21fffd46,0x03fe21e9,0x77f36c3b,
    0xfeb815cf,0x267e20e4,0x3983f906,0x44b107f2,0xd816121f,0x8fe2be27,
    0x3f21104f,0xf3066720,0x0387f901,0x048ae5f4,0x41cbfe2e,0xf880bdf8,
    0x41fe6107,0x440ffe20,0x53ee6d44,0xbdf93e5f,0x7c47902e,0x881df82c,
    0x73002a7f,0x33803617,0xfd5073ff,0x2fd47ea5,0x5c017ea0,0x10dc1eff,
    0x2fb9fa7f,0x0fcafcbf,0xffa86fe4,0xf99f30ff,0x7072fd83,0xdbc95c0b,
    0x43efb8e0,0x2a8ff8ad,0xdf501bea,0x260e65c4,0xf5160ffe,0xf2fb9f65,
    0x42faa7cb,0x7e4c2fd8,0x89f15f73,0x6d819ef9,0x3a7e2910,0x4cbf90e3,
    0x889df53f,0x23fc407f,0xfb82a5f9,0xb2fa8912,0x24f97d4f,0xf105f54f,
    0x97d57605,0x004fe86f,0x9d3f30d8,0xdf32f41c,0xb8a7bf61,0x5f70cc3f,
    0xf8952fcc,0xb3f88570,0x22f8af8f,0x8661f75f,0xf12a8a26,0x07ea13a7,
    0xead85700,0x44885d31,0xffcadffc,0x165ef5c1,0x17655f54,0x2c7759d5,
    0x22feceb8,0x56f44cda,0x8673ee2d,0x7542bef9,0xd981605a,0x00018141,
    0x02200408,0x20200620,0x01004200,0x00401004,0x4fa80002,0x00000000,
    0x00000000,0x00000000,0x88000000,0x550aaa9b,0x2a26aaa3,0x443530aa,
    0x22a880aa,0x8aaaa1a9,0x155532a9,0xa83506aa,0x2aa66ebc,0x5532aaaa,
    0x26aaaa60,0x2602a980,0x22881aaa,0xff12c3fd,0xe8917ee1,0x27ea0eba,
    0x7fd13e27,0xb97f60d8,0x2be64f83,0x3a6ee1f9,0x817e69af,0x81fd9afd,
    0x55fe405f,0x70bf204f,0x43fe2fd8,0x3e27ea28,0x227c1f64,0xf10a26fa,
    0x8260913f,0x8a2f89fa,0x02fc51fd,0x217e65f9,0xe97dc05f,0x385f900f,
    0x27fd2fcc,0x55f97dc2,0xb09f07fd,0x77dc0e7f,0x6c47d503,0x3fb00ebc,
    0xc85d9bf0,0xbf0bf32f,0x25f7076e,0x7e42a0fe,0x4cff41c2,0x3f9876fa,
    0x4f83ecbf,0x201aff98,0x713e04fd,0x81fd8013,0x7e47d8ef,0x5f81edab,
    0xf99f7017,0x85f94f85,0xfd3cfb83,0x7f9d7037,0x904f83ec,0x1ffb809f,
    0x667cc9f0,0xf03fb01b,0xd7f91f6b,0x0f37e05f,0x3e805fdc,0xf88385f7,
    0xb80df72f,0x27c1f60f,0x2a604fb8,0xd89f06fa,0x3fb06fee,0xf91f2bf0,
    0xdf01ff15,0x05f701fb,0x224fa8e4,0x1fc4f902,0x07d83d10,0x413ee0bf,
    0x3e13f638,0xd06892a5,0x1f6bf03f,0x21bee5f9,0xfb86f8df,0x79f90602,
    0x0321cc07,0xfd106ea2,0x440efa83,0x1f541dfd,0x77d47ff7,0x202aeee0,
    0x3e60bff9,0xfd31fe8e,0xf993f619,0x3624fc8e,0x004000df,0x00000080,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x9d500000,0xbbc885d9,0x2a06aa65,0x155531aa,0x26155530,0x554141aa,
    0x2a61aaaa,0x0aaa98aa,0x2a615553,0x530aaaaa,0x26155555,0x14009aaa,
    0x826aaaa6,0x10fc8ef8,0xff91f69d,0x3227f441,0xd0ff203f,0x8ae85b83,
    0x1fe40ff8,0x43fc87f9,0x22d99cfc,0x21e99bfc,0x40de9bfd,0x5fe40fea,
    0x5d3e0ee9,0x1f65f52f,0x7dd47f97,0xf7017e43,0xdf503227,0x20ff6289,
    0x90bf23fc,0x223fb87f,0x0cc4ff22,0x21be25f9,0xb97e40fd,0x97d53e3f,
    0x9b8fb2fb,0x90feee6f,0x4dfdc05f,0xfa817e04,0x7e47f906,0x3ee1fe42,
    0x717f9073,0x0ff45f90,0x25f903f2,0x7dd7e1fd,0x71f67f31,0x3ee66bf6,
    0xf7017e43,0x82fc0bfb,0xbf902ff8,0xfc85fd99,0x42eefdc3,0xfc83edfc,
    0x1f90ff62,0x41fedfc8,0x75c3ecef,0xdfa9c7ec,0x2fc87f73,0x13fafee0,
    0x05fc82fc,0x42fc8ff2,0x4dfdc3fc,0x83abfc85,0x90ff62fc,0xfb2fc81f,
    0x2100a7c5,0x25fd1c7d,0x217e43fb,0x3fe2fee2,0xff985f82,0x23fc8260,
    0x21fe42fc,0x7f9053fb,0x7c5f90ca,0x3207e41f,0x3e2df32f,0x238fb004,
    0xf90fee6b,0x4cfee587,0x207641ff,0x3f22c3fe,0x7f90bf23,0x3f203fb8,
    0x32fc9223,0xc81fb09f,0x3aa9f52f,0x976cc01d,0x362712e9,0x5dfd30df,
    0x37f62bd7,0x402ffe88,0x7ecbaffb,0x3a637f62,0x1bfd10df,0x22037f62,
    0x34fdbefe,0x307b9bfd,0x3fa617fd,0x0000bdbd,0x00000000,0x00000000,
    0x00000000,0x80c00000,0x1c0b34eb,0x416e05d4,0xeb800003,0x24a8ed8c,
    0xba8934eb,0x43bb883d,0x33a61bb8,0x22de46d8,0x07622ca8,0x45be203a,
    0xffe8f702,0xc85836c6,0x2b91001c,0x131fb5f8,0x2219b7c4,0x97c1fa9f,
    0xf1a67a2f,0xa8ea9f6b,0xf99ea7e0,0xfb827d42,0x4cfd3029,0xb001fe8a,
    0x540fb260,0x5c7e41dd,0x29fb82bf,0x261fc8b8,0x2fe6bf1f,0x3ed7e0fc,
    0x87cc3ff3,0x107fc800,0xf97105bf,0x99701ee0,0x3aa0999d,0x26017d54,
    0xf105dd5f,0x3f595059,0xf55f8fd4,0x23ed7e05,0x05f50ffa,0x40ff2660,
    0x0f9380fd,0x4c499136,0xda8199e9,0x407b911d,0x3601f74e,0x1fbaf987,
    0xf89fc7e2,0x7daf4115,0x7c4be626,0x38326116,0x21660df3,0x441fd9aa,
    0x8580fe86,0x2a00beb8,0x588dc1cd,0x37e21260,0x1d6544fa,0x9f90bbaa,
    0x36b6a3fd,0x790fbaa0,0x0bfaab22,0x7fffe414,0x81c08646,0x4c002b85,
    0x01002044,0x01000000,0x89180008,0x40b6e5fa,0x321fd998,0x40663ccd,
    0x00000000,0x00000000,0xf5000000,0xc99ffd43,0x3ea7c801,0x00002fff,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0xd79d3000,0x1646f4c5,0x263db595,0xdd9bebce,0x66c41880,0x198281e9,
    0x33332a33,0x5420cc4c,0x222223bb,0x00000008,0x3ec77c00,0x2650ebf2,
    0x7e47745f,0x2d443f9a,0x22065774,0x16eb743f,0x54333333,0xb73abedc,
    0x3777629b,0x000001dd,0x3e57e000,0x0fe81fe2,0xf88fbaf4,0x8faefe23,
    0x83a7607e,0x2eea9b4d,0xb8863bbb,0x0000000b,0x5f800000,0x505f90f9,
    0x3eebd07f,0x0bb83f88,0x954982f4,0x3332b954,0x00003333,0x00000000,
    0x23e57e00,0xb7c46ea8,0x47dd7a18,0x2d65c3f8,0x1b06c17a,0x00004422,
    0x00000000,0x77cc0000,0xb1d31fe8,0x7667e49f,0x7fb1ff11,0xf1040bf5,
    0x0000001d,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__times_bold_14_usascii_x[95]={ 0,1,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0, };
static signed short stb__times_bold_14_usascii_y[95]={ 11,2,2,2,2,2,2,2,2,2,2,3,9,7,
9,2,2,2,2,2,2,2,2,2,2,2,5,5,3,5,3,2,2,2,2,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,12,2,5,2,5,2,5,2,5,2,2,
2,2,2,5,5,5,5,5,5,5,3,5,5,5,5,5,5,2,2,2,6, };
static unsigned short stb__times_bold_14_usascii_w[95]={ 0,3,5,7,6,12,10,3,5,4,6,7,3,4,
3,4,6,6,6,6,6,6,6,7,6,6,3,4,7,8,7,6,12,9,8,9,9,8,8,10,10,5,7,10,
8,12,9,10,8,10,10,7,8,9,10,13,10,9,9,3,4,3,7,8,3,7,7,6,7,6,6,7,7,4,
5,8,4,11,7,6,7,7,6,5,5,7,7,10,7,7,6,4,2,4,7, };
static unsigned short stb__times_bold_14_usascii_h[95]={ 0,10,5,10,10,10,10,5,12,12,6,8,5,2,
3,10,10,9,9,10,9,10,10,10,10,10,7,9,7,4,7,10,12,9,9,10,9,9,9,10,9,9,10,9,
9,9,10,10,9,12,9,10,9,10,10,10,9,9,9,12,10,12,5,2,3,7,10,7,10,7,9,9,9,9,
12,9,9,6,6,7,9,9,6,7,9,7,7,7,6,9,6,12,12,12,3, };
static unsigned short stb__times_bold_14_usascii_s[95]={ 63,82,58,101,109,1,24,124,1,58,36,
38,124,81,124,64,77,111,26,92,19,99,106,86,94,25,124,33,54,64,46,
121,26,1,118,35,101,92,83,45,66,77,74,39,30,17,14,63,115,39,95,
56,78,1,113,11,54,44,56,50,116,54,50,86,124,81,84,117,69,96,32,
70,87,65,20,106,39,24,1,89,1,9,43,111,50,103,73,62,9,11,17,
15,12,7,73, };
static unsigned short stb__times_bold_14_usascii_t[95]={ 12,1,56,1,1,14,14,28,1,1,56,
46,22,56,46,14,14,36,46,14,46,14,14,1,1,25,14,46,46,56,46,
1,1,46,36,14,36,36,36,14,36,36,1,36,36,36,14,1,25,1,25,
14,25,25,14,25,25,25,36,1,1,1,56,56,50,46,14,46,14,46,25,
25,25,25,1,25,25,56,56,46,36,36,56,46,36,46,46,46,56,46,56,
1,1,1,56, };
static unsigned short stb__times_bold_14_usascii_a[95]={ 51,67,112,101,101,202,168,56,
67,67,101,115,51,67,51,56,101,101,101,101,101,101,101,101,
101,101,67,67,115,115,115,101,188,146,135,146,146,135,124,157,
157,79,101,157,135,191,146,157,124,157,146,112,135,146,146,202,
146,146,135,67,56,67,118,101,67,101,112,90,112,90,67,101,
112,56,67,112,56,168,112,101,112,112,90,79,67,112,101,146,
101,101,90,80,45,80,105, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_bold_14_usascii_BITMAP_HEIGHT or STB_FONT_times_bold_14_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_bold_14_usascii(stb_fontchar font[STB_FONT_times_bold_14_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_times_bold_14_usascii_BITMAP_HEIGHT][STB_FONT_times_bold_14_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_bold_14_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_bold_14_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_bold_14_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_bold_14_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_bold_14_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_bold_14_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_bold_14_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__times_bold_14_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__times_bold_14_usascii_s[i] + stb__times_bold_14_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__times_bold_14_usascii_t[i] + stb__times_bold_14_usascii_h[i]) * recip_height;
            font[i].x0 = stb__times_bold_14_usascii_x[i];
            font[i].y0 = stb__times_bold_14_usascii_y[i];
            font[i].x1 = stb__times_bold_14_usascii_x[i] + stb__times_bold_14_usascii_w[i];
            font[i].y1 = stb__times_bold_14_usascii_y[i] + stb__times_bold_14_usascii_h[i];
            font[i].advance_int = (stb__times_bold_14_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__times_bold_14_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_bold_14_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_bold_14_usascii_s[i] + stb__times_bold_14_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_bold_14_usascii_t[i] + stb__times_bold_14_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_bold_14_usascii_x[i] - 0.5f;
            font[i].y0f = stb__times_bold_14_usascii_y[i] - 0.5f;
            font[i].x1f = stb__times_bold_14_usascii_x[i] + stb__times_bold_14_usascii_w[i] + 0.5f;
            font[i].y1f = stb__times_bold_14_usascii_y[i] + stb__times_bold_14_usascii_h[i] + 0.5f;
            font[i].advance = stb__times_bold_14_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_bold_14_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_bold_14_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_bold_14_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_bold_14_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_bold_14_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_bold_14_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_bold_14_usascii_LINE_SPACING
#endif

