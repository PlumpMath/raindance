// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_27_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_27_usascii'.
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

#define STB_FONT_times_27_usascii_BITMAP_WIDTH         256
#define STB_FONT_times_27_usascii_BITMAP_HEIGHT         96
#define STB_FONT_times_27_usascii_BITMAP_HEIGHT_POW2   128

#define STB_FONT_times_27_usascii_FIRST_CHAR            32
#define STB_FONT_times_27_usascii_NUM_CHARS             95

#define STB_FONT_times_27_usascii_LINE_SPACING          17

static unsigned int stb__times_27_usascii_pixels[]={
    0x201a8033,0x300e2068,0x200ba605,0x1bccccb8,0x0ccccc80,0x400aa980,
    0x300ccccc,0xaa988001,0x18019801,0x00102004,0x260710e2,0x0035001a,
    0x4c000550,0x00aa9802,0x5001d598,0x880c9807,0x6401c886,0x9813f204,
    0x1da881cd,0x03f6aaa0,0x765e7ec4,0x555df03f,0x20073201,0xfdbaced8,
    0x301ff103,0x05d9fbdd,0x3ff2bd71,0x2a25400c,0x03eadd84,0x3f20034c,
    0x71002ecc,0xb81bb57b,0x403feb9b,0x2a00772c,0x34425c05,0x00f20264,
    0x03aa0151,0x7e400e40,0xb80dfa80,0x102fc0df,0x19fd9bb9,0xf501bf50,
    0x42ff981b,0x0bfe22eb,0x336f7f6a,0x0b201fff,0x1ee7b877,0x7e4003d0,
    0x35c01ae1,0xff0b32ec,0x00d13403,0x81f3016c,0x2a02f868,0x02e40006,
    0x3f201640,0x3203fcc0,0x9d02fc5f,0x2207d46e,0x22fdc06f,0x0be21ff8,
    0x7fcc0bf2,0xd81bfa22,0x99ba0ec1,0x8007701f,0x4007cc7f,0xdb0fa83f,
    0x16609fb0,0x03e6001d,0x51a21fd4,0x00fe607f,0x20006a80,0x3a07e405,
    0x22ff803f,0x2e3f305f,0x07fd03a1,0x1ff85ff0,0x817dc1f6,0x0ffa85f8,
    0x4bf0f0f0,0x006984f9,0x01723fc4,0x47ea13e6,0x82fd41fd,0xf001dc2c,
    0xd10fee0b,0x1f904fa8,0x03f10400,0x2e198544,0xfb83f201,0x7cffb007,
    0x86e5f905,0x401fee0b,0xf07fc7fb,0x440bee0d,0x103ff05f,0x26f8688d,
    0x000e83f9,0x05f32ff8,0x4db07fe0,0x827dc0c9,0x32006886,0x442fc81f,
    0x7c42fcc6,0x23fc9805,0x939b104c,0x901cc7f5,0x8037ec1f,0x20bf1ffb,
    0x021b8efa,0x3ea00dfb,0x6f89fa1f,0x3e205f70,0x3ae3fd05,0xeeeeeeee,
    0x1fb9ba4e,0xfd8001e4,0x55531ebd,0x71ffc815,0x01fd003f,0x40036093,
    0x40fc82fb,0xfb85f868,0x1ff54404,0xff0fa05f,0x83f20483,0xff5005fe,
    0x7fc417e5,0x17fa01ce,0xdb17fcc0,0x2fb83fc4,0x3fa0bf10,0x41642c80,
    0x598d90fa,0x13fea000,0x3605dfd1,0x9800dcff,0x2e05903f,0x309f7003,
    0x1f86881f,0xf7003fc8,0x1b603ea7,0x640b0df1,0x009ff10f,0x02fd3fe2,
    0x2207fff3,0xff1004ff,0x07fe2e49,0x37c40bee,0x40e83fc4,0x197b701d,
    0x98000744,0x0fb86ffe,0x8027fec0,0x6881a05d,0x320df500,0x416a3443,
    0x7f7003fd,0x307ee1b2,0x3204889f,0x4013fe0f,0x80bf4ff8,0xff04ffe9,
    0x8ffe2009,0x2077ec4b,0x0df102fd,0x1e1e07f5,0xb70b2020,0x557dc07b,
    0x201ec3ff,0x405ffce8,0xb0126068,0x40ff3001,0x2e2d11ca,0x400bfa02,
    0xf889b3fa,0x1542fb84,0x2ff41f90,0xbf3ff980,0x03bff600,0x3e600bfd,
    0xff112a2f,0x05fb979f,0x0db07fe2,0x000d1166,0x7d0fb8b5,0x7ff43f90,
    0x1e880d10,0x0640bff5,0x03b80590,0x96407f98,0x7c01b568,0x27f5002f,
    0x740fd42d,0x3f200b87,0x4c01bf20,0x200bf1ff,0x360effbb,0x3ff5006f,
    0x7ffcc1cc,0xf102fb8e,0x81bd79bd,0xfffffffc,0xe8805fff,0x41f927c0,
    0xaffcc5f9,0x2a2f401d,0x680901ff,0xf9806880,0x46889307,0x007fb02c,
    0x3616cfea,0x2c45fb87,0xffa83f20,0x3e6fb800,0xfd137005,0x4007fd47,
    0x300c46fb,0xf8817dc1,0x2c801335,0x0b600164,0x90fdc9f3,0x7bff907f,
    0xfb83f980,0x024c0703,0x37d400d8,0x11a20fc4,0x007f901f,0x3e264fea,
    0x361fecc6,0x3a07e401,0x22fe804f,0x2637005f,0x4027f45f,0x5c0001fe,
    0x00bf102f,0x0006c0e8,0x5c7f5095,0x7413fe2f,0x17d401ff,0x200827c4,
    0x8077001c,0x40fb84fb,0xfa84f868,0x2e7f5004,0xaca87f46,0x3200ae2f,
    0x007fc40f,0x905f89f7,0xf317e1b8,0x427dc01f,0x0bee0008,0x1e002fcc,
    0x80e8801e,0xd87f25f8,0x5fff907f,0x10bf10c8,0x3403101f,0xfc80d100,
    0x3441fd81,0x17e21be2,0x0f89fd40,0x7ccffff2,0x41223dac,0x0ef980fc,
    0x05f84fa8,0x2f88dc5b,0xfb80ee98,0x000ff883,0x1be607f9,0x02c45980,
    0xd37403b0,0x5f7fd41f,0xffe9ce98,0x07e42dcd,0x417f416e,0x006c004a,
    0x10bf20dd,0xfb05f98d,0x2d8fea00,0x072a05d4,0x807e4036,0xeecbdfc8,
    0x3b60bf02,0x881b6371,0x1deccdec,0x5001ff10,0xfd985dfd,0x43b800bf,
    0x8097004a,0xb82faaf9,0x222efffe,0xf704fffd,0x3a01bb7b,0x4001c82f,
    0x207f303a,0x2a3443fb,0x003f103f,0x0034c7f5,0x0fc812a0,0x07fff440,
    0x3f6a0bf0,0x000decde,0x02200351,0x20ccccc0,0x80099999,0x48004c09,
    0x10077100,0x800c4013,0x0a010019,0x2e406200,0x46883f30,0x012e02f8,
    0x00970bee,0x1f901260,0x81bff200,0x1e4c405f,0x00000000,0x00000000,
    0x00000000,0x00000000,0x1d100000,0x43443540,0x200f403d,0x004c80fb,
    0x07e402d4,0x20bfd500,0x0035005f,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00762000,0xd30d105b,0x3ae1c880,0x5f540991,0x400f6a01,
    0xea8000fc,0x0002fc2d,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00e60000,0x41a20175,0xc8d402b8,0x73003dff,0x07bb97bb,0x0eeeee88,
    0x46ea6000,0x001eeeee,0x00000000,0x00000000,0x00000000,0x00000000,
    0x08000000,0x00040080,0x13000062,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x40199988,
    0x40199998,0x2e600008,0x54c0061a,0x05b50000,0x2600aa88,0x3330005c,
    0x55100133,0x33333310,0x33331033,0x2aa20133,0x21aa8800,0x15510009,
    0x26666228,0x99998819,0x33333109,0x06666201,0x3039d930,0xffb5103d,
    0x77f54409,0x7bb79502,0x76dc0355,0x06cecbac,0x01f5e74c,0x205ff910,
    0x81ffffd8,0xb8005feb,0x201fffff,0xfe80ace9,0x87ffffff,0x0aeffeb8,
    0x03fcbec8,0x37f6f7f2,0x3bae200e,0x25bcedbc,0x81dfffc9,0x50affea8,
    0x205bfffb,0x700cffd9,0xf707fe69,0x02ffc809,0x0fa807cc,0x220b3bf2,
    0x1fd302fe,0x3f98fa20,0xd817e400,0x506feb9b,0xddd000bf,0x3b220bdd,
    0x3bbfe601,0x2a05feee,0xa8db01ff,0x440fd84f,0x3fd100fe,0xfb0df710,
    0x203f300f,0x4f800ffd,0x2fa83e60,0x3e200544,0x81e201ff,0x8837d46e,
    0x0fcc01fe,0x03ec0fd8,0x06a0bee0,0xbf303ff1,0x2003b800,0x01e400fe,
    0x07fcc05f,0x07f41fc4,0x03e209f3,0x1ae017f4,0x3e201bf2,0x805ff300,
    0x01f200f9,0xdfdf1000,0x5f983c01,0x4fd80ff8,0xbf303900,0x5c007f70,
    0x03f6002f,0x0d0017e6,0x1c00fe40,0x7cc01f50,0xf703f707,0x1b027d49,
    0x1a007fb0,0x03c017ee,0x079017f6,0x400007d8,0x205ff8e8,0xdf0ff107,
    0x2001ff30,0xa83fb818,0xfb84406f,0x4c176002,0xbf70045f,0x027d4017,
    0x2602e400,0x301fb07f,0x80ffccdf,0x00ffcc0b,0x005fb838,0x00ffa80f,
    0x00ff003e,0xf9b44008,0x7f40f04f,0x3ee0fe61,0x2fc80006,0xbd507f98,
    0x2005fb99,0x2bf300e8,0xff81effc,0x3ff03fff,0x02f80004,0x1ff83fcc,
    0x7ffc7f88,0x00ff7003,0xf005fb80,0x2a07fd00,0x3ffffe05,0x07f9306f,
    0x0ffee688,0x9aee881e,0x00bfb04d,0xf105fd00,0x261fb81f,0x3e8802ff,
    0x33377e60,0x65cc1fff,0x77cc5ffe,0x001efec9,0xff3003ea,0x3e60ffa0,
    0x177ffcc7,0x0001bf60,0x01e00bf7,0x016c1fee,0x3aa203fc,0x3234403f,
    0x3203c1ff,0x27fc01aa,0x33bbb6e0,0x7fc07fe0,0x3f60fe21,0x3fff2202,
    0x441df304,0x3f6206fe,0xb8bbee3f,0x0b9001ff,0x3f20ff30,0xe986f986,
    0xff00dfff,0x5fb8000b,0xff100f00,0xff006885,0x100fee00,0x3c1ffb0d,
    0x3e2007b0,0x5ff8805f,0x3ff01ff8,0x17dc0fe4,0x0fff6620,0x3fea17e6,
    0xfb3fdc00,0x200df907,0x07f9802f,0x3aa3dfd1,0x3ffee03f,0x004ff83f,
    0x7802fdc0,0x3c8df900,0x2e00ff00,0x4434403f,0x7c41e6fe,0x81bcccdf,
    0x7ff007ff,0xff103ff0,0x05f707f8,0x7cc37dc0,0x801ff885,0x505fd0fe,
    0x0f9801ff,0x5407f980,0x01fd9cfe,0x217ffe44,0x5c0006ff,0x200f005f,
    0x003e1ff9,0x3fb803fc,0xff983440,0x7ffe40f5,0x7ec6ffff,0x83fe800f,
    0x26f882fe,0x05f707f8,0x7cc0ff80,0x7003fd05,0x220bfa3f,0x02e400ff,
    0x4c007f98,0xff30047f,0x0007fd8d,0x344037dc,0x16abfb00,0xf7007f80,
    0x2a068807,0x47207bff,0x22eba999,0xfe802ffa,0xf983fc83,0x2e03fe25,
    0x43ec002f,0x01fb05f9,0x81fe4f50,0x002f807f,0xfd800df3,0xff501543,
    0x0007fdc1,0xb300df50,0x747fd400,0x401fe001,0x034403fb,0x25c1fff2,
    0x1dfd0aa0,0xf983fe80,0x7fc3fb85,0x4003fb82,0xd05f986d,0xfa97200d,
    0xf9809f04,0x00bf3000,0x025427c4,0x0bfd03fe,0x1ff302a0,0x74004a80,
    0x3fc006df,0x4c03fb80,0x887fd807,0x74c2c05f,0x81ff405f,0xfc86e87e,
    0x2003fb86,0x85f981f8,0x7c4042f9,0x3ea07f40,0x9102e401,0x44013e63,
    0x201f504e,0x4ffa86f9,0x3fd80dc0,0x70007a20,0xff8007ff,0x403fb800,
    0x3f4400fa,0xa9acefe8,0x9fb101ec,0x207fd101,0x203ea3e8,0xfc8bfff8,
    0x8b7209df,0x3df303d9,0x33f6274c,0xf882eb89,0x17c02ec4,0x03aadf50,
    0xfa817e60,0x80fec41f,0x5c41cff9,0x20bfa202,0xf88002e9,0x3fe2000f,
    0x104fc801,0x4017dff9,0xffb71078,0xb70019ff,0x5bfb97df,0x1dcdd980,
    0x2ffffa20,0x7fe41dfb,0x75401dee,0xfa82fddf,0x2600dfff,0x9804ebdc,
    0x37fa200f,0x2eea201c,0x77665401,0x4401efdc,0x2cedffed,0xddffd980,
    0x320002df,0x3ffae004,0xfff701be,0x02000017,0x100004c0,0x11000335,
    0x0984c400,0x440004c0,0x00088009,0x053000c4,0x02600260,0x2aa20880,
    0x00a88000,0x00353100,0x00002200,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x26662000,
    0x26666619,0x10999981,0x83333333,0x22199998,0x88199999,0x5c419999,
    0x4cccc006,0x99999999,0x26666621,0x06c88001,0x26666620,0x887b5000,
    0x44001999,0x26621999,0x88009999,0x4c199999,0x31009999,0x33333333,
    0x4cccc433,0x33331099,0x4ccc4133,0x64c08199,0x3faa3fff,0xefda82ef,
    0xdfffd932,0x2dffc985,0x0bbfff66,0xa8fbfee2,0x3e2007fd,0xefffeeff,
    0xd710fffe,0x7dffdfff,0x007fea80,0x3bfffae2,0x7e440def,0x7ffdcc3f,
    0x37ff6001,0x3bffae22,0xfeb8802b,0x7ffd42df,0xddfff01c,0x49ffdddd,
    0x0beffea8,0x15bffd71,0x0e7ffdcc,0x17fa0bf6,0xf9813fe2,0x03ffe880,
    0x7fe407f1,0x44077402,0x07e2007f,0x40fa89f9,0x77f547fb,0x001fe200,
    0xffb89fee,0xf703fc82,0x3fe200bf,0x007fea07,0x7c03fea0,0xb00fc00e,
    0x0bfe60df,0xf9007fd4,0x2a0ff60d,0x40df907f,0x1bfa204b,0x37f4026c,
    0x3fc01f30,0x9f907300,0x87f98370,0x3fc03ffa,0x643fd400,0x81fdc0ff,
    0xc800ffea,0x3fe606fe,0x07f98000,0x409100bb,0xff101ffb,0x701fe603,
    0x440620df,0x0ff982ff,0xff8803b0,0xf9802dc3,0xf807b02f,0x32022007,
    0x7cc0884f,0xf80dfd07,0x87f98007,0x1fdc2ff9,0x404fdd98,0x2206fbf8,
    0xf98000ff,0x31005c87,0x880ffe60,0x0ff301ff,0xb0005fb8,0x20ffe0bf,
    0x3ff70068,0xfc8003a6,0x7c02d40f,0x4fc80007,0x3a0ff300,0x023fc06f,
    0x3e21fe60,0x981fdc4f,0x2e00ff9d,0x3e206fac,0x7f98000f,0xe80002e4,
    0x0ffc405f,0x7dc07f98,0x0ff50005,0x0970dff3,0x0f477ec0,0x897fa200,
    0x647f801e,0xfc803dff,0x30ff3004,0x57f807ff,0x7cc05fff,0x5c3ffa87,
    0x3fab303f,0x1bea7e04,0x8000ff88,0x001727f9,0x2007fe40,0xff301ff8,
    0x0005fb80,0xff990bfe,0x22001e81,0x50002fff,0x400f25ff,0x000f547f,
    0x3e6009f9,0x400efd87,0x6fb9caff,0x3f61fe60,0x981fdc0f,0xb501ff55,
    0xff881bea,0xb7f98000,0x3e60000b,0x1ff8802f,0xfb80ff30,0x17f20005,
    0x3447fd1d,0x00ffdc00,0x0d3df900,0x01d53fc0,0x3004fc80,0x5dd753ff,
    0xfb0bfe00,0x4c3fe603,0x3fb82ffd,0x41ff4b30,0x440df51e,0xf98000ff,
    0x80005fdf,0xf1005fe8,0x33fe603f,0xfdcccccc,0x3fe60005,0xb9beeb30,
    0x6ffa8003,0x3ffe2000,0x2ddfe001,0x004fc800,0x5ff75ff3,0x7e43fc00,
    0xdb7ff302,0x0fee0179,0xa8df72cc,0xf881bea6,0xff98000f,0x40005ffa,
    0xf1000efd,0x27fe603f,0xfc999999,0xfd003105,0x8ffc4b25,0x4f4c001e,
    0x2e0004ff,0x5ffc006f,0x9f90000f,0xfb9fe600,0x90ff000f,0x01fe605f,
    0x16607f70,0xf516c5ff,0x007fc40d,0xffabfcc0,0x3ff50005,0x80ffc400,
    0x2fdc07f9,0x2e027fc4,0x67ec1f5f,0x8f440068,0x50001ffb,0xcff800df,
    0x9f90006f,0xfb1fe600,0x321fe00b,0x00ff302f,0x8b303fb8,0xfa8d36fb,
    0x003fe206,0xffa9fe60,0x27fc4005,0x407fe200,0x2fdc07f9,0x2603ffc4,
    0x77dc5bff,0x21ec003b,0xf50006fd,0xfb7f800d,0x09f90009,0xff11fe60,
    0xf90ff007,0x001fe605,0x116607f7,0xfa87b5ff,0x003fe206,0x547f9811,
    0x3f6005ff,0x7fc40406,0xb80ff301,0x01d1105f,0x7c42ffe8,0x16e000ff,
    0x20013fe2,0xbfc006fa,0x64002fe8,0x0ff3004f,0x7f803ff5,0xff302fc8,
    0x303fb800,0x50fdf90b,0x07fc40df,0x0ff30320,0xf700bff5,0x440c803f,
    0x0ff301ff,0x16205fb8,0x7ec1fee0,0xb81ae006,0x7dc002ff,0xf33fc006,
    0x27ec003f,0xc80ff980,0x21fe00ef,0x0ff502fc,0xb503fb80,0xf709ff10,
    0x007fcc0f,0x20ff50b1,0xf300dffa,0x8868807f,0x0ff501ff,0x39106fb8,
    0x2a09f100,0x07f7003f,0x000fffc4,0x22001ff9,0x03fee0ff,0xb8037f40,
    0x1dfd01ff,0x7f90ff10,0x8007fee0,0x20f704fc,0x0ffc80fd,0x4417ff50,
    0xffb83fa9,0x03dffb00,0x75440bfd,0x702ff985,0x3fec01ff,0x0b6001c4,
    0x7f5c00f8,0xffd983ef,0x36600dff,0x5403efff,0xff92dffd,0x3fae019f,
    0xf9302dff,0xf9817dff,0xffb51dff,0x7fff715b,0x5f7ffe4c,0x67ffdc00,
    0x87bff930,0x7ffecc49,0xfff930be,0xffffffff,0x77ffe4c1,0x3fffee0b,
    0xffff73ef,0xffffffff,0x7fffe447,0xdfff931b,0x7ffed417,0x00c0003d,
    0x00000006,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x51000000,0x99999881,0x10999999,
    0x33333333,0x99883333,0x20009999,0x260dfffc,0x266625fe,0x80000999,
    0x2aa20002,0x0c015000,0x10003500,0x02041001,0x00880010,0xdfd90040,
    0x1017fecc,0x37ffee04,0x2013faa1,0x7f5c40fd,0xffeeeeef,0xddffd712,
    0x88ffdddd,0xfeefffeb,0x3ee01cef,0xeb88b707,0xdfeddeff,0x002e8001,
    0x1ffffecc,0x3401fd50,0x5c005900,0xcb82dede,0x0ff25eec,0x80bfb995,
    0x404ffcda,0x981cedeb,0x442fe86f,0x98df97eb,0x804b80ff,0xff500ffb,
    0xff50fa20,0x7dc1e601,0x02ffb887,0x407607fa,0xdfd887fb,0x00bf5000,
    0xfffcbee8,0x00ffcb80,0x016400f7,0x87fa0dc8,0x9fb36469,0x09f71fc4,
    0x05fb83aa,0x20ffc49b,0x42fc86f8,0xfebbffca,0x06c17ec0,0x403fba60,
    0x30e607fa,0x406401ff,0x3fe607f9,0x688bf503,0x7c41fe60,0x1ffb003f,
    0xfb10e600,0x5407f409,0x00b2007f,0x49f90bea,0x9062c45c,0x4c2fcc3f,
    0x542fd82f,0x2237dc0f,0xf02fc86f,0x2fd4047f,0x367a0162,0x80ff300f,
    0x1007fc41,0xf501fe60,0xc83fa07f,0xc81fe603,0xfef8806f,0x3ea07004,
    0xb81fd00f,0x403fffff,0x80fe802c,0x0313f20a,0x437c4398,0x45f981fc,
    0xfcaaaaed,0x7e437c47,0x3a00ff02,0x7900b21f,0x3fcc03f6,0x01ff1008,
    0x807f9802,0x49f506fd,0x81fe600f,0x5e400ffa,0xf80007fa,0x7c03f607,
    0x200b2007,0xdff3006f,0xfb930005,0xf101fd0d,0x4ccefc1f,0x37c41999,
    0x07f817e4,0x20349f70,0x4c03f659,0xf103887f,0x4c09101f,0x0ffa807f,
    0x80b51fd0,0x17f607f9,0x0bfe1f10,0x6c0bf000,0x950ff00f,0x99bd9999,
    0x1fe21999,0x0effe980,0xdf0cd880,0xff01ff88,0xf1002fc3,0x3e05f90d,
    0x51ff1007,0xfb074407,0x911fe601,0x103fe207,0x03fcc097,0xfb817fcc,
    0x3fcc01dc,0x5c01efc8,0x8001bee4,0x03f602f8,0x5554c3fc,0xaaaacdaa,
    0x0407fe0a,0x200fffb8,0x7437c3f9,0x7c1fd03f,0x21be2007,0x00ff02fc,
    0xb006dfe4,0xf300fd85,0x07ffffff,0x3bbbbfe2,0x1fe604ff,0xf813fe20,
    0xeff9806f,0x005ffeee,0x00ffc43d,0x7ec05c80,0x6400ff00,0x704fe802,
    0x80ffa21c,0xfc86f87e,0x3fe8df04,0x441ff090,0x00ff02fe,0x9502ffcc,
    0x3e601fb0,0xf881e447,0x3026440f,0x9ff100ff,0x4c01fdc0,0xeba999ff,
    0x21a601cf,0xe88005fd,0xf807ec00,0x200b2007,0xb05c1ffb,0xf062fa83,
    0x4c3fc41f,0x5c3f886f,0x6c1542ff,0xdfdca9cf,0x74007f82,0xb01d101f,
    0x21fe601f,0x01ff1038,0x807f9812,0x3e202ff9,0x107f9800,0x2f601ffd,
    0x0ffb9999,0x6c016c00,0x400ff00f,0xbffd002c,0x545d89f9,0xdfd8ff66,
    0x43affdc9,0x413624fd,0x06eceffe,0x3f2bfff1,0x007fc41c,0x7fe40d50,
    0xffffffff,0x0083fcc2,0x80601ff1,0xffa807f9,0x4c012a01,0x0ffe607f,
    0x333333e2,0x32003fec,0x201fb004,0x00b2007f,0x05f7fec4,0x876f3ff6,
    0x3ffa63fd,0x3f209fb3,0x36204ece,0x4c00efff,0x3f6a0260,0x806003ef,
    0xfeeeeeeb,0x3fcc1eef,0x003fe200,0x3a01fe60,0x800f406f,0x37fc07f9,
    0x0df701e4,0xfd8012a0,0x2004ff00,0x00c4002c,0x80c02621,0x00980080,
    0x00002620,0x00000000,0x7f9807ec,0x007fc400,0x80ff302e,0x16a01ffa,
    0x2207f980,0x200f84ff,0x2d402ff8,0x7403f600,0x04c02abf,0x00000000,
    0x00000000,0x00000000,0x00fd8000,0xf9800ff5,0x2a16600f,0x0ffea07f,
    0x001ddff1,0xff903fd4,0xfd805c83,0x2c416a06,0xff501fe8,0x00000009,
    0x00000000,0x00000000,0x80000000,0x1ff700fd,0x80ffd400,0x0ffb83e9,
    0x440f7e4c,0x5c001dff,0x7fdc40ff,0x5c01fc42,0xeefa83ff,0xd04feeee,
    0x0000003f,0x00000000,0x00000000,0x00000000,0x981fb000,0x00befffc,
    0x3bfffee6,0x20ffffee,0xefffffc9,0x00802cde,0x7fffe4c0,0x41ceffef,
    0x900cffeb,0x2a1bffff,0xffffffff,0x77fed41f,0x0000000c,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x081c8800,0x00177004,
    0x01004080,0x7dcffff2,0x3ff61dff,0x23dffd51,0x7fec3ffd,0x02ffffff,
    0x205b8006,0x8530a60a,0x2eeee609,0xbbbbbbbb,0x3b880000,0x55554088,
    0x3777622a,0xdddddddd,0x00000001,0xdb500000,0xeabf5c45,0xcfc882ff,
    0xabf54000,0x3ff23ffe,0x4c5fb80e,0xe885f07f,0x3607e65f,0x2205fd81,
    0x20fb003f,0xe87fe6f9,0x263ff71f,0xbbbbbbbb,0x3660bbbb,0xd8700bef,
    0xf83fe22f,0x260fffff,0x99999999,0x00000999,0x40000000,0xfca81deb,
    0x0ffcacaf,0x003bd710,0x7395ff75,0xfb3793ff,0x3f61fe0b,0xff8824c1,
    0x2e1203d1,0x3b3200ef,0x2d93d880,0x7cdf50da,0x7dc7fe1f,0x5b00004f,
    0x4c5bfb51,0x3fe24d84,0x0aaaaaa0,0x00000000,0x22000000,0x7c400cec,
    0x400ff42f,0xff802eda,0x3e077e41,0xfb85f907,0xdf500e44,0x3e604079,
    0x2d5a601f,0x56567fc4,0x74bf31ff,0x9983fa0f,0x82880005,0x81defeb8,
    0x00004468,0x00000000,0x36600000,0x1fe000be,0xc9800bf2,0x50ff00cf,
    0x301fd09f,0x20ffe8bf,0x006fd806,0x3d00ffa2,0xedca80f4,0xfb1fc0ad,
    0x952b87c8,0x99999999,0x20021999,0x00044008,0x00000000,0x98000000,
    0xff0002ee,0x10005f70,0x87f819f7,0x01fd84fa,0x3f2ea1fd,0xff300753,
    0x017f6003,0xa88698b5,0x2e82dedc,0x498b71ae,0x2aaaaaa2,0x00aaaaaa,
    0x00000000,0x00000000,0x32200000,0x7f8000cf,0x88002fb8,0x43fc0cec,
    0x01fd84fa,0x3e23a7f7,0xf7b001b6,0x01df700d,0x11e40744,0xff7959fd,
    0x98950641,0x00000aa4,0x00000000,0x00000000,0x44000000,0x3e001dfb,
    0x2002fb87,0x1fe02eda,0x07f613ea,0xfb2577c4,0x327900b5,0x07fe604f,
    0xe881e411,0x55727b10,0x8831060e,0x00000000,0x00000000,0x00000000,
    0xea800000,0xb87f802e,0x1deb802f,0x4fa87f80,0x3f601fd8,0x00bfea0e,
    0xd02fe8b5,0x1a63507f,0x01f60970,0x00000000,0x00000000,0x00000000,
    0x00000000,0x3e017fb3,0x9102fb87,0x3fc0019d,0x0fec27d4,0x0ff09f50,
    0x7fd40f98,0x0d82fe41,0x00b70000,0x00000000,0x00000000,0x00000000,
    0x00000000,0xf9833f22,0x6cc3fc87,0x7c4000be,0x742fd40f,0x640fc02f,
    0x893fea04,0xff53fffd,0x1ffddddd,0x00000000,0x00000000,0x00000000,
    0x00000000,0x80000000,0x5bffd51b,0x547fff91,0xffb30002,0x33ffae5b,
    0x02effc98,0x00004406,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__times_27_usascii_x[95]={ 0,2,1,0,1,0,0,0,1,0,1,0,1,0,
1,0,0,2,0,0,0,1,1,0,1,0,2,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,1,0,0,0,0,0,0,0,2,0,0,0,-1,1,0,-1,0,0,0,0,0,0,0,
-2,0,0,0,0,0,-1,0,0,1,0,0,0,0,0,0,0,3,1,2,0, };
static signed short stb__times_27_usascii_y[95]={ 21,4,4,4,3,4,4,4,4,4,4,6,18,14,
18,4,4,4,4,4,4,4,4,4,4,4,9,9,7,10,7,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,25,4,9,4,9,4,9,4,9,4,4,
4,4,4,9,9,9,9,9,9,9,6,10,10,10,10,10,10,4,4,4,12, };
static unsigned short stb__times_27_usascii_w[95]={ 0,4,8,12,10,20,19,4,7,8,10,14,4,8,
4,7,12,8,12,11,12,10,11,12,10,12,3,5,14,14,14,9,21,18,15,16,17,15,13,18,18,8,10,18,
15,22,19,17,13,17,17,12,15,18,18,23,18,18,15,6,7,7,11,14,5,11,13,11,13,11,11,12,13,7,
7,13,7,19,13,12,13,13,9,8,7,13,12,18,12,13,11,8,2,7,14, };
static unsigned short stb__times_27_usascii_h[95]={ 0,18,8,18,20,18,18,8,23,23,10,14,8,3,
4,18,18,17,17,18,17,18,18,18,18,18,13,17,12,6,12,18,23,17,17,18,17,17,17,18,17,17,18,17,
17,17,18,18,17,22,17,18,17,18,18,18,17,17,17,22,18,22,10,2,5,13,18,13,18,13,17,18,17,17,
23,17,17,12,12,13,18,18,12,13,16,12,12,12,11,17,11,23,23,23,5, };
static unsigned short stb__times_27_usascii_s[95]={ 254,130,132,163,101,176,197,141,30,1,121,
141,146,192,187,238,53,124,111,80,1,106,117,129,217,153,177,249,1,151,30,
228,46,92,76,179,44,28,14,34,230,221,142,186,170,147,1,112,125,76,93,
166,77,196,215,1,25,44,205,94,246,68,109,201,181,181,92,156,66,206,234,
21,111,246,38,63,139,45,16,193,149,135,232,168,133,218,242,65,84,62,97,
21,18,10,166, };
static unsigned short stb__times_27_usascii_t[95]={ 1,1,81,1,1,1,1,81,1,1,81,
63,81,81,81,1,25,63,63,25,63,25,25,25,1,25,63,44,81,81,81,
1,1,63,63,25,63,63,63,25,44,44,25,44,44,44,25,1,44,1,44,
25,44,25,25,44,44,44,44,1,1,1,81,81,81,63,25,63,25,63,25,
25,44,25,1,44,44,81,81,63,1,1,63,63,63,63,63,81,81,63,81,
1,1,1,81, };
static unsigned short stb__times_27_usascii_a[95]={ 98,130,159,195,195,325,303,70,
130,130,195,220,98,130,98,108,195,195,195,195,195,195,195,195,
195,195,108,108,220,220,220,173,359,282,260,260,282,238,217,282,
282,130,152,282,238,347,282,282,217,282,260,217,238,282,282,368,
282,282,238,130,108,130,183,195,130,173,195,173,195,173,130,195,
195,108,108,195,108,303,195,195,195,195,130,152,108,195,195,282,
195,195,173,187,78,187,211, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_27_usascii_BITMAP_HEIGHT or STB_FONT_times_27_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_27_usascii(stb_fontchar font[STB_FONT_times_27_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_times_27_usascii_BITMAP_HEIGHT][STB_FONT_times_27_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_27_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_27_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_27_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_27_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_27_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_27_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_27_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__times_27_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__times_27_usascii_s[i] + stb__times_27_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__times_27_usascii_t[i] + stb__times_27_usascii_h[i]) * recip_height;
            font[i].x0 = stb__times_27_usascii_x[i];
            font[i].y0 = stb__times_27_usascii_y[i];
            font[i].x1 = stb__times_27_usascii_x[i] + stb__times_27_usascii_w[i];
            font[i].y1 = stb__times_27_usascii_y[i] + stb__times_27_usascii_h[i];
            font[i].advance_int = (stb__times_27_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__times_27_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_27_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_27_usascii_s[i] + stb__times_27_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_27_usascii_t[i] + stb__times_27_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_27_usascii_x[i] - 0.5f;
            font[i].y0f = stb__times_27_usascii_y[i] - 0.5f;
            font[i].x1f = stb__times_27_usascii_x[i] + stb__times_27_usascii_w[i] + 0.5f;
            font[i].y1f = stb__times_27_usascii_y[i] + stb__times_27_usascii_h[i] + 0.5f;
            font[i].advance = stb__times_27_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_27_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_27_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_27_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_27_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_27_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_27_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_27_usascii_LINE_SPACING
#endif

