// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_13_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_13_latin1'.
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

#define STB_FONT_courier_13_latin1_BITMAP_WIDTH         256
#define STB_FONT_courier_13_latin1_BITMAP_HEIGHT         54
#define STB_FONT_courier_13_latin1_BITMAP_HEIGHT_POW2    64

#define STB_FONT_courier_13_latin1_FIRST_CHAR            32
#define STB_FONT_courier_13_latin1_NUM_CHARS            224

#define STB_FONT_courier_13_latin1_LINE_SPACING           6

static unsigned int stb__courier_13_latin1_pixels[]={
    0x20001004,0x00400334,0x001a8035,0x010c0644,0x18c06075,0x01c01700,
    0x02200400,0x51002008,0x00800001,0x00008044,0x802a0311,0x80080808,
    0x73019008,0x4e000498,0x815d540b,0x2e03300a,0x1839c470,0x4289a831,
    0x428c1bca,0x20a07028,0x20545b4a,0x407103bb,0x019103bb,0x0533062a,
    0x77702f2a,0x0c880e20,0x4541bb88,0x0e201983,0x88064434,0x07008003,
    0x8e3911c8,0x9305d442,0x964c32e5,0x9338a0cb,0xba8832e5,0x3305d440,
    0xcb964c62,0x81751120,0x439c0ba8,0x00201084,0x0c010021,0x15150194,
    0x40020108,0x8e50e380,0x081931c9,0x01008160,0x11c8eaaa,0x0e5e5c39,
    0x228e3866,0x21c19139,0x1c50e1c3,0x644e6387,0x4c322730,0x8d438702,
    0x4e619139,0x531ce0c8,0xb8855244,0x5ddc40bb,0x205ddc40,0x8d443bb9,
    0x98eeee21,0x3bb983bb,0x7383bb98,0x516d6cc3,0x2a488a61,0x15491242,
    0x1c02aea6,0x48361c33,0x471c3338,0x43871c43,0x704531c3,0x0e710e38,
    0x705dc471,0x4439cc38,0x1ce38873,0x0e1c3837,0x70e1c387,0x35510cc0,
    0x0cc16238,0x20cc0330,0x839c1713,0x24387073,0x8143870e,0x224199c3,
    0x8e1ccc0a,0x21c7070c,0x00c8e1c3,0x1ce0e387,0x3871c09c,0x073839c4,
    0x703239c7,0x4470a238,0x438511c2,0x4c61cbba,0x2a38310a,0x5dd41cbb,
    0x0e5dd41c,0x32f6a70e,0x21c06c41,0x4470e0c3,0x8702aaac,0x0e0d8399,
    0x0e28e0e4,0x70e1c38e,0x8e1c7144,0x32707383,0x870e1b9a,0x20e70729,
    0x38351ce3,0x1c3870e2,0x8a23870e,0x0a284419,0x22198a25,0x26288662,
    0x45c709c1,0x388e0701,0x038711c0,0x37039070,0x8e0e0175,0x0e1a82a2,
    0x38a14385,0x3505450e,0x9111a82a,0x43214381,0x50546a0a,0x30e239c3,
    0x5cc1b777,0x5d5cc0ba,0x205d5cc0,0x540cbaab,0x82aaa619,0x2e0cbaab,
    0x2ae0cbaa,0x71b10cba,0x380cdc37,0x21b77730,0x6dddcc78,0x40eeae60,
    0xa8070383,0xb833384b,0x5d6443ca,0x205d6440,0x0bac88e3,0x2ae1e55c,
    0xac88383c,0x32ae240b,0x4e1e55c3,0x00800243,0x00802004,0x20040200,
    0x40800400,0x56d4409a,0x80004000,0x2a1baa80,0x202d984b,0x00508199,
    0x26010020,0x00001010,0x00880800,0x4552a800,0x00000008,0x00000000,
    0x00000000,0x00000000,0x0ccc0c40,0x00000cc4,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x02002140,0x17022008,0x23000040,0x05406441,0x1018c0a6,
    0x980d4019,0x206aaa02,0x08605500,0x403a8010,0x00000029,0x02000000,
    0x02000dcc,0x35373005,0x00c88150,0x89590777,0x10382bd8,0xab981775,
    0x88a310c9,0x33019872,0x1ce20a30,0x40cc0198,0x55ccd10b,0x22302a83,
    0x982baa81,0x00510289,0x65e5cc93,0x21665d41,0x5dcc3aab,0x155751ba,
    0x546e1d5c,0x44eaab22,0x3700e3ab,0x0101c12a,0x14426042,0x2a132e09,
    0x2a3872e4,0x547332a3,0x99951ccc,0x4c7332a3,0x3263cccc,0x33263ccc,
    0x333263cc,0x2010a23c,0x5c132e28,0x2099704c,0x099704cb,0x2241b0e0,
    0x20450555,0x980a9623,0x08a14711,0x22511466,0x983b8a02,0x2055d4c1,
    0x70e0aba9,0x0d5402a6,0x10cc7164,0x1c0e0707,0x0e1c3838,0x70e1c387,
    0x05c400cc,0x0d5406aa,0x35501aa8,0x32606aa0,0x82a2439b,0x82aa8555,
    0x37752418,0x30269054,0x1a94c703,0x98b84c0e,0x70a1c1c1,0x2ea70e28,
    0xb839c1aa,0x0ea3870b,0x70381c0e,0x84e04270,0x138109c0,0xcb802982,
    0x0e7039c0,0x40e7039c,0x22c49073,0x57710e0d,0x23815128,0x894c2259,
    0xa8313b9c,0x2266c380,0x50a98828,0x2b220cc1,0x2ab222aa,0x8a670e2a,
    0x39c1ca23,0x838ab887,0x1c0e0703,0x4ab8255c,0x2ae09570,0x8e008904,
    0x0e510728,0x39441ca2,0x41987288,0x805d4dc4,0x8851a82a,0x30e039ab,
    0x1441c392,0x2070a217,0x0e070e2c,0x0985c070,0x75771c71,0x80735385,
    0x0e070383,0x38119c1c,0x20467023,0x75b10233,0x75771c05,0x42babb85,
    0x5dc2babb,0x5d5dc2ba,0x038b11c2,0x0ae20550,0x50510470,0x405d6445,
    0x198511c2,0x105d5e44,0x0eeae605,0x64477573,0x70ddd43b,0x50771c38,
    0x0e070195,0x1c38381c,0x21c3870e,0xcb8381c3,0x3870e0ba,0x43870e1c,
    0x5950e1c3,0x00b66393,0x201430aa,0x177971da,0x3320f2a2,0x2e21c099,
    0x0218703a,0x0100200a,0x86540804,0x225b12c9,0xda981985,0x235b531a,
    0xb531ada9,0x2aab6235,0x96aab625,0x225aaad8,0xa885aaad,0x30ca8100,
    0x64c32a59,0x4b261952,0x2a5930ca,0x0105930c,0xaba80331,0x3006aaa2,
    0x10080813,0x00800663,0x00000026,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0xa8080000,0x4e203091,
    0x26000304,0x8552441a,0x2a60086b,0x44000081,0x440009ab,0x41253093,
    0x2ae23440,0x26666209,0x5405d441,0x640002aa,0x00103911,0x2aa02eea,
    0x3000181a,0x40032e59,0x024dc049,0x2e000aa0,0x23abb881,0x1c3889b8,
    0x3773020e,0x31c445c4,0x400e6053,0x0001cc18,0x88041c00,0x27308041,
    0x4582e0c8,0x212ea2ba,0x75730e19,0xb8714970,0x26070d10,0x2e0e1c04,
    0x4301c0cb,0x40eee619,0x40aba980,0x54a38500,0x070e1899,0x15282081,
    0x86154315,0x2eee2182,0x7710c140,0x85524417,0x73021aca,0x0e100877,
    0x0700a271,0x2833381c,0x703a88a2,0x5b502144,0x21c03815,0x737004c3,
    0x01ba9437,0x1c1d4433,0x0383a88a,0x8e28d5ca,0x2a20d438,0x70a04543,
    0x0e6282e6,0x17314387,0x23870e1c,0x301c310a,0x70708043,0x20170066,
    0x98073303,0x86e21ce1,0x2e038019,0x8e1c0cbb,0x0d81abc9,0x218a8b8e,
    0x4381cbba,0x382aaac8,0x22650438,0x6ddddc51,0x4a1c0170,0x5cd54a11,
    0x7757519a,0x5470a233,0x5119ab9b,0x038e1c38,0x43977512,0x4ce0e100,
    0x2a63b912,0x3901c28b,0x0e331c40,0x38029813,0x0e1c42e0,0x51200a87,
    0x288d64e1,0x00e0e066,0x8eaae60e,0x1c151189,0x261c0470,0x26099988,
    0x09d45513,0x1730e1c7,0x70e1c551,0x822531c4,0x02198a25,0x486a0a84,
    0x0e16671c,0x590e6038,0x089001b5,0x3870e038,0x0d802a14,0xab82648e,
    0x4c1c0cba,0x20383bab,0x83555503,0x212aea03,0x41aaaa83,0x5418eb21,
    0x302eae60,0x75731d64,0x0dbbb981,0xab8d0762,0x82010cba,0x564c3cab,
    0x072ee24a,0x26097507,0x21361c02,0xab82bad8,0x910e1c3a,0x300a8175,
    0x95437559,0x5b550080,0x5b550105,0x0000a885,0xadaa8100,0x40e60002,
    0x300083bc,0x1c000107,0x99980404,0x44000999,0x35b53000,0xaad80ccc,
    0x0106d43a,0x22044008,0x0101b51d,0x04035793,0x00003bb8,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x05999100,0x40835750,0x001730b8,0x73001b98,
    0x000005d4,0x40013571,0x0000288b,0x20002eea,0x0a01bbb9,0xa8ddddcc,
    0x21711bbb,0x261710b9,0x2e63750b,0x85777731,0x5dc42bbb,0x4c2ea3bb,
    0x0377732b,0x0aeea1b3,0x31003a80,0x442a2544,0x29854244,0x9405ddc4,
    0x915ddc41,0x2eee21c5,0x8055d4c3,0x3abb8818,0x70777300,0x01b87757,
    0x80d4701c,0x4738ea03,0x214c2a0a,0x08cc530a,0x450e1c15,0x429c6238,
    0x4298e1c2,0x81c4a0c8,0x4400e0b9,0x00214381,0x21c2839c,0x70c17028,
    0x1dc70e17,0x5de4450e,0xb88e140c,0x1580cc03,0x38154e43,0xc99870e0,
    0x8c63a819,0x2e073828,0x2ac54438,0x4c28109c,0x0e0ce311,0x1401c387,
    0x9c15c413,0x0e06202c,0x1d445751,0x0a04ed44,0xa81edc47,0x239ce0bb,
    0xbc88a728,0x8505c3bb,0xbba83803,0x2f6eea1c,0x2e0a8a2b,0x5edc3bdb,
    0x19c99871,0x1c0ddc4c,0x0b100c88,0x770a66aa,0x70510a0b,0x2e054660,
    0x21d40bba,0x80ee398b,0x062281bb,0x81c3880e,0x41c380b8,0x54e38302,
    0x4385dc38,0x870e1c03,0x86628380,0x20714163,0x0e050e03,0x8540a5dc,
    0x0aaa0380,0x0ce15cee,0x01c0c428,0x0e62e0e7,0x8835907a,0x8e07b02b,
    0x0e1c3809,0x81595107,0x2380bab9,0x386eab20,0x375790ee,0x1c3baa98,
    0x0755730e,0x49755707,0x22bbcbaa,0x40700bbd,0x28140a23,0x20e28947,
    0x702a3303,0x42870ae7,0x2a0381c2,0x88a23828,0x0dc40284,0x2aee0e2e,
    0xbaad8702,0x02db81c1,0x1dde6402,0x244b6604,0x10100211,0x4041665b,
    0x0042bdba,0x005ed401,0x0eef6603,0xca8eeeee,0x7794bbd8,0x21edc497,
    0x641b31d9,0x5decc751,0x05dde45b,0x2c40f6e2,0x40551ecc,0x8cc00bda,
    0x0103953a,0x40855b55,0x0002adaa,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x15400000,
    0x81ddc46e,0x731bbbbb,0x3ba82e67,0x2e1bbb98,0x5ddcc752,0x24400001,
    0xc986cc57,0x00903910,0x263b8ca8,0x2ee3951c,0x89c042cb,0x4a200102,
    0x4952d80a,0x18085132,0x400c04c4,0x543bbbba,0x200fdaa3,0x00aaaaa8,
    0x986440aa,0x50620384,0x3550351c,0x3870e0e0,0xcbbc88a2,0x0eeef2a0,
    0x28322387,0x40a000e7,0x3144502b,0x8c8a661c,0x9c43e649,0x93a8730b,
    0x4c38b883,0x8a6a0d9c,0x90e6238b,0x20064495,0x3ab31742,0x888a7770,
    0x5c414088,0x82b9cc42,0x20846203,0x81ce0173,0x50e1c383,0x9288a0b8,
    0x5403870a,0x5ddc38c8,0x02ee6e3b,0x70394407,0x344ecaa0,0x281b11e2,
    0xe881d2c8,0x44188540,0x55c2a331,0x01ce4a44,0x5a44688a,0x77710b88,
    0x402a2177,0x515310c8,0x5ec40705,0x5104bb83,0x5ddc1c0e,0x06dddc3b,
    0x538c470e,0xa830e238,0x5b800552,0x70738070,0xa8d89404,0x50e6e2c3,
    0x38859498,0x4c193887,0x97515541,0x2228e4c3,0x08188602,0x88000001,
    0x82ac621b,0x03188223,0x77507117,0x38707039,0x23870e1c,0x7710a718,
    0x983e61b7,0x220a0393,0x5dedc19a,0x65c0d880,0x882aa3bb,0x21304534,
    0x4e235308,0xda8f441a,0x5c535350,0x0000001a,0x00000000,0x83105710,
    0x18826382,0x21c198e0,0x21c38382,0x32d88543,0x2a8ca54b,0x0c000200,
    0x00000000,0x00000000,0x00000000,0x00000000,0x2a028000,0x2e25930c,
    0x32e0cbbd,0x4723d983,0x265b30ca,0x25b11bdb,0x777b30da,0x00000005,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x20883010,0x44f33321,0x10aaaaaa,0x777770e7,0x00000077,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x5c000000,
    0x98e21f30,0x8811110f,0x00008888,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x10400000,0x00000404,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_13_latin1_x[224]={ 0,2,1,1,1,1,1,2,3,1,0,0,1,1,
2,1,1,1,0,1,1,1,1,1,1,1,2,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,
0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,2,0,0,0,0,0,1,0,0,1,
1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,3,0,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,2,1,0,1,0,
3,0,1,0,0,0,0,1,0,-1,1,0,1,1,2,0,0,2,2,2,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,1,1,-1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__courier_13_latin1_y[224]={ 9,1,2,1,1,1,2,1,1,1,1,2,7,5,
7,1,1,1,1,1,1,1,1,1,1,1,4,4,2,4,2,2,1,2,2,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,11,1,3,1,3,1,3,1,3,1,1,
1,1,1,3,3,3,3,3,4,3,2,4,4,4,4,4,4,1,1,1,4,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,4,1,2,3,2,
1,1,2,2,1,4,5,5,2,1,0,2,1,1,1,4,1,4,8,1,1,4,1,1,1,4,0,0,0,0,
0,0,2,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,3,1,0,0,0,0,0,2,1,1,1,
1,2,2,1,3,3,1,1,1,2,1,1,1,2,1,2,1,1,1,2,2,3,3,1,1,1,2,1,1,2,
 };
static unsigned short stb__courier_13_latin1_w[224]={ 0,3,5,5,5,5,5,3,3,3,5,7,4,5,
3,5,5,5,6,5,5,5,5,5,5,5,3,4,6,7,6,5,5,7,7,7,7,7,7,7,7,5,7,7,
7,7,7,6,6,7,7,5,7,7,7,7,7,7,5,2,5,2,5,8,3,7,7,7,7,7,6,7,7,5,
4,6,5,7,7,7,7,7,7,5,7,7,7,7,7,7,5,3,1,3,5,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,3,5,7,5,7,
1,7,5,7,4,6,7,5,7,9,4,7,4,4,3,7,6,3,3,3,5,7,7,7,7,5,7,7,7,7,
7,7,7,7,7,7,7,7,5,5,5,5,8,7,6,6,6,6,6,5,7,7,7,7,7,7,6,6,7,7,
7,7,7,7,7,7,7,7,7,7,5,5,5,5,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
 };
static unsigned short stb__courier_13_latin1_h[224]={ 0,9,4,9,10,9,8,5,10,10,6,7,4,2,
3,9,9,8,8,9,8,9,9,9,9,9,6,7,7,3,7,8,9,7,7,8,7,7,7,8,7,7,8,7,
7,7,7,8,7,9,7,8,7,8,7,7,7,7,7,10,9,10,4,2,3,7,9,7,9,7,8,9,8,8,
11,8,8,6,6,7,9,9,5,7,8,6,5,6,5,8,5,10,10,10,3,8,8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,8,8,7,5,7,
10,9,2,8,4,5,4,2,8,1,4,7,5,5,3,8,9,3,3,5,4,5,8,8,8,8,9,9,9,9,
9,9,7,9,9,9,9,9,9,9,9,9,7,9,10,10,10,10,10,5,9,10,10,10,10,9,7,9,9,9,
9,8,8,9,7,8,9,9,9,8,8,8,8,7,9,7,9,9,9,8,8,6,7,9,9,9,8,11,11,10,
 };
static unsigned short stb__courier_13_latin1_s[224]={ 255,235,230,213,87,169,176,154,125,101,114,
133,225,86,82,9,31,182,196,131,203,216,37,236,242,222,94,236,248,242,1,
209,9,40,62,215,204,196,24,168,54,48,8,32,16,8,64,161,241,228,228,
22,212,239,220,188,180,172,166,122,248,119,211,92,70,110,1,96,177,80,247,
59,231,28,1,1,16,78,70,42,185,208,120,58,223,86,128,98,176,188,136,
59,30,32,236,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,
153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,153,255,141,135,
50,184,34,63,200,101,79,201,147,217,86,51,107,206,150,190,142,78,59,193,
74,250,164,195,168,111,95,87,67,43,169,161,153,145,137,158,123,115,107,99,
91,85,79,73,67,141,51,105,112,80,36,73,158,1,43,51,65,93,219,126,
206,198,190,182,145,15,161,118,43,15,247,23,29,23,37,73,104,175,88,153,
137,145,103,119,106,72,239,227,129,127,6,14,22, };
static unsigned short stb__courier_13_latin1_t[224]={ 1,1,42,1,1,1,23,42,1,1,42,
33,42,49,49,13,13,23,23,13,23,13,13,13,13,13,42,33,33,42,42,
23,23,42,42,23,33,33,42,23,42,42,33,42,42,42,33,23,33,13,33,
33,33,23,33,33,33,33,33,1,13,1,42,49,49,33,23,33,13,33,23,
13,23,33,1,33,33,42,42,33,13,13,42,33,23,42,42,42,42,23,42,
1,1,1,42,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,
23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,23,1,23,23,
33,42,33,1,13,49,23,42,42,42,49,23,49,42,33,42,42,49,23,13,
49,42,42,42,42,23,23,23,23,13,13,13,13,13,13,33,13,13,13,13,
13,13,13,13,13,33,13,1,1,1,1,1,42,13,1,1,1,1,1,33,
1,1,1,1,23,23,1,33,23,13,1,13,23,23,23,23,33,1,33,1,
1,1,23,23,42,33,1,1,1,23,1,1,1, };
static unsigned short stb__courier_13_latin1_a[224]={ 110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,
110,110,110,110,110,110,110,110, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_13_latin1_BITMAP_HEIGHT or STB_FONT_courier_13_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_13_latin1(stb_fontchar font[STB_FONT_courier_13_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_courier_13_latin1_BITMAP_HEIGHT][STB_FONT_courier_13_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_13_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_13_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_13_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_13_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_13_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_13_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_13_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__courier_13_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__courier_13_latin1_s[i] + stb__courier_13_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__courier_13_latin1_t[i] + stb__courier_13_latin1_h[i]) * recip_height;
            font[i].x0 = stb__courier_13_latin1_x[i];
            font[i].y0 = stb__courier_13_latin1_y[i];
            font[i].x1 = stb__courier_13_latin1_x[i] + stb__courier_13_latin1_w[i];
            font[i].y1 = stb__courier_13_latin1_y[i] + stb__courier_13_latin1_h[i];
            font[i].advance_int = (stb__courier_13_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__courier_13_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_13_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_13_latin1_s[i] + stb__courier_13_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_13_latin1_t[i] + stb__courier_13_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_13_latin1_x[i] - 0.5f;
            font[i].y0f = stb__courier_13_latin1_y[i] - 0.5f;
            font[i].x1f = stb__courier_13_latin1_x[i] + stb__courier_13_latin1_w[i] + 0.5f;
            font[i].y1f = stb__courier_13_latin1_y[i] + stb__courier_13_latin1_h[i] + 0.5f;
            font[i].advance = stb__courier_13_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_13_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_13_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_13_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_13_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_13_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_13_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_13_latin1_LINE_SPACING
#endif

