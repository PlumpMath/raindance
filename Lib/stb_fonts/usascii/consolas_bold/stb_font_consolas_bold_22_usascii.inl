// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_bold_22_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_bold_22_usascii'.
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

#define STB_FONT_consolas_bold_22_usascii_BITMAP_WIDTH         256
#define STB_FONT_consolas_bold_22_usascii_BITMAP_HEIGHT         80
#define STB_FONT_consolas_bold_22_usascii_BITMAP_HEIGHT_POW2   128

#define STB_FONT_consolas_bold_22_usascii_FIRST_CHAR            32
#define STB_FONT_consolas_bold_22_usascii_NUM_CHARS             95

#define STB_FONT_consolas_bold_22_usascii_LINE_SPACING          14

static unsigned int stb__consolas_bold_22_usascii_pixels[]={
    0x00001991,0x7100ee00,0x33332a79,0x39999914,0x10006f2a,0x0c400135,
    0x80003100,0x00131098,0x10000026,0x00000033,0x221980a6,0x00040099,
    0x02200998,0x01333330,0x5c3ff100,0x202d4002,0xff703ffc,0x3ffff6bf,
    0x7fffff17,0x400ffff2,0x004ffffc,0xffb801fd,0xf8000dff,0x001ff53f,
    0xa805bfff,0x74eefffd,0xfc8001ff,0x3f600cff,0x727dc2ff,0x237ee7ff,
    0x4002effd,0xfffb84ff,0x3fe2ffff,0x3a605fff,0x547fe22f,0xff5001ff,
    0x427fe407,0xfb1aeff8,0x2aa2555d,0xfd533ffa,0xcefe803f,0x7f804ffc,
    0x7ffffec0,0x3ee001ff,0x200ffe0f,0x906fffff,0x9fffffff,0xe8003fee,
    0x505fffff,0x7c4bf5bf,0x5cffea0f,0xfffffeef,0xb13fe001,0xfffffdff,
    0x2fff7745,0x7c4dffb0,0x003ff61f,0xd880dff3,0x40ffa80d,0x3ff805fd,
    0x3f203ff8,0x203fe60e,0x85efffdb,0xfc99dffb,0x17fa005f,0x75300ff9,
    0xffa8bfff,0x2e9ff10d,0xff5000ff,0x3207fee3,0x3f61fb2f,0xfb9ffd42,
    0x5ffa9cff,0xf993fe00,0xf01bf22f,0x37fec0bf,0x7fc43ff1,0x007ff406,
    0x361bee00,0x83ff805f,0x1ff304fd,0x7f447f90,0xf87fffff,0x01ffd86f,
    0x7c41ff98,0x3fa2002f,0xf03ffa0f,0x083fee9f,0xff89bf20,0x1fd2fb82,
    0x7ff50bf7,0xffb13fee,0xa93fe001,0x007fcc7f,0x6ec40bff,0xf307fe21,
    0x0bff20bf,0xfffffff5,0xfb0df907,0xb07ff00b,0x18ff209f,0x7fe4bf71,
    0x4c4acfcc,0x2ffa83ff,0xfb06fd80,0x2ffc800d,0x53fe17fe,0xeffd8ffb,
    0xf70ffb82,0xf9df101f,0xf301ff1d,0x703fee5f,0xffb503ff,0x7fd49fff,
    0xff01fea1,0x3ff1000b,0xff01ff70,0xfffff509,0x0df907ff,0x7ff00bfb,
    0xff109fb0,0xf5ffff51,0x2fcb7fcd,0xf303ff50,0x2ff8807f,0x4003ff30,
    0x9ff11ffd,0x3fee9ff0,0x41fffffe,0x3ffbdff8,0x363bfae0,0x25ff302f,
    0x7fdc0ffb,0x7ffffe41,0x5f7f44ff,0x7fc05ffc,0x1ff88005,0x7d42ff98,
    0x9999882f,0x5fc83ffa,0xff805fd8,0xf986fb83,0x9ffeff8e,0x36bffa6f,
    0x03ff700f,0xfc809ff1,0x2027f407,0x226ffdaa,0x74ff84ff,0xff539fff,
    0x7ffff90b,0x02fd4200,0x3fee5ff3,0xf507fe40,0x13fe21bf,0x1bfffffd,
    0x8005ff80,0x9ff01ff8,0x1000ffd8,0x3ea627ff,0x805fd83f,0xcff983ff,
    0xbf79f709,0x64ff1ff3,0x900fffff,0x9ff103ff,0x5c04ff80,0x3ffe00ff,
    0x237fc0ef,0x9ff74ffb,0x7e40ffd8,0x015512ff,0xf3007fc4,0xd03fee3f,
    0x40ffe8ff,0x237ee4ff,0xbff0009a,0xf10f74c0,0xd1bf603f,0x7fc400df,
    0x207fff53,0x3ff805fd,0x367ffd30,0xef9afdaf,0x7ffec6f8,0x7fdc0cff,
    0x203ff981,0x7c400ffa,0x0b7fe03f,0xffb97fec,0xb81ff74f,0x3bff61ff,
    0x00ff98ff,0x20262bf6,0x1ff71ff8,0x3fe1ffe4,0x3f24ff85,0x7fc0009e,
    0x89bff605,0x8ff701ff,0x3e2004ff,0x19ffd33f,0xff00bfb0,0x5dffb107,
    0x2a7fabf6,0xd986f9df,0x2a1fffff,0x2ffa83ff,0x64017fa0,0x80bfe06f,
    0xfffffff9,0xb81ff74f,0x35ff31ff,0x40ff5dff,0x5fff9dfa,0xffb8ffc4,
    0x446fffef,0x24ff84ff,0xeffffff9,0x817fe00c,0xff10fffc,0xf83fea03,
    0x3fe2004f,0x6c1ffcc3,0x83ff805f,0x4ff40ffb,0xfadfb9ff,0xffdbf305,
    0x6c37fc4d,0x3ff300ff,0x40bfe200,0x7fd401cb,0xf74ff9ef,0x90ffc81f,
    0x7fffd4ff,0xfd1ff106,0x0cc85fb7,0x7ffffff7,0xff09ff10,0x7f77f449,
    0x3fe06fff,0x887ff405,0x8ff901ff,0x3e2006fd,0xd84fd83f,0x83ff805f,
    0xf9fe85fc,0x3fbcfc9f,0x1ffe7f70,0xf933bffb,0x037ec09f,0x00817f60,
    0x74ff8620,0x27fe81ff,0x7ffe47fc,0x5be7f902,0x7fdc04f9,0x46ff8018,
    0x1bfa4ffb,0x7fc07ff2,0xf13fe405,0x91ffa03f,0x7fc400ff,0xfd86fc83,
    0xd83ff805,0xfeafd84f,0x01ffeffd,0x11bfa3f9,0xbffffffd,0x001ffc40,
    0xff107fea,0x53fe0009,0x3ff20ffb,0xf993fea3,0x25fa82ff,0x7cc9f37f,
    0x001ff71f,0x7fdcbff6,0x709ff14f,0x17fe01ff,0x3e22ffa8,0xa8bff01f,
    0xff1001ff,0xfb0df907,0xb07ff00b,0xf75f909f,0xe89ffdbf,0xffdbfeac,
    0xffffc884,0x003fdc04,0x7fdc4fe8,0x29ff0007,0xfffefffb,0xfffffe86,
    0x3a21ffff,0x3fb3f20f,0x7dd3ff22,0xfff3000f,0x7c9fdfff,0xffcaacff,
    0x3ffffee5,0xfff96fff,0x981ff887,0x1ffc42ff,0xb83ff980,0x805fd86f,
    0x84fd83ff,0x2a2554fc,0xffffff81,0x7fcc05ff,0x004ff802,0x7c41ff70,
    0x9ff0004f,0x3fffff66,0xffff9103,0x321dff39,0x27fec43f,0x7fdcbfe6,
    0x3ffea000,0x3a64fc9e,0x44ffffff,0xfffffffb,0x1017976f,0x0ffb03ff,
    0x2a003ffa,0x86fb82ff,0x3ff805fd,0x7f984fe8,0x7ff6e400,0xdff002de,
    0xffa83933,0x7ff10000,0x26000188,0x40018809,0x00800019,0x00198822,
    0x2a600310,0x00000aab,0x320ffc40,0xdff302ff,0x80ffd818,0x2fec2ffa,
    0x3e61ffc0,0x109fd02f,0x002fc401,0x37ffffdc,0x900017fa,0x000000df,
    0x00000000,0x00000000,0x00000000,0x7d43ff10,0x27fd405f,0x9fff9bfb,
    0xda77ff40,0xdd15eeff,0x3fae7ffd,0x37fea07f,0x2a02fcab,0xfd50004f,
    0x00aa83bf,0x00554400,0x00000000,0x00000000,0x00000000,0x3e200000,
    0x01dff11f,0x3f65ff70,0x200cffff,0xffb5ffd8,0x3ffe2fff,0x3dff93ff,
    0xfffffa80,0x0072601e,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x3ba23ff1,0xa87f6000,0x22000aba,0x33333109,0x884ccccc,
    0x2e620009,0x0000001a,0x00000000,0x00000000,0x00000000,0x00000000,
    0x22000000,0x000221ff,0x00000002,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00aa8000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x19880000,0x880ca800,0x02600019,0x7c417fe4,0x1aa9805f,
    0x00000c40,0x00000310,0x310004cc,0x00998803,0x88000000,0x06662019,
    0x00000000,0x70033000,0x7d4001ff,0x01ffa85f,0x880ffd40,0x2ffb85ff,
    0x3ffffea0,0xdffffc81,0xffffff80,0xffff707f,0x7f64c01b,0x7fec40ff,
    0x3b202eff,0x3224ffff,0x7c6fffff,0x25ffffff,0x0ffb84ff,0xfffffd88,
    0x3ffffa26,0x7fffe44f,0xff56ffff,0x643ffd0b,0x5ff881ff,0x13ffff66,
    0x2000ffb8,0xffa86ffa,0x0ffdc001,0xfe81ffb0,0x37ffe606,0x7fff41ee,
    0x7fc1ffff,0xd87fffff,0x0effffff,0xffffffc8,0x3bbffa20,0x7f441fff,
    0xd15fffff,0x8fffffff,0x5fffffff,0x3fee13fe,0x7ffffd40,0x3ffe27ff,
    0x3f24ffff,0x6fffffff,0xff987ff6,0x642ffc45,0xffff50ff,0x3ee09fff,
    0x0ee4000f,0x2000ffd4,0x3ea01ffb,0x80ffe22f,0x3ee00ffd,0x5ffc99df,
    0x555567fc,0xf727fd42,0xaeffc89f,0x17fd4199,0xffe89ff1,0xf74b99ad,
    0x2614c19f,0x25ff9999,0x0ffb84ff,0x2273ffe2,0xf30545b9,0x55554cff,
    0x3e64ffea,0x203ffa5f,0x3fe21ffc,0x2a2b7a24,0xffb80fff,0xf5000020,
    0xfff5003f,0x87ffffff,0x03fee5ff,0x3e205fe8,0x20ffd86f,0x6fe802ff,
    0xff10ffd8,0xd0ff900b,0x02ffd49f,0x40003ff6,0x213fe5ff,0x3ff60ffb,
    0x3ff20002,0x21bfe600,0x4ffa9ffd,0x7e4bff10,0x7fdc040f,0xfd8ffb82,
    0x7fffc1ef,0x21ffa85f,0xff50effa,0x7fffffff,0xbfd0ffc8,0x2604ff80,
    0x2ffa83ff,0xff100bfe,0x71fffa87,0xff5003ff,0xfb17fd49,0x4ffc803f,
    0x7cbff000,0x10ffb84f,0xd8000dff,0x0fff406f,0x7ff77fc4,0x223ff200,
    0xff7004ff,0xffdff705,0x7ffc1fff,0x1ffa85ff,0x4c41dff1,0x999affb9,
    0x7cdffcc0,0xffaaa82f,0x3ea2aaae,0x23ff981f,0x40bcdeff,0x3ff22ff9,
    0x95ffb2ff,0x3ffa079b,0x7f44ffce,0xffffa807,0x97fe000b,0x0ffb84ff,
    0x4cc47ff3,0xfca98819,0x13fee02f,0x03ffffc8,0x7fde7fc4,0x01ffb000,
    0xf939fff7,0x7fcccc7f,0xe89ffa85,0x3fee01ff,0xfcefe801,0xfffff887,
    0x3ee7ffff,0x24ff881f,0x3fffffff,0x3fa27fea,0xffd3ffcf,0x81dfffff,
    0x85ffffd8,0xff9006ff,0xf001bfff,0x5c27fcbf,0x45ff50ff,0x740ffffe,
    0x2603ffff,0x7fc406ff,0xfff9007f,0x3fea009f,0x449ff704,0x0bff04ff,
    0x3ffb3ff5,0x801ffb80,0x884ffffa,0xcceffccc,0x207fee4c,0x2aaa4ff8,
    0xf51fffec,0xf13dff9f,0x2fbffa7f,0x74c6ffdb,0x224fffff,0x366006ff,
    0x400fffff,0x213fe5ff,0x5ff70ffb,0x207ffff4,0x0efffeec,0x4c01ffe8,
    0x8801ffff,0x9800ffff,0xff700eff,0xff04ff81,0xffbff50b,0x03ff7005,
    0x007fffe0,0xffb813fe,0x403ff981,0xfff34ffb,0x4bfe61bf,0x0ffd86fe,
    0xfd51bff1,0x003ffc7f,0x027ffdc4,0x84ff97fe,0x7ff50ffb,0xb801ff70,
    0x27fdc5ff,0x2fffff40,0x804ffc80,0x2e01ffe8,0x827fc0ff,0xfffa85ff,
    0xffb801ff,0x0bff9001,0xfa813fe0,0x02ffa83f,0xff8affc4,0xd8ffd42f,
    0x91ffb87f,0x37fc41ff,0x20003ffd,0x7fc06ff9,0x3ee13fe5,0x2e17fe27,
    0x6fe800ff,0x2a01bfe6,0x02ffdcff,0x4402ffa8,0x7dc01ffe,0xf827fc0f,
    0xfaffa85f,0x7fd400ff,0x03ff9002,0xf8813fe0,0x00ffd86f,0xdfd27fd4,
    0x7fe4dfb0,0xfe87fe41,0x3ee7fd86,0x3fe0005f,0xe93fe205,0x746fd85f,
    0x07fdc1ff,0xffd2ffc0,0x31ffd003,0xff500dff,0x0fff4405,0x3e07fdc0,
    0x50bff04f,0x0dff53ff,0x020dff98,0xf8017fea,0x6ffe404f,0x224ffc99,
    0x87ffae61,0xff90cffb,0xa86ffcc7,0x8bff66ff,0x3fe25ff9,0xb5b99adf,
    0xffb31337,0x7ec47229,0xa8fff62f,0x7ffd44ff,0x10ffc99b,0x73ffd981,
    0x55555bff,0xf927fdc5,0x2ffa807f,0x559ffd10,0x1ff70555,0xbff04ff8,
    0x3f23ff50,0x7fff404f,0xffdb53fe,0x27fc001d,0x3ffffa20,0x3fea0eff,
    0xe83fffff,0x85ffffff,0xfffffffd,0x3bfffe60,0x7fd41fff,0xff5fffff,
    0x4dffffff,0x6ffffff8,0x7fffffc4,0xfffc80ff,0xf70fffff,0x4bffffff,
    0xfffffffe,0x41fff17f,0x2a00fff8,0xfff902ff,0x70dfffff,0x74ff81ff,
    0xffffffff,0xfe87fead,0x3ffa603f,0xbfff53ff,0x04ff8001,0x4ffffd88,
    0xdfffffa8,0x3ffff201,0x3fffee04,0xfffea80d,0xffb101df,0x3ff67dff,
    0x220bffff,0x80cffffd,0x0dffffe9,0x3ffffaa0,0x3fffee4e,0x7fff42ef,
    0xf97fffff,0x0bff907f,0xfc817fd4,0x6fffffff,0x7fc0ffb8,0xffffff74,
    0x87feadff,0x4401fff8,0x06ae2099,0x0027fc00,0x02660022,0x44001100,
    0x00066001,0x04ccc031,0x130004c0,0x20133000,0x00000998,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00004c40,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0xffd03300,0xfc9ffa01,
    0x2e17ee05,0x3fff86ff,0xffd07fcc,0xfd3ffcc5,0xdfffffff,0xfff11ff2,
    0x3ffffe21,0xf51fffff,0x7fffffff,0x9ff213fe,0x3dfffffc,0xfffffff0,
    0x7ffffc3f,0x3ffe2fff,0x6401deff,0xfc8ff12f,0x00ceffff,0x2003fffc,
    0x7e43fffa,0xe83effff,0xffb1005f,0x17fdc9ff,0xbf927fc4,0xff727dc0,
    0xdfff0dff,0x3fa0ff98,0xe9fff24f,0xffffffff,0xffd8ff96,0x3ffffe22,
    0xf51fffff,0x7fffffff,0x9ff213fe,0xfffffffc,0xffffff85,0x3fffe1ff,
    0x3fe2ffff,0x04ffffff,0x237c4bf6,0xfffffffc,0xffff300f,0x3ffe2005,
    0x7fffe43f,0x3fa0efff,0xffff8805,0xbff35fff,0x7dc5ff70,0x7e53f205,
    0xff86ffff,0x83fe62ff,0x3ffa7fff,0x2aaaaaa7,0x4ff95ffb,0x99984ffa,
    0x2199bffb,0x9bffb998,0xf909ff09,0x5ccffe4f,0x6ffc1ffe,0x7fc19999,
    0x2099999d,0xffb99cff,0x263fd02f,0xb33fe46f,0x3fee07ff,0xdf9004ff,
    0x9ffc87ff,0x3a5ffd99,0x2ffd805f,0x3fe3ffb1,0x7dc7fd87,0x7cd3f206,
    0xff86fd8c,0x83fe66ff,0xdf99feff,0x7fe400ff,0x3fe2ff91,0x17fcc00e,
    0x7c17fcc0,0x327fc84f,0x21ffdc7f,0x4ff804ff,0x7c44ff80,0x67fe647f,
    0xf92cefdc,0xd04ff88f,0x300ffb9f,0xc87ff5ff,0xd3ff40ff,0x89ff00bf,
    0x3ff94ff8,0x37d45ff8,0x411fe4d9,0xfdff86fd,0x7c1ff32f,0xfbfbbfbf,
    0x9bfe200f,0x03ffb7fc,0x3005ff30,0x09ff05ff,0x23fe4ff9,0x27fc3ff9,
    0x7c027fc0,0x21ffd84f,0xffffffff,0x98ff94ff,0xaff883ff,0x7f401ffb,
    0xffc87ff5,0xfe87fe40,0x427fc405,0x47ff55ff,0xb7d42ff9,0x07fb2ff8,
    0x2bfe1bf6,0x21ff35fe,0xfedf9ff8,0x3f200ff8,0x3ebff22f,0x5ff3003f,
    0xf05ff300,0xfb5555bf,0xfd13fe4f,0x804ff81f,0xaaaaadff,0x3ee13fe0,
    0x27fea62f,0xf909cfd9,0x1dfd533f,0xff31ff50,0xf87fdc07,0x207fe43f,
    0x017fa7fd,0x9bfa1bfe,0x03ff26ff,0x53feadf3,0x0dfb02fd,0x33ff55ff,
    0x7dfe21ff,0x203ff5ff,0x7fe46ff8,0x3e6006ff,0x2ff9802f,0xfffffff8,
    0x3bff27ff,0xff82ffff,0x7c7fffff,0x0fffffff,0x3fea13fe,0x5fb37cc3,
    0xffffffc8,0x7cdfb01f,0x47ff106f,0x07fe43ff,0x2ff4bff5,0x5df7fec0,
    0x3ff67ffe,0xff30dfd0,0x17edfff6,0x2ff86fd8,0x21ff39ff,0x27ff96f9,
    0x5ff701ff,0x1ffdffc8,0x005ff300,0xfff05ff3,0x4ffddddd,0x0efffffc,
    0xfffffff0,0xeeefff8f,0x213fe0ee,0x2fd42ffa,0xeffc83fb,0xf82ffffe,
    0x203ff24f,0x21ffc6fd,0xffeeeffc,0x2017fa0f,0xfffffff8,0x22bfea6f,
    0xf7f883ff,0x03fb3fdd,0x4bfe1bf6,0x30ffaffb,0x743feadf,0x86ff882f,
    0x06ff9ffc,0x3005ff30,0x09ff05ff,0x4ffe4ff9,0xbff06ffb,0xff833333,
    0xb84ff804,0xdfb951ff,0x649bff99,0x23ffcc7f,0x3fea1ff9,0x4cd7fd42,
    0xf909cff9,0x83bfffff,0x32e005fe,0x225ffacc,0x81ffacff,0xfcbfaff8,
    0xdfb01fec,0x3fe25ff0,0x2df30ffd,0x20bfa5e8,0x7fc82ffb,0xf3009ff7,
    0x5ff3005f,0xff909ff0,0x5ff73fe4,0xff009ff0,0xb09ff009,0x3fff21ff,
    0x27ffffff,0x1ffd87fc,0x3ffffff2,0x7ffe45ff,0x4fffffff,0x03557ff9,
    0x880017fa,0x6fff43ff,0xfbff106f,0x01fddf33,0x8bfe1bf6,0xf50ffffc,
    0x7c17f40d,0x74ff906f,0x7fcc01ff,0x82ff9802,0x27fc84ff,0x1bfe27fc,
    0x3fe013fe,0x544ff804,0x3faa65ff,0x22affbac,0x0ffd87fc,0x3ffffffa,
    0x7ffe47ff,0x4fffffff,0xfd001ff9,0x7fec000b,0x27fffdc0,0x7fcdfff0,
    0xd55510ff,0x3fe555ff,0x43fffe62,0x0ffa06fa,0x3f207ff7,0x803bfe67,
    0x33102ff9,0x21337ff7,0x27fc84ff,0x17fe47fc,0x3fe013fe,0x2099999d,
    0xffca9cff,0xf31fd80f,0x333ff90d,0x7fc4dff9,0xffc9999b,0x26666621,
    0xf909cff9,0x3dfd001f,0x4c413333,0x84ffeba9,0x201ffff9,0x3ff24fff,
    0xfffff50f,0x0bfeffff,0x3ee1fffb,0xff0ff605,0x323fe40f,0x3fe604ff,
    0xfffff502,0x13fe7fff,0x47fc9ff2,0x27fc6ff9,0x7fffffc0,0x3fffe2ff,
    0xfd01efff,0x3f217e63,0x1fffffff,0x3e603fee,0x87ff004f,0xfe800ffc,
    0x25ffffff,0x4ffffffa,0xd01fffa0,0x3ffd43ff,0xfffffff5,0xf30bfeff,
    0x817ee1ff,0x0ffee4fd,0x7fc47fc8,0x05ff302f,0x3fffffea,0x909ff3ff,
    0x6c3fe4ff,0x013fe2ff,0x3ffffffe,0x3bfffe2f,0xa87fc03d,0xffffc85f,
    0x37ec0bee,0x3e00dff0,0x007fe43f,0x7ffffff4,0x3bffea5f,0x0000001c,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x4000b200,0x00008059,0x80000022,0x2000c000,0x00004000,
    0x1ff70000,0x5ff94ff8,0x3fabff10,0x7cdfea04,0x2fffffff,0xfc81fff1,
    0x0003301f,0x22000000,0x4c331099,0x07ff9009,0x985ffa80,0x74c4fffd,
    0x3fffae2f,0xffd700df,0xffd703df,0x3fee019f,0x57fc4fff,0x7dc4fffb,
    0x21effd8d,0xa9efbcfa,0x3fe203ff,0xf81ff701,0x70bff14f,0x817f65ff,
    0xffff35fb,0x7d45ffff,0x813fea5f,0x3bea00ff,0x407fea00,0xfffffffc,
    0x2e7ff54f,0x04ff89ff,0x2009ffd1,0x7d41effb,0x366ffeff,0x3bffe6ff,
    0x3a20efff,0x41ffffff,0xfffffffd,0x777ffec0,0x7ff7fc4f,0x3bee4fff,
    0x50fffffe,0xffdfffdf,0x3fe201ff,0xf81ff701,0xd03ff64f,0x9037e4df,
    0x2aaaa29f,0x7ec0effc,0xb86fe8af,0x3a0e2ff0,0x3ffa05ff,0xfffff906,
    0x3fe69fff,0x3fe1ff72,0x37ff6203,0x037ff600,0x3ea19ff1,0x5cdffb3f,
    0xf917fdc0,0x439335bf,0xfda9dffa,0x217fe24f,0x4577ffc0,0x3ffee7fe,
    0xf53ffc9c,0xd1dff19f,0x07fe203f,0x3fe07fdc,0xf88bfea4,0x745fea3f,
    0x2207fb1e,0xfe881ffe,0x7cc1ffdf,0x1ffafeaf,0xfb83ffec,0x40003fdc,
    0x1ff52ff9,0x3f200ffe,0x7ff440ef,0xd81ff704,0x803bb16f,0xdff13ff8,
    0xfd0dfd00,0x006ffccf,0x7fb83ffe,0xff893fee,0xff11ff54,0x7c40ffa5,
    0x81ff701f,0x72ffc4ff,0x47fcc1ff,0x05fd4ffa,0xf980bff6,0xfc883fff,
    0x40cfffff,0xff887ff8,0x0000ff88,0x3fd47fe2,0x3ea005ff,0x7ffd31ff,
    0x6667fec0,0xb8807fec,0xf54ffccc,0x09ff005f,0x7ffc1ff9,0x89ff02df,
    0x03fee2a9,0xf9bea9ff,0x3e27fd0f,0xffffffff,0xf81ff71f,0xe87fe44f,
    0x6cffc45f,0x703ff6ff,0xffb009ff,0xfffe880f,0x3617f601,0xd717f23f,
    0x7ddddddd,0x3fcc7fe2,0x3a2005fd,0x3fff73ff,0x7fffff40,0x7e407fff,
    0x74ffffff,0xff8803ff,0x261ffb83,0x42fffffe,0xffb804ff,0x6faa7fc0,
    0x89ff43fe,0xffffffff,0x81ff71ff,0x5ffcc4ff,0xaff82ff9,0x0ffaffff,
    0x4c037fcc,0xc883ffff,0x1dffffff,0x3e60ffd4,0xf917fc46,0x9fffffff,
    0x188660cc,0x85fff300,0xfb02fffa,0x3333333d,0x4ceffdc0,0x5ff74ff9,
    0xb85ff880,0xfec980ff,0x013fe1ff,0x9ff03fee,0xd0ff9bea,0x7d4ccc7f,
    0x3ee199af,0x213fee0f,0xd07fcefe,0xfbf9bfdf,0x00fff88f,0x7ff77fc4,
    0x7f4ffc41,0xfffb1fe9,0xd505d905,0x4ccccc4b,0x00000999,0x203fff50,
    0xfc83ffe9,0xb0bb800f,0x34ff88ff,0xfff00bff,0xf900ffd0,0x4027fc7f,
    0xa7fc0ffb,0x743fe6fa,0x03ff103f,0x3ee33fea,0xfffa84ff,0x5fffb04f,
    0xfe8dfff3,0x41aaaadf,0xeff99ffd,0x8e7e8540,0x00000bcb,0x40000000,
    0x4400effc,0x7fd45ffe,0xffc8440d,0x3a63ffb5,0x37ffa4ff,0x3f21b989,
    0x4ffc89df,0x87ff2062,0xffb804ff,0x6faa7fc0,0x81ff43fe,0xff101ff8,
    0x09fdffff,0x6407fffe,0xbfff0fff,0x7fffffd4,0x8ffee3ff,0x3fe05ffb,
    0x00000000,0x32000000,0x36000dff,0x7ffec5ff,0xffd2ffee,0x3fbffeef,
    0x3fe64fef,0x222fffff,0xefffffff,0x3fbbfea0,0x027fc6ff,0x3fe07fdc,
    0x87fcdf54,0x3ff103fe,0x4f7ffd40,0xdff904fd,0xf92ffdc0,0x7fffd49f,
    0xff33ffff,0x205ffd0d,0x00000019,0x40000000,0xd70004e8,0xfffff701,
    0xc8ffea5f,0x4fd9efff,0x77fffec4,0x7fffec41,0xfffff984,0x027fc0cf,
    0x3fe07fdc,0x87fcdf54,0x02aa03fe,0x00000660,0x00000000,0x00000000,
    0x00000000,0x00400008,0x02202662,0x0620004c,0x4c4004c0,0x00000019,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x98800000,0x01331001,0x90007ba6,0x99999999,0x00000999,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x2a000000,0x32a0efff,
    0x207ffa62,0x3fe67ffe,0xfff2ffff,0xffffffff,0x0000000f,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x3ffe0000,0x87fb0eff,
    0x7fc1ffd8,0x3fffe67f,0x555552ff,0x05555555,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0xf31ff500,0x201ffdff,
    0x1ffdc4cb,0x15555551,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x2a000000,0x3fffa24e,0x00110004,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00001ba8,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__consolas_bold_22_usascii_x[95]={ 0,4,2,0,0,0,0,4,2,2,1,0,2,2,
3,0,0,1,1,1,0,1,1,1,1,0,4,2,1,1,2,3,0,0,1,0,0,1,1,0,1,1,1,1,
2,0,1,0,1,0,1,1,0,0,0,0,0,0,1,3,1,2,0,0,0,1,1,1,0,1,0,0,1,1,
1,1,1,0,1,0,1,0,1,1,0,1,0,0,0,0,1,1,4,2,0, };
static signed short stb__consolas_bold_22_usascii_y[95]={ 16,0,0,1,-1,0,0,0,-1,-1,0,4,11,8,
12,0,1,1,1,1,1,1,1,1,1,1,4,4,4,6,4,0,0,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,18,0,4,0,4,0,4,0,4,0,0,
0,0,0,4,4,4,4,4,4,4,1,5,5,5,5,5,5,0,-2,0,7, };
static unsigned short stb__consolas_bold_22_usascii_w[95]={ 0,4,8,12,12,13,13,4,8,8,10,12,7,8,
6,11,12,10,10,10,12,10,11,10,10,11,4,7,10,10,9,8,12,13,11,11,12,10,10,12,11,10,9,11,
9,12,11,12,11,13,11,10,12,12,13,12,13,12,10,6,11,7,12,13,8,10,11,10,11,10,12,12,10,10,
9,11,10,12,10,12,11,11,11,10,11,10,12,12,12,12,10,9,4,9,12, };
static unsigned short stb__consolas_bold_22_usascii_h[95]={ 0,17,7,15,20,17,17,7,22,22,11,12,9,4,
5,19,16,15,15,16,15,16,16,15,16,15,13,16,13,8,13,17,21,15,15,16,15,15,15,16,15,15,16,15,
15,15,15,16,15,20,15,16,15,16,15,15,15,15,15,21,19,21,8,3,6,13,17,13,17,13,16,17,16,16,
21,16,16,12,12,13,17,17,12,13,16,12,11,11,11,16,11,21,23,21,6, };
static unsigned short stb__consolas_bold_22_usascii_s[95]={ 255,194,242,170,82,180,166,237,15,6,194,
120,205,30,23,109,97,28,241,192,209,86,110,64,122,244,33,247,11,226,1,
133,69,195,183,133,157,146,135,179,111,100,156,75,234,51,39,73,222,95,123,
145,87,166,1,15,214,228,203,44,121,51,213,39,14,38,154,49,211,22,60,
223,1,12,24,23,236,107,96,60,199,142,84,73,35,133,144,157,181,47,170,
34,1,59,1, };
static unsigned short stb__consolas_bold_22_usascii_t[95]={ 1,1,58,42,1,1,1,58,1,1,58,
58,58,72,72,1,25,42,25,25,42,25,25,42,25,42,58,1,58,58,58,
1,1,42,42,25,42,42,42,25,42,42,25,42,42,42,42,25,42,1,42,
25,42,25,42,42,25,25,25,1,1,1,58,72,72,58,1,58,1,58,25,
1,25,25,1,25,1,58,58,58,1,1,58,58,25,58,58,58,58,25,58,
1,1,1,72, };
static unsigned short stb__consolas_bold_22_usascii_a[95]={ 194,194,194,194,194,194,194,194,
194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,
194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,
194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,
194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,
194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,194,
194,194,194,194,194,194,194, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_bold_22_usascii_BITMAP_HEIGHT or STB_FONT_consolas_bold_22_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_bold_22_usascii(stb_fontchar font[STB_FONT_consolas_bold_22_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_bold_22_usascii_BITMAP_HEIGHT][STB_FONT_consolas_bold_22_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_bold_22_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_bold_22_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_bold_22_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_bold_22_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_consolas_bold_22_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_bold_22_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_bold_22_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_bold_22_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_bold_22_usascii_s[i] + stb__consolas_bold_22_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_bold_22_usascii_t[i] + stb__consolas_bold_22_usascii_h[i]) * recip_height;
            font[i].x0 = stb__consolas_bold_22_usascii_x[i];
            font[i].y0 = stb__consolas_bold_22_usascii_y[i];
            font[i].x1 = stb__consolas_bold_22_usascii_x[i] + stb__consolas_bold_22_usascii_w[i];
            font[i].y1 = stb__consolas_bold_22_usascii_y[i] + stb__consolas_bold_22_usascii_h[i];
            font[i].advance_int = (stb__consolas_bold_22_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_bold_22_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_bold_22_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_bold_22_usascii_s[i] + stb__consolas_bold_22_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_bold_22_usascii_t[i] + stb__consolas_bold_22_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_bold_22_usascii_x[i] - 0.5f;
            font[i].y0f = stb__consolas_bold_22_usascii_y[i] - 0.5f;
            font[i].x1f = stb__consolas_bold_22_usascii_x[i] + stb__consolas_bold_22_usascii_w[i] + 0.5f;
            font[i].y1f = stb__consolas_bold_22_usascii_y[i] + stb__consolas_bold_22_usascii_h[i] + 0.5f;
            font[i].advance = stb__consolas_bold_22_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_bold_22_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_bold_22_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_bold_22_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_bold_22_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_bold_22_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_bold_22_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_bold_22_usascii_LINE_SPACING
#endif

