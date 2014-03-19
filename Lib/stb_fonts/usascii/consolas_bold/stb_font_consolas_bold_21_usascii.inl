// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_bold_21_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_bold_21_usascii'.
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

#define STB_FONT_consolas_bold_21_usascii_BITMAP_WIDTH         256
#define STB_FONT_consolas_bold_21_usascii_BITMAP_HEIGHT         70
#define STB_FONT_consolas_bold_21_usascii_BITMAP_HEIGHT_POW2   128

#define STB_FONT_consolas_bold_21_usascii_FIRST_CHAR            32
#define STB_FONT_consolas_bold_21_usascii_NUM_CHARS             95

#define STB_FONT_consolas_bold_21_usascii_LINE_SPACING          14

static unsigned int stb__consolas_bold_21_usascii_pixels[]={
    0x20004bd3,0x97f64400,0x00fffff9,0xfffe93aa,0x3797103f,0x8005bdb0,
    0x5544002a,0x02bca880,0x55300553,0x37975101,0x400aa617,0x0a980bb8,
    0x2600a988,0x4155102a,0x1a9809aa,0x44003795,0x5997102a,0x00aa6555,
    0x2ff51b88,0x9d1003e8,0x997fff40,0x200fffff,0xfffd1fff,0xffff507f,
    0x3fffd87f,0x8009f100,0xfff986fb,0x7fd40eff,0x20ffe400,0xffffffea,
    0xf100ff90,0x37c45fff,0x06ffffd4,0x7e417fd4,0x2ffffe27,0x3ff73f20,
    0xff5003ff,0xfffffb81,0x00ff76ff,0xbfd57ff4,0x74401ffa,0x1ffb80ef,
    0xd803fe60,0x407fd0ff,0xffa8affa,0x8807fc82,0x3e000cfb,0x6fffcc3f,
    0x3fe87ffe,0xf307fe40,0x1ffb57df,0x3ee01ff2,0x07f64f8a,0x9ff9bff3,
    0xff117fe0,0x7ffff449,0x33bfff25,0xfa800ffe,0x26ffe60f,0xff72cffb,
    0x567ffc00,0x803ff27f,0x9f901ffd,0x400ff980,0x440ffa0a,0x42fd41ff,
    0xff501ff8,0x5009ffff,0x0efd81ff,0xdf70ffee,0x360ffc80,0x43fea0ff,
    0x1fc807fc,0x3213eedf,0x641bee6f,0x07fea0ff,0xfc9ffecc,0x00ffe65f,
    0x6fb83fea,0x0ff72fec,0x7d47fe40,0x5c077f47,0x0ff603ff,0x2a21ff30,
    0x3a2aaaaa,0x209f703f,0x81ff80ff,0xfefffffa,0x4c4fe804,0x46ff83ff,
    0x3ee02ff8,0xf513fe0f,0x5cdbf21f,0x7cdfd41b,0xbf906f8d,0xff9837dc,
    0xf101bf63,0x3e1ff2bf,0xf997504f,0x3237dc1f,0x531fee4f,0x3fd41035,
    0x3fe13fe2,0x201fec04,0xfff70ff9,0x1ff4ffff,0xccc88ff8,0x1ff81fdc,
    0x04fb6fe8,0xf507fe60,0x90ffd03f,0x13fdc0bf,0x0ffa87ff,0xffff9df9,
    0xd9ffff87,0x31ff501f,0xb7f407ff,0xff802ff8,0xbfd0ff96,0xfffffea8,
    0x273fe60f,0x9fee2ffa,0x5400eff8,0x546fc87f,0x1ff400ff,0x64c3fe60,
    0x3a7fdccc,0xf8ef983f,0x82fcdfff,0xd5ff83fe,0x42fe400f,0xffc80ffb,
    0xb80ffcc0,0x50ffe27f,0x3fff21ff,0x540ffece,0x7404fa9b,0x5404ffff,
    0x807fb8ff,0x0ff94ffb,0x77fc49ff,0x740ffdab,0x5c4fffff,0x003ffa7f,
    0x3fea1fea,0xf301bf60,0x0ff9803f,0x3fe9fee0,0xcdfccfb8,0xfc82fccf,
    0x7efff40e,0x05ff1005,0xff701ff9,0x2a09fd01,0x3227fc7f,0x4bff90ff,
    0xdf103ff9,0x1fffc801,0x9fd7ff00,0x3bfffe60,0xff88ff90,0xfa83ff63,
    0x2eb7ee0f,0xfb7fb81a,0xfa8d403f,0x3e2ff887,0x9ffd505f,0x401ff300,
    0x20ffa7fb,0xfc9feafd,0xfd882fcb,0x3fffe66f,0x37dc00cf,0xfc81ffb8,
    0x501ff507,0x88ffe8ff,0xff90fffc,0x3f609ff0,0x7fffdc02,0x3f209f93,
    0xff101fff,0x227fc87d,0x13fe0ffd,0x6fec1ff5,0x7e7fdc00,0x2bff602f,
    0x29fd07fa,0xff703ff8,0x1ff3003d,0x7fd3fdc0,0x32ff3fb0,0xc882fcaf,
    0x7fe447ff,0x3fa02fff,0xb07ff503,0x41ffc0df,0x7ffd46fa,0xf90fffff,
    0xf50bfd0f,0x4c3bfd39,0xdaffcbff,0xdfff303f,0x6407fc40,0x3fffeeff,
    0xff50ffe2,0x7ffffd41,0x3ffee2de,0x67ffc05f,0x2bfb07fa,0x32201ff8,
    0x7fcc00ff,0xfe9fee00,0xb7f9fe83,0xf903fb5f,0x7f7dc03d,0x0ffa81ff,
    0xf889ff30,0x21bee04f,0xfffb85e9,0xff90ffad,0xff889ff0,0x2e5fcff8,
    0x3ffff67f,0x80bffa02,0xffc80ee8,0x7c41efff,0x107fd43f,0xffffddff,
    0x3feffee5,0x2a7ff203,0x7c9fd07f,0x02ff803f,0xf7007fcc,0x7f41ff4f,
    0xfd3fd7f9,0xf900bfa0,0xfb07ff71,0x8bffe809,0x2200ffd9,0x098002ff,
    0x1ff21ff5,0xafc87ff1,0x321fb4f9,0x1fffa26f,0x8000dfd0,0x7c018ffc,
    0xd07fe44f,0x75fe889f,0x80bff6ff,0x3e0ff508,0x2017f63f,0x7fcc03fd,
    0xfe9fee00,0xcff9fd83,0xff05fdff,0xff37d803,0x401ff987,0xfffffff9,
    0x4c5fd803,0x1ff5005e,0xffd89ff2,0x9fcd7ea0,0x45ff70fd,0x3f206ffb,
    0x0ffcc02f,0xfe803fe4,0x0fffc88f,0x9fd07ff1,0x7ff45fee,0x987fa800,
    0x01fee2ff,0xff300ff6,0xfd3fdc01,0xff93fb07,0x3e03fffb,0xfe9bd81f,
    0x7e40ffea,0xfffb3006,0x3fe6005d,0x200bff60,0xdff90ffa,0x7447fffd,
    0x9befbe0f,0xffeefff8,0x3ffaa4ff,0x4ffc804f,0xf5007fc8,0x1ffdffff,
    0x765e7ffc,0x4cff71ff,0x7d400eff,0x7cc7fb87,0x01fec00f,0xfb803fe6,
    0x3f20ffa7,0x802a6553,0xffff81ff,0x7c42ffff,0x3fdc002f,0xf727f400,
    0x1ff5001f,0x3bffffaa,0x3aa17e41,0x7fec41ef,0x72ffcbff,0x2a007fff,
    0x07fc82ff,0x237ffee0,0x3ff660ff,0x3ee1dfff,0x202ffdc7,0x27fc47fa,
    0x3f202ffc,0x007fcc04,0x41ff4dfb,0xff0006fa,0xdfffb903,0x00ff7019,
    0x973bff30,0x088ff500,0x00310000,0x004c0040,0x22000662,0x09800000,
    0x00333100,0x23fd4000,0xffa80ffd,0x803fee03,0xf8830ff9,0x740ffa5f,
    0x3ee0183f,0x00fea00f,0x360007fd,0x802fffff,0x000003ff,0x00000000,
    0x00000000,0x00000000,0x64ff5000,0x3fee02ff,0x3dfff101,0x43ffbba6,
    0x1fffeefd,0xa8bbbbfa,0x86eccdff,0x5c04fffc,0x000cc01f,0x00b7b6a0,
    0x000004c4,0x00000000,0x00000000,0x00000000,0x57fa8000,0xffb009ff,
    0x4bff6201,0xb0fffff9,0xe83dffff,0x7543ffff,0xfd83ffff,0x00ca803e,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x2745fea0,
    0x00009d00,0x00026620,0x00006620,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x4ff50000,0x00004000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x00000198,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x40005530,0x2aa2ccca,0x6cc00aaa,
    0x0254400d,0x202bca88,0x1aaaaaaa,0x00577510,0x2206aa62,0x7100acca,
    0x5e5cc403,0xaccba882,0x55555540,0x2a02aa0a,0x7975101a,0x5e65cc13,
    0xaaaaa981,0x15530aaa,0x15545550,0x5440aa88,0x02aa81bc,0x7fc83551,
    0xfffe8800,0xfffff15f,0x03ffc805,0x7d403fe4,0x440effff,0x4fffffff,
    0xeffffe98,0xffffb300,0xfffffb89,0x82ffe82f,0x1ffffffb,0x3fffffee,
    0x3ffffe23,0x05ff11ff,0xfff909fd,0x3fe69fff,0x7ec5ffff,0x2fffffff,
    0xffa8bff1,0x360bfee3,0x3fff226f,0x07fec5ff,0x3f20ffd4,0xbffd8007,
    0x3eeaa3aa,0x0ffdc02f,0xf301ff20,0x8fffdbff,0xfffffff8,0x6df7fc44,
    0xfff986ff,0x3fea3eee,0xf87febad,0x7ffe44ff,0xff51fecd,0x447d999d,
    0x1ffdcccc,0x9fd05ff1,0xeddfffe8,0xd979d34f,0x777647ff,0x322fffee,
    0x03ffa1ff,0x3ff98dfd,0x3ff37fee,0x20bfea3f,0x07fc87fc,0x9804ff80,
    0x019802ff,0x55ffb551,0x20efe855,0x3fe23ffb,0x20efc800,0x77fc2ffb,
    0xf51bf201,0x20ffc81f,0x8440eff8,0x98000ffd,0x05ff11ff,0x27fdc9fd,
    0xbff100c4,0x445ff980,0x07ff56ff,0x37ec3ff7,0x4bff10e4,0x4ff84ff8,
    0x37956fc8,0x4017fc40,0x55502ff9,0xfff50155,0x4cffffff,0x26ff83ff,
    0x7c400ff8,0x727fcc3f,0xffc801ff,0x4041fee0,0x7f401ffc,0xff98000f,
    0xfd05ff11,0x001bfe29,0x7f403fe8,0xeaffb80f,0x4d7fa06f,0xdfd003ff,
    0x7fcc7fe8,0xffdefc82,0x5ff102ff,0x105ff300,0x305fffff,0x999ffd99,
    0x740ffd49,0x26ffe27f,0x543ff301,0x3bf65fff,0xff981a98,0x003ffaae,
    0x3f201bfa,0x26000bef,0x05ff11ff,0x0bfe69fd,0x00ffdc00,0x7f407ff7,
    0x3ee02fff,0x2006fc9f,0x0ffdc5ff,0xff901ff7,0x44dff9df,0xffffffff,
    0x82ff983f,0x02ffdcc8,0xff703fe4,0x221ff901,0x44ffffff,0xffd88ffa,
    0x3fffa6fe,0x7d42efff,0x4003ffff,0xfe8805ff,0x9800cfff,0x05ff11ff,
    0x47fea9fd,0x6c3eeee8,0x2601fffe,0x7fd405ff,0xfdfe806f,0x5ff5002f,
    0x3fa3ff98,0x5cbff905,0xffff10ff,0x307fffff,0xff9805ff,0x903fe402,
    0x1ff701ff,0x3fffbba2,0x3abfea4f,0x3e7fbaff,0xfffeefff,0x3ffffa20,
    0x224d980d,0xf91004ff,0x9805ffff,0x05ff11ff,0x47fee9fd,0x7c4ffff8,
    0xd01effff,0xff9801ff,0xfffb805f,0x0bff3006,0x1ffc57fa,0x7fd47fc8,
    0x802ff880,0x7cc02ff9,0x03fe402f,0xff903ff7,0x2a7ff880,0xf90dffff,
    0x3e62ffcd,0xb5dfd13f,0x7ffd0dff,0x22002ffc,0x200fffeb,0x5ff11ff9,
    0x3fea9fd0,0x09ff5511,0x703ffaa2,0xffd005ff,0xffd003ff,0x1dfd1005,
    0x3ea3ff20,0xa8ff900f,0x2ff880ff,0x402ff980,0x7e402ff9,0x20ffea07,
    0xffb806fd,0xd87fff31,0x3a17fa5f,0x641df95f,0x2fff42ff,0x6c000dfd,
    0x3fe602ff,0xfd05ff11,0x3a0ffe69,0x17fcc04f,0xf500bff3,0x900dff9f,
    0xdfd100ff,0x657fcc01,0x51ff206f,0x5ff101ff,0x805ff300,0x7e402ff9,
    0x113fe207,0xff9009ff,0x3e22ffc1,0x3e1ff63f,0xf889fd4f,0xb2ffc43f,
    0x2a0005ff,0x3fea02ff,0x3fe13fe1,0xfd0dff13,0x22ff9809,0xfe800ffe,
    0xb805ff96,0x77f4407f,0xfecff800,0xf51ff203,0x05ff101f,0x9805ff30,
    0x7fdc02ff,0x22fff602,0x1020ffd9,0xffc8dff7,0xff51ff62,0xfe97fdc7,
    0x207fea0f,0x3ffe23fe,0x591c989b,0x987ff4c1,0xd8ffd10b,0x83ff20ff,
    0xe889effb,0xffd3014f,0x2673fee1,0x3fee0999,0x401fff12,0x3fa207fb,
    0x80aaaabf,0x201ffffd,0x07fd47fc,0x4c017fc4,0x7fcc02ff,0x77ffcc02,
    0x7fffcc7e,0x7fd43fff,0x440fffff,0x2fffefff,0xffffffe8,0x3bbffea5,
    0x77dc45ff,0x7ffffdc0,0xfffff1ff,0x7fcc7fff,0x7cc3ffff,0x84fffeff,
    0xfffffffd,0xffffff94,0x7ffffc5f,0xff13ffff,0x204ffb8d,0x3ff207fb,
    0x82ffffff,0x6407fffa,0x407fd47f,0xff702ff8,0x25ffffff,0xfffffffb,
    0xffff502f,0xdfffb10f,0xfffff505,0x3ff62019,0x3ff201ef,0xffea83ff,
    0x3ff60cff,0xfffb301e,0x3fffa1bf,0x7ec42eff,0xfd302fff,0x75c07fff,
    0xf91dffff,0xf83bffff,0xffffffff,0xf885ff93,0x0ff700ff,0x7fffffe4,
    0xfff882ff,0x2a3fe404,0x2ff880ff,0xffffff70,0x3ffee5ff,0x402fffff,
    0x00980098,0x0c000cc4,0x22002600,0x00355009,0x03330044,0x09800260,
    0x9880cc00,0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x2a01a980,
    0x2035500a,0x21a982aa,0x0554c2aa,0x55555555,0x510aa615,0x55554455,
    0x511aaaaa,0x85555555,0x31aa81aa,0x40135555,0x2aaaaaaa,0x2aaaaaaa,
    0x06aaaaa2,0x1a885540,0x00d5554c,0x2001aaa8,0xaa982aa9,0x1aa809aa,
    0x06f2a600,0x0faa0008,0x07fc09f9,0x7c0fffee,0xf27e43ff,0x1ffec3ff,
    0xfffffffd,0xfb1bf25f,0x7fffc43f,0xf75fffff,0x8fffffff,0x94ff83ff,
    0x09ffffff,0xfffffff1,0x3ffffe2b,0xffff17ff,0xfe805fff,0xffc87f70,
    0x301dffff,0x7400bfff,0xfffc87ff,0x3fe0dfff,0xffff9004,0x009f30bf,
    0x4fc8bffe,0x7f543fe0,0xfff03fff,0x3fe4fc8d,0x47fff13f,0xfffffffe,
    0x7d4df92f,0x7777444f,0x934eeeff,0x8999ffd9,0x94ff83ff,0x9fffddff,
    0xeeeeff88,0xdddff14e,0x3bfe2bdd,0x204fffee,0xf90bf27f,0x0dffd99f,
    0x003fffee,0x321fffee,0x6ffedcff,0x3ee013fe,0x43ffdbdf,0x7400dffc,
    0x813ee4ff,0x3effee7f,0x5ffff03f,0xdfff27e4,0x2013ffea,0x2df90ffd,
    0xfb806ff8,0x207fb807,0x94ff83ff,0x23ffc4df,0x3e203ff8,0x8bfe203f,
    0x4cc1ffe8,0x1bfd99ff,0x1ff91bf2,0x05ffbfd0,0x87fdff88,0x97fe47fc,
    0x5ff804ff,0x3ee07fec,0x3fe600ef,0x21a97ee4,0x3ff8e27f,0x64dfdff0,
    0x1fbdf14f,0x9809f9fb,0x65bf24ff,0x7fb801ff,0x3e07fb80,0xf94ff83f,
    0x7c47fc8d,0x0ffe203f,0x7cc2ff88,0x7ffffc4f,0xf90fffff,0x440ffb8d,
    0x404ff9ff,0xc87fadfd,0xff4ff87f,0x42ff8809,0xff981ffa,0xa8bfe01f,
    0x3e2df35f,0x7c0ffe07,0x9f91ffbf,0x3efefbe2,0x7ec04fae,0x3e7bf20f,
    0x0ff7003f,0x7fc0ff70,0xdf94ff83,0x7fc46fe8,0x80ffe203,0x5fe82ff8,
    0x7e677ee4,0x89bf24cf,0x97fa85fe,0x47fd40ff,0x87fc87fa,0x809ff4ff,
    0x7fcc4ff8,0x85ffd102,0xafd46fc8,0x06f89ffb,0x4ffc0ffe,0x229f95fd,
    0xabfef9ef,0x13fe205f,0x00bfdff9,0x7dc03fdc,0x3ffffe07,0xff94ffff,
    0x883ffd99,0x2ccccdff,0xfffffff1,0x360bfe2b,0x3e4fa86f,0xfeeffc87,
    0x55fd80df,0x4ffa03ff,0x47fc87fa,0x09ff2ffa,0x9337fff0,0x7fcc07ff,
    0x81bffd1f,0x17ffd6f9,0x81ffc0df,0xc9ffa9ff,0x3febf34f,0x3205fa9f,
    0x7ffe40ff,0x1fee005f,0xff81fee0,0x4fffffff,0x1bfffff9,0xffffff10,
    0x3fffe27f,0x5ff15fff,0x7f70ffb0,0x3ff21be2,0xf84fffff,0x909ff12f,
    0x643fd4df,0x6ffcaaff,0x3ea013fe,0x2fffffff,0x5c3fff30,0xf1df301a,
    0x40bf3dfd,0x23ff03ff,0xf34fccfe,0x2fd5bf2b,0xfc84ff88,0x7002ffbe,
    0x0ff700ff,0x4ccce7fc,0xd7df94ff,0xbff103ff,0x3e259999,0x109999bf,
    0x4dfd05ff,0xfbadfda9,0x45bf21ae,0x3e62ffda,0xf31bfa0f,0x643fd43f,
    0x0effffff,0x6cc013fe,0x81ffcdfe,0x4000effb,0xffafbef8,0x0ffe05fa,
    0xdffb8ffc,0x3eabf54f,0x3f20df34,0xfd6fc80f,0x0ff7001f,0x7fc0ff70,
    0xdf94ff83,0x3e21bfa2,0x0ffe203f,0x7c42ff88,0x3ffff24f,0x324fffff,
    0x92ffc46f,0xfffdddff,0x7ffffe41,0xf90fffff,0xff05799f,0x7fdc0009,
    0x406ffe40,0x14ccccc9,0x37f2fbff,0x40ffe05f,0x3fffe1ff,0x3e60bf54,
    0x905ff886,0x017fe6df,0x3ee01fee,0x3e0ffe07,0x7dcdf94f,0x01ffc42f,
    0x7c407ff1,0x517fdc2f,0xdfb9bff9,0x2237e459,0x3fffa4ff,0x323fffff,
    0xffffffff,0x00ff90ff,0x740009ff,0x027fec5f,0x2ffffff5,0xff35fff8,
    0x7cccc49f,0x3fe099cf,0x553ffee1,0x90ff305f,0x9bf203ff,0x7dc03ffc,
    0x207fb807,0x94ff83ff,0x237fc4df,0x3e203ff8,0x119999bf,0xff9337ff,
    0x7dc3fa0b,0x3666fc83,0x57ff12ff,0x44bff555,0xffb99999,0x201ff219,
    0x19999cff,0x7f5cccc4,0x201fcc1f,0x23bbbbb9,0x3ffe2fff,0x3ffffee4,
    0x87fe3fff,0x9f74fff8,0xff11fe60,0xf137e40b,0x3fdc01ff,0xffffffb8,
    0x7c1ffc7f,0xfc8df94f,0x80ffe22f,0xfffffff8,0xffffff17,0xc9fe01bf,
    0xffffc82f,0x1fee5fff,0x7d403fec,0xf807fc87,0x1fffffff,0x3fffffee,
    0x7c000002,0x8fff20ff,0xfffffffb,0xf907fe3f,0x4413ee9f,0x00ffe47f,
    0x5ffa8df9,0x7dc1fee0,0x47ffffff,0x94ff83ff,0x25ff88df,0x3e203ff8,
    0x17ffffff,0x059dffff,0x03fb3fc4,0x5bdffff9,0xff505fd8,0xc87fa805,
    0xffff807f,0x3ee1ffff,0x0000bdff,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x95004000,
    0x332a2059,0x2ea200ac,0xbca881ac,0x3332a202,0x510aa60b,0x59712a85,
    0x37951a98,0x32c98a88,0x8264c039,0x155102a9,0x0aa806aa,0x55555551,
    0x540d5445,0x0055102a,0x66540aa2,0x30cccccc,0xb99dcc77,0x07bf620b,
    0x01bba833,0x260009b3,0x7fff4c5e,0x7fffc0ef,0xffb81fff,0x7fd45fff,
    0x7d41efff,0x321fffff,0x887fd46f,0x5ffffbff,0x3fff73f2,0x3ff3ea2f,
    0x503fffaf,0x0bfea0ff,0x04fd9ff2,0x7ffd4bfa,0x7ec7ffff,0x40bfea1f,
    0xffb005f9,0xfffff903,0x3fee1fff,0x3feaff90,0x4bffffa0,0x2ffc87f8,
    0x001fffc4,0xfe87ffea,0x746feaae,0x46ffb9ab,0x5eccfffb,0x3fb3bfe6,
    0x2b7fe26f,0x1bf20ba9,0x3fe21ff5,0x92ffdcff,0xdff9dfff,0x7fe6ffd4,
    0xff505fce,0x3e22ffc0,0xf817f24f,0xddddd30f,0x6ff88bff,0x15d0bff1,
    0x2a07b19f,0xaa986fef,0x70aaaaaa,0xfab7dcff,0xf93df30f,0x2a0bfb9f,
    0x3ffe21ff,0x3bfee004,0xf983fee0,0x13fdc01f,0x3a081dff,0x4ffee0ef,
    0x7e402ffa,0xf887fd46,0x64ffe1ff,0x43fee5ff,0x9ff98ffa,0x0ff506f9,
    0xff507fe4,0x3c8b7dc3,0x7f440ff1,0xdcffa80f,0x6ffd40ff,0xfd06fedf,
    0x40005fb1,0x4dbee7fb,0xfc93ee7f,0x26201fff,0x800ffec0,0xefd85ffc,
    0x82ffbaaa,0x50ffcaa9,0x3ff803ff,0xff9a7fc4,0x8df901cf,0x7ff10ffa,
    0x8ff92cb8,0x2bf50ffa,0x22ff36f9,0xccffdccc,0xd8ffe63c,0xfbbfd46f,
    0x3606f98f,0x3ff201ff,0xff9102ff,0x4fee05df,0x332a0ff8,0x50cccccc,
    0xf9afd4ff,0x01cc9807,0x22002200,0xffd04ffd,0x47ffffff,0xffffffea,
    0x4c01ff90,0x25fe82ff,0x43fffffb,0x87fd46fc,0x7e402ff8,0xfa87fd47,
    0x5fe6df35,0xfffffff9,0x8b7f45ff,0x47fcc2ff,0x05fabffe,0xf8807ff7,
    0x3f6605ff,0x7c40bfff,0xff927e46,0x21ffffff,0x44b263c9,0x0000003c,
    0x05ffc800,0x2aaab7fa,0x7bff50aa,0x3ee1ff95,0x0ffe200f,0xfd7117fa,
    0x237e49ff,0x5ff10ffa,0x7d47fc80,0x3e6bf50f,0x2aa2ff36,0x1aaaffca,
    0x3fdc7fd4,0x7ffd7fc4,0xff984fbe,0xffff9805,0xdfcffa80,0x217ec6fe,
    0x55531ff8,0x00155555,0x00000000,0x06ffe400,0x7ec037ec,0xfa87fd46,
    0x22ffc03f,0x3e603ff8,0xf91ff27f,0x00bfe21f,0x0ffa8ff9,0x4dbe6bf5,
    0x00ff507f,0x209fd7ff,0xdffbfdff,0x077fc43f,0x3ffbfe20,0x29f13b05,
    0x9880cc3c,0x00000000,0x00000000,0xf703bfee,0x3ff4107f,0x3e21fff3,
    0x6c530bff,0xffd88bff,0x4dfd0110,0xffc89ffb,0x805ff10f,0x87fd47fc,
    0x26df35fa,0x00ff507f,0x203ffff9,0xffc8fffd,0x4d7ff42f,0x8ffd8199,
    0x3e603ffc,0xddd00005,0xdddddddd,0x00000005,0x7d400000,0x7fff41ff,
    0x3fee7fee,0x20ffffef,0x6ffffffa,0x3fffffe6,0x37bbea3f,0x3fe23fff,
    0x10ffefff,0x7fc805ff,0x5fa87fd4,0x41fe6df3,0xff9807fa,0x5bff206f,
    0x3ea1fff9,0x47ffffff,0x3ffa2ffb,0x00055100,0x3fffffe0,0x003fffff,
    0x00000000,0x0fff4c00,0x17fffff2,0xff1bfffb,0xffffe981,0x77fff4c4,
    0x7ffffd42,0xdfffb83e,0x5ff10ff8,0x7d47fc80,0x3e6bf50f,0x2a20ff36,
    0x07ffd002,0xfff1ffdc,0x7ffffdc1,0x17fe67ff,0x0000dff3,0x26666600,
    0x00999999,0x00000000,0x04e88000,0x09880662,0x4c004400,0x004cc400,
    0x0000004c,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__consolas_bold_21_usascii_x[95]={ 0,4,2,0,0,0,0,4,2,2,1,0,2,2,
3,0,0,1,1,1,0,1,1,1,1,0,3,2,1,1,1,2,0,0,1,0,0,1,1,0,0,1,1,1,
2,0,0,0,1,0,1,1,0,0,0,0,0,0,1,3,1,2,0,0,0,1,1,1,0,1,0,0,1,1,
1,1,1,0,1,0,1,0,1,1,0,1,0,0,0,0,1,1,4,2,0, };
static signed short stb__consolas_bold_21_usascii_y[95]={ 15,0,0,1,-1,0,0,0,-1,-1,0,4,11,8,
11,0,1,1,1,1,1,1,1,1,1,1,4,4,3,6,3,0,0,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,17,0,4,0,4,0,4,0,4,0,0,
0,0,0,4,4,4,4,4,4,4,1,4,4,4,4,4,4,0,-2,0,7, };
static unsigned short stb__consolas_bold_21_usascii_w[95]={ 0,4,8,12,11,12,12,4,8,7,10,11,6,7,
5,11,12,10,10,10,12,10,10,10,10,11,5,6,9,10,10,8,12,12,10,11,12,9,9,11,11,10,9,11,
9,12,11,12,10,12,11,10,11,11,12,12,12,12,10,6,10,7,11,12,8,10,10,9,11,10,11,11,10,10,
9,11,10,11,10,11,10,11,10,10,11,10,12,12,12,12,10,9,3,8,12, };
static unsigned short stb__consolas_bold_21_usascii_h[95]={ 0,16,6,14,19,16,16,6,21,21,10,11,8,3,
5,18,15,14,14,15,14,15,15,14,15,14,12,15,13,7,13,16,20,14,14,15,14,14,14,15,14,14,15,14,
14,14,14,15,14,18,14,15,14,15,14,14,14,14,14,20,18,20,8,3,5,12,16,12,16,12,15,16,15,15,
20,15,15,11,11,12,16,16,11,12,15,12,11,11,11,16,11,20,22,20,5, };
static unsigned short stb__consolas_bold_21_usascii_s[95]={ 250,127,212,153,79,155,168,207,13,5,173,
111,247,247,243,91,82,14,229,181,190,71,95,50,106,224,250,117,1,196,236,
194,57,177,166,124,140,130,120,169,96,85,147,61,214,37,25,58,203,103,108,
136,73,157,240,1,203,216,192,50,116,32,184,196,234,22,144,33,214,11,12,
226,1,35,40,238,24,99,88,43,203,132,77,55,46,66,123,136,160,181,149,
22,1,70,221, };
static unsigned short stb__consolas_bold_21_usascii_t[95]={ 14,1,55,40,1,1,1,55,1,1,55,
55,40,49,55,1,24,40,24,24,40,24,24,40,24,40,1,24,55,55,40,
1,1,40,40,24,40,40,40,24,40,40,24,40,40,40,40,24,40,1,40,
24,40,24,24,40,24,24,24,1,1,1,55,63,55,55,1,55,1,55,24,
1,24,24,1,1,24,55,55,55,1,1,55,55,24,55,55,55,55,1,55,
1,1,1,55, };
static unsigned short stb__consolas_bold_21_usascii_a[95]={ 185,185,185,185,185,185,185,185,
185,185,185,185,185,185,185,185,185,185,185,185,185,185,185,185,
185,185,185,185,185,185,185,185,185,185,185,185,185,185,185,185,
185,185,185,185,185,185,185,185,185,185,185,185,185,185,185,185,
185,185,185,185,185,185,185,185,185,185,185,185,185,185,185,185,
185,185,185,185,185,185,185,185,185,185,185,185,185,185,185,185,
185,185,185,185,185,185,185, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_bold_21_usascii_BITMAP_HEIGHT or STB_FONT_consolas_bold_21_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_bold_21_usascii(stb_fontchar font[STB_FONT_consolas_bold_21_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_bold_21_usascii_BITMAP_HEIGHT][STB_FONT_consolas_bold_21_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_bold_21_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_bold_21_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_bold_21_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_bold_21_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_consolas_bold_21_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_bold_21_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_bold_21_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_bold_21_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_bold_21_usascii_s[i] + stb__consolas_bold_21_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_bold_21_usascii_t[i] + stb__consolas_bold_21_usascii_h[i]) * recip_height;
            font[i].x0 = stb__consolas_bold_21_usascii_x[i];
            font[i].y0 = stb__consolas_bold_21_usascii_y[i];
            font[i].x1 = stb__consolas_bold_21_usascii_x[i] + stb__consolas_bold_21_usascii_w[i];
            font[i].y1 = stb__consolas_bold_21_usascii_y[i] + stb__consolas_bold_21_usascii_h[i];
            font[i].advance_int = (stb__consolas_bold_21_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_bold_21_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_bold_21_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_bold_21_usascii_s[i] + stb__consolas_bold_21_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_bold_21_usascii_t[i] + stb__consolas_bold_21_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_bold_21_usascii_x[i] - 0.5f;
            font[i].y0f = stb__consolas_bold_21_usascii_y[i] - 0.5f;
            font[i].x1f = stb__consolas_bold_21_usascii_x[i] + stb__consolas_bold_21_usascii_w[i] + 0.5f;
            font[i].y1f = stb__consolas_bold_21_usascii_y[i] + stb__consolas_bold_21_usascii_h[i] + 0.5f;
            font[i].advance = stb__consolas_bold_21_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_bold_21_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_bold_21_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_bold_21_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_bold_21_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_bold_21_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_bold_21_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_bold_21_usascii_LINE_SPACING
#endif

