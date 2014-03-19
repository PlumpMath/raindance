// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_24_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_24_usascii'.
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

#define STB_FONT_courier_24_usascii_BITMAP_WIDTH         256
#define STB_FONT_courier_24_usascii_BITMAP_HEIGHT         62
#define STB_FONT_courier_24_usascii_BITMAP_HEIGHT_POW2    64

#define STB_FONT_courier_24_usascii_FIRST_CHAR            32
#define STB_FONT_courier_24_usascii_NUM_CHARS             95

#define STB_FONT_courier_24_usascii_LINE_SPACING          11

static unsigned int stb__courier_24_usascii_pixels[]={
    0x84400660,0xda800000,0x9b0e2901,0x400da4c0,0x0a9800a8,0x7d3bb6b0,
    0x010002ee,0x40040110,0x20030018,0x80044000,0x00130029,0x00000098,
    0x00009db0,0xe8ec0132,0x3a02c000,0x2126b100,0x16e5d01c,0x06ee6f4c,
    0x21f66ec4,0x206a5458,0x1f503ccb,0x89377b20,0xf702edeb,0x336a07db,
    0xecdc983e,0x7e47fd43,0x2dc02eed,0x2bfbbee0,0x6fe40ff9,0x4c5fd8ef,
    0x84980003,0x77005db8,0x0254b300,0x12603d30,0x93075588,0x20fc4d50,
    0x2074c0ea,0x8b10ec2d,0xa8a60d4a,0x7440fb81,0x2c88b203,0xc85906d4,
    0x81b116c4,0x20cdd83b,0x812a02d9,0x137661cc,0x0eea8336,0x98000498,
    0x02cdf5c4,0x1d076000,0xedbdd880,0x293024c6,0x3d84983a,0x5403a264,
    0x892a1665,0x1706a545,0x740fa848,0x1621a201,0xd10e8839,0x21a00b30,
    0x000f106d,0x227c41a6,0x301f706a,0x4c110009,0x00016204,0x403b8688,
    0x12634c1d,0x93057498,0x73cc0f88,0x0571f807,0x52a2c4b1,0x40d45306,
    0x26025c7a,0x39068d04,0x4007416a,0x07602d86,0x4c80ee00,0x4c1f01e4,
    0x4fffffff,0x35dddd70,0xfe82c409,0x3203ffff,0x83440d02,0x6e4c24c1,
    0x262cdece,0xb1f835c4,0x4392d801,0x51625eb8,0x3ccb81a9,0x800d8f30,
    0x41a2d40e,0x0760773b,0x403b0970,0x1bffa22b,0xc8950164,0x12603a01,
    0x9b30edc0,0x5002c409,0x2b81a207,0x0ee003a0,0x2f6b32a2,0x0b91621a,
    0xa54034fa,0x4b15d10d,0x006a5458,0x23ccb6e6,0xd503b936,0x1d81d937,
    0x701ca744,0x209f9505,0x6807a04d,0x22740b70,0x301f304b,0x220f1009,
    0x8016204f,0x4405703a,0x02b76606,0x92b803b2,0x26c37203,0x9500d3d8,
    0x2588e436,0x406a5458,0x3440bdb9,0xb935d3b1,0x307fdfb0,0x6567a23d,
    0x95105701,0x501fb01b,0x1d10680b,0x0e889f30,0x04980fc8,0x813604a8,
    0x40ea0058,0x4402c806,0x07a61edb,0x3a01b1c8,0xd9ec1323,0xb0d9ec00,
    0x54589621,0x02f320d4,0x64374688,0x83c88b61,0x9489deda,0xd300ae03,
    0xb539d5b0,0x2606801d,0x4aeda9df,0xcea9cfa8,0xc804980d,0x58812a01,
    0x0ee0ea00,0x68801a20,0x7fff41d4,0x1660ffff,0x1dcbe0d7,0xda86c7e0,
    0x95162589,0x9991041a,0x4c0f4183,0x401a0b34,0x0760573a,0x711b0b20,
    0x01a0079b,0x93179b71,0x6cb37220,0x4b804980,0x05881320,0x003a0ea0,
    0x1c8020ec,0x0d0d8126,0xf10f5126,0x25a80743,0x43bb261d,0x806a5458,
    0x0390120b,0x0e40aeb1,0xf03a8ec0,0x0d875001,0x4001a000,0x406c0049,
    0x10788049,0x002c409f,0x2004a875,0x46816459,0x83436049,0x34c0f849,
    0x41d30366,0x5458804b,0x1a8900d4,0x44ae12a0,0x4b500d04,0xb0069868,
    0x20000d81,0x00930006,0x2141a068,0x137660cb,0x0ea00588,0x21d8001d,
    0x3da89bec,0x834d024c,0x1ec4c849,0x40ddcdc8,0x54588069,0x241700d4,
    0x221d83b7,0x0770b60e,0x21e40eb8,0xb882f61d,0x20000d84,0x00930006,
    0xcea80f62,0xdfb83edc,0x81ef9afd,0xa8ea0058,0x2a498004,0x980bfd98,
    0x982c5a04,0x1f10f983,0xd802ba60,0xa8b10c42,0x979100d4,0x3621fec5,
    0x76442fde,0xedcd83ec,0x0733b603,0x17bbdf91,0x01f77f54,0x777f776c,
    0x7f76c04e,0x77774c1e,0x00133002,0xeeea8033,0x2a01eeef,0x74000363,
    0x16c05880,0x3b30b168,0xb81e4f60,0x3dbcefef,0x87bb3762,0x3a973158,
    0x18808019,0x00600620,0x00220013,0x00000022,0x00000000,0x00000000,
    0x00b31d80,0x02c42540,0x808202e2,0x01ca201c,0x101a9835,0x6664e013,
    0x00039992,0x00000000,0x00000000,0x00000000,0x00000000,0x15354000,
    0x09048000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x6c000000,0x0000deee,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x54053000,0x110000fe,0x77777740,0x3bbbbba3,0x8054c0fe,0x0ccc0998,
    0x2a200310,0x33331000,0x80d44013,0x98330198,0x40998819,0x83330199,
    0x44330198,0x41999999,0xb50003ed,0x4cc43bdf,0x33310099,0x98333333,
    0x20998809,0x337a62fc,0x001b00dd,0x82ddee98,0x43605806,0x41ddbcec,
    0xdd30defd,0xdcdda89d,0x66f4c1cc,0x3b606bdd,0x4c1eefee,0x25afecdd,
    0x77642efd,0xd87ddf52,0xddd90eee,0x22efec85,0x7f642efd,0xdddddd52,
    0x8003a81f,0xddb020bb,0xeb85bddd,0xfeeefeee,0xe98bfd51,0x2dff14fe,
    0xd82cc0da,0x883a6000,0x8040341d,0x21a61a68,0x03a12606,0x407445f3,
    0x058800fc,0x47d881b3,0x1c81d04a,0x01260dc0,0x0f412e0d,0x750b3075,
    0x2a00d000,0x45725c43,0x3760e458,0x56dc4981,0x3612a068,0x81c80220,
    0x50003458,0x341c81c7,0xb03a8930,0x00d00f45,0x88074162,0x41e41d87,
    0x0190a22b,0x5b024c0d,0x741d42c8,0x00263a80,0x40ea00b1,0x22c4570d,
    0x4c34ec1c,0x7880b204,0xfedfb8d8,0x68360082,0x06c00155,0x981a15c0,
    0x26081544,0x0b100004,0x68818073,0xd91d4166,0x815c06c3,0x543a201c,
    0x81642984,0x0eedfbba,0x7fffffd4,0x7503a81f,0x0e4588ae,0x0930ee36,
    0xb076006c,0x01754399,0x5eff4688,0x806801dd,0x930340e8,0x02b803d0,
    0x370b1000,0x0752a000,0x68eba498,0x201a0b10,0xb50069e9,0x16a27540,
    0x03a802c4,0x4588223b,0x4c1d0d80,0x0ee01a04,0x003e60db,0x0b1010b6,
    0x3ae204a8,0x21260681,0x640acdb8,0x0b100001,0x6ec0001b,0x46c52203,
    0x540d81a6,0x001f7003,0x82d401d1,0x5005880e,0x2205c887,0x4950d805,
    0x03454c49,0xe80f61dc,0xb001ec01,0x5d00e401,0x80930340,0x10724db8,
    0x80435555,0x0001d858,0x2ab101a2,0x540b11b3,0xed8006c3,0x5401d802,
    0x0b101b03,0x3bbbbaa0,0x6c02c402,0xf124c760,0x1d801bbf,0x407700ec,
    0x01d4003d,0x0340680d,0xb9e40093,0x9fe66442,0x590b1049,0x68068000,
    0x0122ae3b,0x4b802c4d,0x2225c03d,0x80d81d41,0x00750058,0x41b00b10,
    0xdff89358,0x361e202c,0x1ec07603,0x4981e400,0xb80ec000,0x2ab10142,
    0x04986c03,0x000950b1,0x4cd68068,0xb8e4039c,0x3a259802,0x44986880,
    0xb101b03a,0x2000ea00,0x640d8058,0x688c449a,0x41b612e0,0x016c40f8,
    0x2c80fc01,0x58254000,0x13b807c4,0x4986c01d,0x80760370,0x3601a01a,
    0x201d744a,0x1d100d59,0x981e85a8,0x80d81d44,0x00750058,0x81b00b10,
    0x75404ae8,0xcdd82d40,0x5d10b660,0x2e443d80,0x03eb80d0,0x88970ba2,
    0x2634c0df,0x3a21d01e,0x3d102c42,0x80680b90,0x016e42dc,0x0ec02574,
    0x4c0f23c8,0x80d81d44,0x00750058,0x01b00b10,0xbd3009d5,0xfea819b9,
    0x42fedfb8,0x5c1701e8,0x2204fdde,0x2037f404,0x80bdcee8,0x1decdfad,
    0xecccee88,0x0cdcec83,0x76e76c40,0xddfdd903,0xf503ee07,0x403f7003,
    0x76c3efe8,0xdddddb4f,0x2f7649dd,0x3ae7dfd1,0x40deeefe,0x405eeeed,
    0x82eefeec,0x26c0eefd,0x30003100,0x3bbbe603,0x9880feee,0x0a880000,
    0x4c003100,0x00266001,0x33100026,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x400cccc0,
    0x20199998,0x7fcc6ff9,0x20dd300e,0x01005eed,0x06000006,0x05f90030,
    0x4033000c,0x4cccc098,0x20ccc401,0x99988198,0x99998009,0x204c4099,
    0x0276c098,0x33333310,0x4ccc4133,0x44099999,0xec800999,0x76c01efe,
    0x80beeeee,0xd803a04a,0x44058069,0x175c5eed,0x026cc000,0x6ff880b1,
    0x4e7676c4,0x205fd505,0xfdd71efc,0x776c03dd,0xb0fff63e,0x17dddddd,
    0xddfddd50,0x43bba61d,0x24c0efe9,0xeeefe880,0x3b65eeee,0x4eeeeeee,
    0x3bbbbfa6,0x049e801d,0xd06983a8,0xa5407501,0x8e405806,0x003bb100,
    0x8803b910,0x222db805,0x7037441e,0x4073a0d7,0x2a0ea006,0xb887500e,
    0x0ea05805,0x0024c06c,0x2a2c4072,0x10d09303,0x0e9d403d,0x82b81d40,
    0x3a00e84a,0x680b00d0,0x0033a600,0x5880175c,0x2205b000,0x7072ae06,
    0x801a0397,0x5006d43a,0x0b007207,0x980d81d4,0x880e4004,0x84981d45,
    0x86c0d106,0xb81d402b,0x02541d03,0x02c03477,0x7d500076,0x2001f540,
    0x80f00058,0xd166ae00,0x801a0391,0x2a016e3a,0x05807503,0x4c06c0ea,
    0x203bfee4,0x3a83021c,0x20681884,0x1625883b,0x01d30750,0xd100e92a,
    0x4c058068,0x45d70005,0xa8800ce9,0x2aaaebaa,0x05884cc4,0x986cae00,
    0x801a0394,0x2a00993a,0x2c00e883,0x20360750,0xc803aa49,0x23a80721,
    0x9103403a,0x200d8570,0x1feeeeea,0xb0254740,0x20580683,0x002a2ed8,
    0x0ce98bae,0xebaaa880,0x7fdc2aaa,0x5c000f10,0x0e436952,0x372a0068,
    0x9ca800ce,0x5801dca9,0x3bbbbaa0,0xb94980fe,0x3fddd900,0x1f777540,
    0x1d0d01a0,0x272a04a8,0x202da999,0x0b300eca,0x4740b00d,0x5403d168,
    0x00faa03e,0x2fe80b10,0x5c010174,0x01c967a2,0xb97d400d,0x6675400e,
    0xa816006d,0x0d99999c,0x9004dc98,0x5403b335,0x3403b99c,0xffff3160,
    0x01d40dff,0xb027401d,0x07f9999b,0x65493058,0x019d302b,0x4400bae0,
    0x2617e205,0x700ea82e,0x039175c5,0x12a14c1a,0x5c3a80b3,0x1d40b005,
    0xebf980d8,0x02a1c800,0xd00623a8,0x407224c0,0x5c07501c,0xaa803a02,
    0x402eaaaa,0x86d8b105,0x88000dd9,0x02c401ec,0x3fa603f7,0x2e00bcdc,
    0x34072142,0x641d43a8,0x12a0ea02,0xb03a8160,0x03a69301,0x1d400390,
    0x15c0d0b0,0x7505981a,0x04a80e40,0x40b00d00,0xec8db10d,0x5d880001,
    0x04d81620,0x57000988,0x20d01c80,0x3441d43a,0x00b60750,0x0d81d40b,
    0x803a6498,0x80ea001c,0x4698340d,0x54074049,0x0740b503,0x05806800,
    0x3af3f766,0x30000032,0x00020080,0x32015c00,0x50ea0d01,0x1d407607,
    0x502c0688,0x12603607,0x007201d5,0xd03603a8,0x3b20ea88,0x77f642ee,
    0x3bbbbb62,0x7774c4ee,0xdd1003ef,0xfeeed8bf,0x00983eee,0x00000000,
    0x2e000000,0x7f5c2eee,0xddfdd72e,0x76c7dddd,0x22f4c3ee,0xeb83eeed,
    0xddfddd52,0x43bbb23d,0x3b63efe9,0xd32f7e44,0x6c09dddf,0xeeeeeeee,
    0xdddfd30f,0x0000017d,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00620000,0x01100088,0x13000620,0x81002000,0xc89fd008,
    0x1bfe61ff,0xff99bfe6,0x9bffe26f,0x3fe26ff9,0xfffff50f,0x04cc41ff,
    0x3e000154,0x2e5bb14f,0x2222224d,0x1b980888,0x05cc0e60,0x22222222,
    0x66640888,0x003ccccc,0x06fef7d4,0x1f6efecc,0x5cecee98,0x0dfdfe98,
    0x76f55fd4,0x72ffb80e,0x2ff21bbd,0x3eec8edc,0x30720930,0x03906809,
    0x503a60ae,0x2641d41b,0x0ae03fee,0x1ff40d30,0x657f23ff,0xeeeeeeee,
    0x8f6b6a3e,0xff113239,0x3bbbb62b,0x1eeeeeee,0x33333332,0x8372003c,
    0xc80886a8,0x3e606c41,0xeb88baa0,0x16a2f540,0x8664dac8,0x349f31fb,
    0x88390498,0x30589225,0x0e981a0b,0x4b8310b5,0x5c2a4fe8,0x5be88512,
    0x87fc5f90,0x120004fb,0x5b81d999,0x00002ffc,0x03e60000,0x45880264,
    0x0fc47059,0xe82d45b8,0xb805f900,0x26072343,0x64d03904,0x06c0931e,
    0xb7d100ea,0x3e216a00,0x3777ae0f,0x3c8ec3ed,0xa9f61fb8,0x4c00003f,
    0x00310602,0x70000000,0x33333339,0x5577510d,0x0137bb0b,0x2a3c40d3,
    0x0b201b03,0x1c8d0ae0,0x90390498,0x015d27a3,0xb800e895,0x5069801f,
    0x03fe207f,0xfa83b0f2,0xb2f99b20,0xdddddddd,0x0000007d,0x00000000,
    0x3bbbbbb2,0x5efd45ee,0x95305caa,0x201dc3dd,0x06c0ea0d,0x42b802c8,
    0x824c0e46,0xd49ba81c,0x261d0036,0x1e8db804,0x3e403a20,0x5a879770,
    0x51e60e88,0x00000e89,0x00000000,0x09700000,0x05880e80,0x816a3d10,
    0x0d81d478,0x85700590,0x824c0e46,0x92cc981d,0x367700d3,0x3d12dc01,
    0xd1981d10,0x21e96605,0x00102200,0x00000000,0x00000000,0x5000f880,
    0x40b16607,0x2e01f13b,0x00d81d45,0x68570059,0x6c4680e4,0x6ccdd01f,
    0x058e8805,0x20f4425c,0xa802b81e,0x00000a20,0x00000000,0x00000000,
    0x303b7000,0x2fdc2c4b,0xa83a20fa,0x2a07541d,0x0b201b03,0x1c8d0ae0,
    0x93db9d50,0x3e89b05d,0x6c05d900,0x3fba25ef,0xdddddf73,0x0000005d,
    0x00000000,0x00000000,0x75400000,0x5c0dedce,0xef9cedce,0xbd9997b1,
    0xbf9df505,0x6c5eec81,0xdddd11ef,0xeeb87ddd,0x02ec97e3,0x00000026,
    0x00000000,0x00000000,0x00000000,0x00000000,0x03310000,0x0c400330,
    0x00009980,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_24_usascii_x[95]={ 0,5,2,1,2,1,2,4,6,3,0,1,3,1,
4,2,2,2,1,2,2,2,2,2,2,2,4,3,0,1,0,0,2,0,0,1,1,0,1,1,1,2,1,0,
1,0,0,0,1,1,0,1,1,0,0,0,0,1,2,0,0,0,2,0,4,1,0,1,1,1,2,1,0,1,
1,1,1,0,1,1,0,1,1,2,1,0,0,0,1,1,2,0,5,0,1, };
static signed short stb__courier_24_usascii_y[95]={ 17,3,4,3,2,3,5,4,4,4,4,5,13,10,
14,2,3,3,3,3,4,4,3,4,3,3,8,8,5,8,5,4,3,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,3,21,3,7,4,7,4,7,4,7,4,3,
3,4,4,7,7,7,7,7,7,7,4,8,8,8,8,8,8,4,4,4,9, };
static unsigned short stb__courier_24_usascii_w[95]={ 0,3,8,10,9,10,9,4,4,4,8,11,5,10,
4,9,9,9,10,9,9,9,9,9,9,9,4,5,11,11,11,8,9,13,12,11,11,12,11,11,11,9,12,13,
11,13,12,11,11,11,13,10,11,12,13,13,12,11,9,4,8,4,9,14,5,11,12,11,12,11,10,11,12,10,
8,12,10,13,11,11,12,12,11,9,11,12,13,13,11,12,9,5,2,5,10, };
static unsigned short stb__courier_24_usascii_h[95]={ 0,15,6,16,17,15,13,7,16,16,8,12,8,2,
4,17,15,14,14,15,13,14,15,14,15,15,10,12,12,5,12,14,16,13,13,14,13,13,13,14,13,13,14,13,
13,13,13,14,13,16,13,14,13,14,13,13,13,13,13,16,17,16,7,2,4,11,14,11,14,11,13,14,13,14,
18,13,13,10,10,11,14,14,10,11,14,10,9,10,9,13,9,16,16,16,4, };
static unsigned short stb__courier_24_usascii_s[95]={ 172,118,178,45,29,107,188,173,62,67,154,
222,148,236,216,10,152,246,26,162,167,37,122,47,132,142,251,234,210,187,198,
57,84,127,141,115,115,102,90,90,65,55,102,27,15,1,238,1,214,72,41,
79,226,66,153,139,167,127,180,102,20,97,163,221,210,13,13,240,233,1,203,
209,190,185,1,77,177,71,47,35,172,196,59,25,221,85,112,98,126,154,138,
39,94,56,199, };
static unsigned short stb__courier_24_usascii_t[95]={ 16,1,49,1,1,1,34,49,1,1,49,
34,49,49,49,1,1,1,20,1,34,20,1,20,1,1,20,34,34,49,34,
20,1,34,34,20,35,35,35,20,35,35,20,35,35,35,20,20,20,1,35,
20,20,20,20,20,20,20,20,1,1,1,49,49,49,49,20,34,1,49,20,
1,20,1,1,35,34,49,49,49,1,1,49,49,1,49,49,49,49,34,49,
1,1,1,49, };
static unsigned short stb__courier_24_usascii_a[95]={ 203,203,203,203,203,203,203,203,
203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,
203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,
203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,
203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,
203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,
203,203,203,203,203,203,203, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_24_usascii_BITMAP_HEIGHT or STB_FONT_courier_24_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_24_usascii(stb_fontchar font[STB_FONT_courier_24_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_courier_24_usascii_BITMAP_HEIGHT][STB_FONT_courier_24_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_24_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_24_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_24_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_24_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_24_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_24_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_24_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__courier_24_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__courier_24_usascii_s[i] + stb__courier_24_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__courier_24_usascii_t[i] + stb__courier_24_usascii_h[i]) * recip_height;
            font[i].x0 = stb__courier_24_usascii_x[i];
            font[i].y0 = stb__courier_24_usascii_y[i];
            font[i].x1 = stb__courier_24_usascii_x[i] + stb__courier_24_usascii_w[i];
            font[i].y1 = stb__courier_24_usascii_y[i] + stb__courier_24_usascii_h[i];
            font[i].advance_int = (stb__courier_24_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__courier_24_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_24_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_24_usascii_s[i] + stb__courier_24_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_24_usascii_t[i] + stb__courier_24_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_24_usascii_x[i] - 0.5f;
            font[i].y0f = stb__courier_24_usascii_y[i] - 0.5f;
            font[i].x1f = stb__courier_24_usascii_x[i] + stb__courier_24_usascii_w[i] + 0.5f;
            font[i].y1f = stb__courier_24_usascii_y[i] + stb__courier_24_usascii_h[i] + 0.5f;
            font[i].advance = stb__courier_24_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_24_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_24_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_24_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_24_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_24_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_24_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_24_usascii_LINE_SPACING
#endif

