// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_19_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_19_latin1'.
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

#define STB_FONT_courier_19_latin1_BITMAP_WIDTH         256
#define STB_FONT_courier_19_latin1_BITMAP_HEIGHT         92
#define STB_FONT_courier_19_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_courier_19_latin1_FIRST_CHAR            32
#define STB_FONT_courier_19_latin1_NUM_CHARS            224

#define STB_FONT_courier_19_latin1_LINE_SPACING           9

static unsigned int stb__courier_19_latin1_pixels[]={
    0x0004c400,0x002402a8,0x00000000,0x00080004,0x99800011,0x00020000,
    0x99820000,0x06cc0000,0x01104000,0x00000400,0x4cb60660,0x4001dcc6,
    0x3907804b,0x4c007500,0x97057004,0x402c4a40,0x20ea00d9,0xb10b5529,
    0x02c43980,0x201541c8,0x07606ba5,0x20b632a0,0xf039bdd8,0x3ba812e1,
    0x014c0750,0x042e41c8,0x1000e602,0x2c806005,0x4a804a80,0x82405900,
    0x402a8b38,0x540ee00c,0x00d982c2,0x201b301d,0x202a81d8,0x05901639,
    0x73080c18,0x0e700001,0xbed980e8,0x9903b102,0x4c4e6000,0x20000000,
    0x03003001,0x4c1200c0,0x0480b0b3,0x0585500c,0x88166022,0x0aa01100,
    0x060160c8,0x2015b930,0x9300adc9,0x15cc015b,0x50ca8770,0x25c0220d,
    0x22ec89d7,0x44dbddb9,0x997644eb,0x64c5cccc,0x266440ad,0xdc983999,
    0x9266440a,0x29824399,0x42405509,0x5502ccc8,0x99999158,0x32164399,
    0x320ccccc,0x550ccccc,0x910b1220,0x8edc0599,0xb31db859,0x21663b70,
    0x2202ccc8,0x99104246,0x2e399999,0x30e60643,0x0643a83f,0x6dcb00e6,
    0x41750b31,0x98edc3b8,0x2e20ba85,0x3bb60643,0x902c1efe,0x44176620,
    0x333b12c1,0x220f4553,0x4c409bb9,0x40aa09bb,0xd9882c0c,0x49309305,
    0x12649849,0x17662126,0x4403a8f0,0x52a9999d,0x20644887,0x4488b059,
    0x849ac00c,0x15414c49,0x29893093,0x206cc2a8,0x0370389a,0x15554097,
    0x14c2c580,0x26014c0f,0x84882a82,0x20aaaa05,0x80ecd01d,0xa8340766,
    0x303a02aa,0x26160799,0x26190552,0x90904983,0x6d600e61,0xa8298d01,
    0x26340762,0x06542a82,0x2c40e66e,0x02c902d4,0xf0432c58,0x5300a601,
    0xb0370550,0x40d0b240,0x68dc0d1b,0x059206e0,0x5859803a,0x71011086,
    0x221e6032,0x00193884,0x261b81ab,0xb81a2a82,0x90aa0a61,0x6ee764c1,
    0x0481c80c,0x06606491,0xd05aad8b,0x5300a603,0x160b0550,0x05819244,
    0x23502c6a,0x49106a05,0xc808f00c,0x002d56c0,0x66cc1272,0x27201b31,
    0xa816b004,0x58aa0a61,0xa82986a0,0x03548242,0x1b824244,0x458550e6,
    0x05905aad,0x505300a6,0x20b01b85,0x01b0e61b,0x0d806c36,0x3703601b,
    0xd12cc1cc,0x5aad8588,0x01f10198,0x00b726e6,0x6d6001f1,0x414c1b00,
    0x06c0362a,0x04855053,0x819006eb,0xd9999b04,0x2962c2a8,0x05305982,
    0x2c2a8298,0x333360b0,0x2681dc6c,0x81dcd03b,0x6ccccd86,0x373222c8,
    0x08a580cd,0x981220fd,0x00244003,0x22340eeb,0x40ee0b84,0x205c2446,
    0x1002eb04,0x41c40b89,0x58b0aa1b,0x2980d890,0x515414c0,0x41c42c05,
    0x0720ec1b,0x0ec1c83b,0x37071072,0x580aa068,0x06402290,0x0c800730,
    0x20ec7500,0x1220d81c,0x1b039076,0xa40f2244,0x220c800c,0x92202e1d,
    0x058b9729,0x0298488b,0x0b14c14c,0x202e2ce8,0x65eec448,0x2cbdd882,
    0x82cbdd88,0x0aa4880b,0x2c1602a8,0x304ecca8,0x654039bb,0xb99304ec,
    0x2cbdd88b,0x01779d10,0x20597bb1,0x000bbce8,0xb8022000,0x0fb262ce,
    0x67644262,0x6405cccc,0x320ccddc,0x100ccddc,0x9d709980,0x441f64c5,
    0x88008800,0x4c59d700,0x011003ec,0x99999d91,0x0266620b,0x1004ccc4,
    0x4cc01333,0x44002200,0x10008800,0x00000001,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x41000000,0x0004b800,
    0x0e400410,0x441025c0,0x44010400,0x54000199,0x266051cc,0x54000099,
    0x0076200b,0x801980ee,0x0000002a,0x806e0100,0x00388038,0xd3008837,
    0x9ad8816c,0x0177100d,0x3602d9a6,0x6cd6c402,0x40970f80,0x2b20b669,
    0x37620b99,0x5457039b,0x55dedc5d,0x556ecc0b,0x0d99c882,0x102c8ca8,
    0x9b81b35b,0x12ef2039,0x3c85b34c,0x1cda80f1,0x50059019,0xc8095009,
    0x80007e82,0x45402208,0x18800028,0x00220880,0x30a20000,0x50173081,
    0x8ad4b105,0x0ea0828a,0x83073054,0x20441101,0x330cc0e3,0x20880820,
    0x2e237600,0x2001982e,0x30198019,0x9910aa03,0xc88e6649,0x2073324c,
    0x3333203b,0x98b320cc,0x999910cc,0x66443999,0x9999102c,0x02543999,
    0x240b3322,0x8a896410,0x9990f2a2,0x3222c1c3,0x333202cc,0x038e0ccc,
    0x02200262,0x0ea00988,0x013105b3,0x08800988,0x75000440,0x2ea1dc41,
    0x2620ee20,0x26ee6200,0x20ec2cc0,0x2a9999d8,0xb102ecc4,0x2e553333,
    0x26201c89,0x2e00b05d,0xea851514,0x1388ea21,0xbb310b99,0x04ddcc40,
    0x90cc2ee2,0x9501b779,0xbcc83997,0x220e80db,0xdbbcc895,0x0dbbcc80,
    0x41ccbca8,0x221ccbca,0x42a82980,0x6642a829,0x0a600dbb,0x2c0ea2a8,
    0x1555414c,0x82e530b0,0x0aaaa03a,0xaacc8016,0x262dcc28,0x058dce62,
    0x29805555,0x2015dcc0,0x02c24448,0x21b16122,0x44024404,0x912c2444,
    0x14c154b0,0x2a0a6154,0x53024402,0x20588d80,0x16480865,0x8ae08658,
    0x216480c8,0x45544006,0x531d5cc2,0x241659cc,0xb882980b,0x59a9801b,
    0x4c14c05c,0x8724859a,0x059a980c,0x017166a6,0x4a602e53,0x2a82983a,
    0x9815414c,0x00a6059a,0x56c01991,0x0c92205a,0x4c0b55b0,0x64910e0b,
    0x22001e40,0x0d9cc28a,0x9bb9cc53,0x80324885,0x2ee60829,0x2dd5ee42,
    0x33333336,0x16eaf722,0xb91a1d52,0x7b90b757,0xcccd8b75,0x999b2ccc,
    0x20ee5999,0x14c2a829,0x2af72154,0x200a605b,0x2d56c03b,0xd81cc370,
    0xbab805aa,0x88730dc2,0xa882cc1d,0x3489cc28,0x09532c45,0x5301cc37,
    0x81b8e380,0x06e00dc5,0xb312aa16,0x06e2c0dc,0x1b803716,0x414c25c0,
    0x15414c2a,0x14c0b037,0x296014c0,0xd9999b02,0xb8022960,0x6ccccd81,
    0x04dbed88,0x4730a2a2,0x8034299b,0x206ccccd,0x6471c029,0x21622dc0,
    0x85b81918,0xc87620f9,0x70322dc0,0x1188588b,0x2132310b,0x2440b848,
    0x5b81905c,0x0a600a60,0x838920b0,0x2290581b,0x20e20d42,0x1007301b,
    0x6c398515,0x8111dc29,0x5301b838,0x222bb980,0x44e9bbbd,0x11dcbcc9,
    0x89d3777b,0x41ecccad,0x4e9bbbd8,0x3a6eef62,0x6e5e64c4,0x372f3261,
    0x88360991,0x22441b04,0x4e9bbbd8,0x05300530,0x405cb058,0x22b05848,
    0x0b83baac,0x802e0488,0x261c9bba,0x75c16d43,0x4405c1dc,0x02005304,
    0x08060004,0x80110c40,0x18001000,0x74400180,0x9d100bbc,0x20020177,
    0x40ccddcc,0x442cddc9,0x5cccccec,0x764c59d7,0x9999d913,0x675c00b9,
    0x710fb262,0x6ec40007,0x7000b60c,0x1f64c59d,0x0199bb99,0x00000000,
    0x00000000,0x20000000,0x00110008,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x0aa01020,0x0e201530,0x6ed40040,0x7002a803,0x11015403,0x00000000,
    0x33102a88,0x2ea20133,0x06666660,0x00260154,0x440a9800,0x09880009,
    0x22013100,0x00013003,0x7907bbb3,0xb37b1097,0xd9812a01,0x21bb01db,
    0x12eee05a,0x5de40590,0x7703ff04,0x913ae1e2,0x85b34c5d,0x641da9cb,
    0xcb81aaab,0x5559319a,0xdaad88d5,0x576dedc1,0x644b912d,0x20dabc86,
    0xbda803b9,0x9804dbdd,0xb812a02c,0x41cccdbd,0xb37b10fe,0x90661981,
    0x03302443,0x50750912,0x80cc3307,0x19866019,0x04110298,0x041cc0c8,
    0x0c890101,0x80881640,0x4c910645,0x42c17c43,0x731614c4,0x7507e600,
    0x19805300,0x443d4398,0x209100ff,0x20b0d008,0xd0916008,0x20001a01,
    0x00044008,0x19122000,0x45800220,0x0012600c,0x32585873,0x48582c80,
    0x3982e064,0x582cc031,0x000a6130,0x93007824,0x65437bb9,0x642c1ccb,
    0x072f3260,0x02c0ecd6,0xc897221b,0x1cbcc986,0x40e5e64c,0x912e4418,
    0x41cc320d,0x201cbcc9,0x665643c8,0x700085c1,0x592a2b83,0x890b0570,
    0x9731640c,0x09307b7b,0x5bb7d712,0xd912e445,0xb100b058,0x8489f441,
    0x482e1225,0xdb9ac0c8,0x58190240,0x20c84848,0x81d40c84,0x32710485,
    0xb80c8480,0xb88ba85e,0x0b736324,0x17bb60b0,0x0b05d035,0x8f264989,
    0x2615c1f9,0x112a4887,0xb890b05f,0x8d443c41,0x0174b80b,0x42e12253,
    0x42c3981a,0x0b0d02c5,0x53981a89,0x33227303,0x64090b00,0x3981a849,
    0xc9201260,0x8488120d,0x6c2c89ca,0x8d05b912,0x8bcda879,0x26241a63,
    0x6c1b31cd,0x48582d80,0x86d98ec4,0x562091fc,0x2ccccccd,0xb0243616,
    0x06e1a858,0x91216162,0x65604ac0,0x10242c00,0x02c0901f,0x2e35006e,
    0x81a814c2,0x9cda8585,0xabbde829,0x730d404c,0xb9373120,0x20aa0b05,
    0x19b50485,0x981c9d09,0xd0b00373,0x161cc0d4,0x6c1d88aa,0x0d448581,
    0x3981a9cc,0x4090b00b,0x73035048,0x86401b80,0x04814c39,0x29801909,
    0x0d800158,0x0e6241a6,0x20b60360,0x98900485,0x4361220f,0x8ae18858,
    0x21206c3a,0xb1032175,0x31203b7b,0x6c481b0f,0x44837240,0x01903cc4,
    0x4189206c,0x4882e648,0x8240322c,0x2601220b,0x6cc00582,0x06e17cc2,
    0x98930073,0x03cc482e,0x260a62c4,0x64c1bbbb,0x6641dcbc,0xcccc983d,
    0x3627b221,0x045b503c,0x2655decc,0x30733326,0x64439999,0x5ecc4dcc,
    0x332a4cab,0x3332604e,0x6667641c,0x066675c0,0x540b3362,0x19999101,
    0x216ee440,0x1eeba804,0x6df65ed4,0x00e6ecc2,0x36b76faa,0x655decc3,
    0x00dccc84,0x40180040,0x00044008,0x37336a01,0x200100cd,0x20044008,
    0x33100400,0x80110013,0x00800800,0x30008800,0x06000133,0x26620100,
    0x00130009,0x00266002,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x97100dc0,0x03980179,
    0x803200c4,0x98189cc8,0x332e2000,0x1199100b,0x02606603,0x00007100,
    0x98015500,0x09999999,0x06a20088,0x9b930620,0x0a399503,0x20a2b72a,
    0x99999002,0x64c03507,0x02c800ad,0x540b2126,0x32f32204,0x300d884b,
    0xba81b711,0x59093001,0x01b71130,0x003750aa,0x7c06d6d4,0x414c0970,
    0x00c04889,0x502ddb86,0x6c01b539,0x22c88746,0x77176a2b,0x01217621,
    0x404eccc4,0x263b702c,0x7100cc05,0x405c5571,0x12e06403,0x013101c4,
    0x89c400d4,0x220172aa,0x2a065c00,0x8288e001,0x02a80220,0x40180931,
    0x2c415421,0x22d5c122,0xb1055482,0x048381d4,0x20220580,0x00049849,
    0x0048a28e,0x800181c4,0xa80dbbcc,0x238e9501,0x97993123,0x5c9bd983,
    0x001dc06a,0x440aa000,0x8034b84a,0xb0102a81,0x56016b10,0x70048204,
    0x007999d9,0x203b000b,0xd912e446,0x891c4a38,0x00b82dca,0x2005b950,
    0x6c41a848,0x44804ce3,0x70320c84,0x207660d4,0xb9502dca,0x37733105,
    0x36217013,0x55030062,0x43212200,0x02c76605,0x00240058,0x416e542c,
    0x21606e06,0x48b571c4,0x00730530,0x4d4c0298,0xda9eedc5,0x40267098,
    0x48e606a4,0x664f76e0,0x300a6029,0x59955505,0x5caeee55,0x18030a8c,
    0x0d8802a8,0x32e0b244,0x222c0160,0x10240999,0x58298160,0x121606a0,
    0x98247147,0x04881b02,0x2af72053,0x4cb6205b,0x208a272d,0x01658124,
    0x244dcecc,0x014c0298,0x25b300aa,0x818032d9,0x406c402a,0x205c160d,
    0xaa98b006,0x0190240e,0x06c14c0b,0x448580d8,0x3531c89a,0x6440a605,
    0x5300cbbc,0x2e0b0370,0x8d4a720c,0x54532bb9,0x42ea3981,0x240f2238,
    0x014c0298,0x644b80aa,0xa8180329,0x26036202,0x004eccce,0x20590079,
    0x10320485,0x1dc14c09,0x9090b068,0x14c09303,0x0a600a60,0x530b7032,
    0x072298b8,0x09036126,0x0d417bb3,0x805301b8,0x98154029,0x0194c5c1,
    0xd881540c,0x36666600,0x0ec41a80,0x580d8966,0xb8570848,0x0ec0a600,
    0x1e624072,0x01e55e5c,0x019100a6,0xbbd88298,0xcc804e9b,0x655e5c4d,
    0x39999303,0x64400aa0,0x5300a600,0x32000880,0x818034dc,0x0c0d882a,
    0x21be6160,0x884dbed8,0xa82dbbee,0x36e3dcbc,0x814c02bb,0x202cbdd8,
    0x04cabbd9,0xdcc98022,0x1dc41ccd,0xccddcc98,0x71000041,0x44002209,
    0xd8014c00,0xb9930cab,0x3326399b,0x9971ccdd,0x10079999,0x26666a79,
    0x37321999,0x99990ccd,0x3b260d99,0x06200884,0x26002620,0xcc980600,
    0x0881ccdd,0x00000200,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x26001310,
    0x991099cc,0x300e6649,0x10009813,0x664c0133,0x93166441,0x260b2a19,
    0x5999953c,0x17999910,0x2f333220,0x66666440,0x999951cc,0x332e3999,
    0x3223cccc,0x664402cc,0x24ca8189,0x26dc43cc,0x00333326,0x4ccccc80,
    0x19931664,0xcc98b322,0x65459950,0x7009512c,0xba83ea15,0x6540ee20,
    0x016a24bb,0x1b01654c,0x3b0b3091,0x20dd85d8,0x40da999d,0x03b999d8,
    0x85933375,0x2a9999d8,0x2e6666ee,0x337733b2,0x405d988b,0x880db889,
    0x3903620d,0x00272a02,0x4ccec0a6,0x0ec2cc59,0x3b076166,0x80485981,
    0x20a60c84,0x0b00902a,0x05302980,0x6c1d4550,0x0916e62a,0x0190b091,
    0x85819073,0x4aa0aa29,0xaa858aa5,0x0098802a,0x10161216,0x2a80599d,
    0x2a81c8b0,0x751d40ea,0x9090ccb0,0x05300900,0xb0091055,0x05300262,
    0x446c00e6,0x58c96b05,0x42c0c824,0x3883981b,0x4550432c,0x848aa481,
    0x666dc164,0x090b02db,0x931c4055,0x5140aa05,0x02c46c07,0xb2c12672,
    0xde8a424b,0x980564c3,0x76642a82,0xccd80ccc,0x20a602db,0x4401aeaa,
    0x26eb00cc,0x35048b48,0x2a12e258,0x36242acc,0x759505aa,0x2202a807,
    0x21740324,0xb5555b05,0x0e204b90,0x9bb99896,0x44058809,0x05d800cc,
    0x24332232,0x5c403ba4,0x15414c3c,0x20f40244,0x2aa0a605,0x36aa02ae,
    0x2f2582ad,0x855048b1,0x9502feee,0x362c1559,0x759505aa,0x2e02a807,
    0x242c0e61,0x45aaaad8,0x441b399c,0x3732a483,0x00d83ccd,0x0b9003b8,
    0x4555545c,0x4002cc83,0x0aa0a61b,0x12160122,0x80120298,0x25c9602a,
    0x2c0b8245,0x20e601b1,0x50452c48,0x05500625,0x8366666c,0x890b0485,
    0x8710b325,0x5c055049,0x014c0222,0x9a81d55c,0x7f05390c,0x8e602a07,
    0x4880b848,0x26048580,0x2aa01602,0x04582acc,0x8b0b048b,0x57073058,
    0x01549058,0x20e20550,0xb048581b,0x0f30b890,0x409b99d1,0x2a89102a,
    0x24980530,0x365a981b,0x7075482a,0x20d8190b,0xb0091048,0x9814c090,
    0x40550483,0x39091605,0x730750b0,0x4b0584a8,0x40aa002a,0x8584880b,
    0xd8890b04,0x0e20dbdb,0x81b02a80,0x4405302a,0x1e440d85,0x1d490397,
    0x0b6f2eae,0x402ef3a2,0x04858048,0x333ea0a6,0x6e441dcc,0x1675c0cd,
    0x33aa7d93,0x76441dcc,0xbb11ec1c,0xec887b99,0xb55ccccc,0x3260199b,
    0x33ae2cdd,0xec8fb262,0x9d913aa4,0x01033b21,0x00333b26,0x999b3011,
    0xddc985b9,0x516f442c,0x261f83db,0xe993260f,0x8800882d,0x99d99100,
    0x75c9d909,0x9bb9930c,0x00000039,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x98b32e00,0x333323cc,
    0x399910cc,0x664c332a,0xcccb82cc,0x40000003,0x2ccccccc,0x03799991,
    0x1ccc8795,0x880110c4,0x2004c0e1,0x000c4029,0x10013100,0x00008801,
    0x81884c00,0x00000880,0x0ec43301,0x773106cc,0x221d8813,0x4cce541e,
    0x0276621c,0x016cb500,0x333b3b10,0x5cccec49,0x2a21ea84,0x6cedddc3,
    0xdbcc983b,0x65decc3d,0x32205306,0x3224bcbc,0x3321b225,0xcc980dbb,
    0x65e541cb,0x8833a61c,0x5c3fa2ec,0x3bcbdbce,0x36b32b62,0x21b11d80,
    0x5bda9dc8,0x260aa3fc,0x12c05302,0x0b07101b,0x82d9800b,0x96b002da,
    0x20dc2c48,0x7014c5b9,0xb89105cf,0x002c2c1d,0x1612e064,0x12122012,
    0x22c24432,0xf122110b,0x24a86c1f,0x16446d45,0x40f44b62,0x21ba03db,
    0x80a60485,0x0e201b35,0x6c401612,0x201db803,0x160c2b38,0x4757306e,
    0x24ba9829,0x8bb86e28,0x4404e5c4,0x10999999,0x12160607,0x0d459a98,
    0x2980b9cc,0x029a64aa,0x6458a658,0x33e89220,0x900ae05d,0x0244190b,
    0x074ec053,0x58498710,0x00066440,0x23501991,0x555b05ae,0x43673079,
    0x32af6629,0xb962cccd,0x3b2a2163,0x333332e2,0x2c00173c,0x5d5ee424,
    0x336b0245,0x222ccccc,0x001719b4,0x0c8b14cb,0x17a6d922,0x425c01b8,
    0x29806e38,0x407673a0,0xb04dcce8,0x8000db80,0x2ba483d8,0x99555b05,
    0x26913981,0x5c0b3162,0x011223a8,0x01cc0019,0x81b890b0,0xb9cc0d45,
    0x53539001,0x22996009,0x16446545,0x40ba29b1,0x580cc01b,0x2c053016,
    0x400e2036,0x06644385,0xe8066440,0x216015cc,0x3371cc58,0x44f90645,
    0x41913a21,0x0100c849,0x89091036,0x16e06479,0x42c49036,0x4c866418,
    0x29960ee8,0xaccad896,0x2e89ec0d,0x2a0001b8,0x014c0399,0x0388398b,
    0xb10190b0,0x300edc07,0x20b0e2c5,0x8a761cc4,0xcdbcdbd8,0x33336a1e,
    0x5ddecc1c,0x2209703c,0x980cbbcc,0x224cabbd,0x44e9bbbd,0x4c1cccc9,
    0x5c1dcbcc,0x1ff10f25,0xd8eccfae,0x90110113,0xddca86c3,0xcc8002cc,
    0x0b014c00,0x1600710b,0x22d98032,0x20b802da,0x162162c5,0x982da873,
    0x0111c040,0x20000110,0x01001000,0x00c00440,0x00004400,0x00000000,
    0xdcc81720,0x9d910ccd,0xec996d43,0xcecb80cc,0x2800eccc,0x45f5c00a,
    0x916cccec,0x419b999d,0x0b60cdd8,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x98800000,0x00000000,0x0aa20000,
    0x22010505,0x9104c0bb,0x44440079,0x22088888,0x4111542b,0x54001008,
    0x02aaaaaa,0x01b80880,0x221c4db0,0xcccccccc,0x222220cc,0x26208888,
    0x00099999,0xb7000000,0xd985b799,0xe8b76e3d,0x8767cccc,0x5c9f700d,
    0x32444c3f,0x20e20e4b,0x550c88c8,0x542a8443,0x2eeea3ee,0x3f25bbbb,
    0x7ece2322,0x05c85f99,0xaaaaa831,0x226dc2aa,0x1641ff11,0xff896cb3,
    0x100012a0,0x99999999,0x37776a59,0x000002dd,0x0b0ba000,0xc8903216,
    0x0f44ba21,0x440ae4a8,0x10e6cc3a,0x441704e2,0xdcc98663,0x2001b342,
    0xf9481ba4,0x9ab89f11,0x8000b884,0x41b5b329,0x0820625d,0x000cc044,
    0x00000000,0x2c000000,0x1221b824,0x25d10390,0x599301f9,0x2ec1dc40,
    0x4337736e,0x21986a39,0x36588aa4,0x0be29000,0x8fe7b922,0x3b88ae39,
    0x6eeeeeec,0x0005100d,0x00000000,0x00000000,0x21600000,0x00649104,
    0xc87dc057,0x24017607,0x1b216672,0x8661e65c,0x2e0dcccb,0x552004dd,
    0xd3543985,0x00024245,0x00000000,0x00000000,0x00000000,0x20485800,
    0x01d40b0c,0x407aa3f3,0x7770499c,0x54930dc5,0x32a0049b,0x0022002c,
    0x7b102230,0x00030c97,0x00000000,0x00000000,0x00000000,0x42c00000,
    0x406ae604,0x1e88dc49,0x987201d3,0xa8e00005,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x64000000,0xd813aa4e,0x33333e05,
    0x406c1b1d,0x3b6e3ed8,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__courier_19_latin1_x[224]={ 0,4,2,1,1,1,2,3,4,2,0,1,2,1,
3,1,1,1,1,1,1,1,2,1,1,2,3,2,0,0,0,0,1,0,0,1,1,0,1,1,0,1,1,0,
1,0,0,0,1,0,0,1,1,0,0,0,0,0,1,0,0,0,1,0,3,1,0,1,1,1,1,1,0,1,
1,1,1,0,0,1,0,1,1,1,1,0,0,0,0,1,1,0,4,0,1,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,4,1,1,1,0,
4,1,2,0,0,0,0,1,0,-1,2,1,2,2,3,0,1,3,3,3,2,1,0,0,0,0,0,0,0,0,
0,0,0,1,0,0,0,0,1,1,1,1,-1,0,0,0,0,0,0,2,0,0,0,0,0,0,1,0,1,1,
1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,0,1,0,1,
 };
static signed short stb__courier_19_latin1_y[224]={ 13,2,2,1,1,2,4,2,2,2,2,3,10,7,
11,1,2,2,2,2,2,2,2,2,2,2,5,5,3,6,3,3,2,3,3,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,2,2,16,2,5,2,5,2,5,2,5,2,2,
2,2,2,5,5,5,5,5,5,5,3,5,5,5,5,5,5,2,2,2,6,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,13,5,2,3,4,3,
2,2,2,3,2,5,7,7,3,1,0,2,2,2,2,5,2,6,12,2,2,5,2,2,2,5,-1,-1,0,0,
0,-1,3,3,-1,-1,0,0,-1,-1,0,0,3,0,-1,-1,0,0,0,5,2,-1,-1,0,0,0,3,2,2,2,
2,3,2,1,5,5,2,2,2,2,2,2,2,2,2,3,2,2,2,3,2,4,5,2,2,2,2,2,2,2,
 };
static unsigned short stb__courier_19_latin1_w[224]={ 0,3,6,8,8,8,7,4,4,4,7,8,4,8,
4,8,8,8,8,8,8,8,7,8,8,7,4,5,9,10,9,6,8,10,10,9,9,9,9,9,10,8,9,10,
9,10,10,9,9,10,10,8,8,10,10,10,10,10,8,3,7,3,8,11,4,9,10,9,9,8,9,9,10,8,
6,9,8,10,10,8,10,9,9,8,8,10,10,10,10,9,8,4,2,4,8,9,9,9,9,9,9,9,9,9,
9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,0,3,7,8,8,10,
2,8,6,11,6,9,9,8,11,12,6,8,5,6,4,10,8,4,4,4,6,9,10,11,10,6,10,10,10,10,
10,10,10,9,9,9,9,9,8,8,8,8,10,10,9,9,9,9,9,6,10,10,10,10,10,10,9,9,9,9,
9,9,9,9,10,9,8,8,8,8,8,8,8,8,8,10,8,8,8,8,8,8,10,10,10,10,10,9,10,9,
 };
static unsigned short stb__courier_19_latin1_h[224]={ 0,12,6,14,14,12,10,6,14,14,7,10,6,2,
3,14,12,11,11,12,11,12,12,12,12,12,9,10,10,4,10,11,13,10,10,11,10,10,10,11,10,10,11,10,
10,10,10,11,10,12,10,11,10,11,10,10,10,10,10,14,14,14,5,2,3,9,12,9,12,9,11,12,11,11,
15,11,11,8,8,9,12,12,8,9,11,9,8,9,8,12,8,14,14,14,4,11,11,11,11,11,11,11,11,11,
11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,0,12,11,10,8,10,
14,13,3,11,6,8,6,2,11,2,6,11,6,7,3,12,13,3,4,6,6,8,11,11,11,12,14,14,13,13,
13,14,10,13,14,14,13,13,14,14,13,13,10,13,15,15,14,14,14,7,12,15,15,14,14,13,10,12,12,12,
12,11,12,13,9,11,12,12,12,12,11,11,11,11,12,10,12,12,12,11,12,9,9,12,12,12,12,15,15,15,
 };
static unsigned short stb__courier_19_latin1_s[224]={ 255,251,122,86,232,163,186,250,136,227,67,
204,111,215,180,162,19,162,171,124,180,133,142,150,159,189,205,250,52,143,62,
189,134,153,83,196,92,124,134,206,175,12,225,21,42,81,94,244,32,47,102,
11,144,20,1,244,233,222,213,171,95,122,129,203,185,166,197,145,219,185,31,
240,41,235,32,1,52,210,1,176,208,168,240,127,216,155,12,194,42,105,23,
103,159,81,154,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,
152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,255,250,94,
61,221,70,119,84,173,73,87,230,101,215,12,190,94,132,116,53,168,178,114,
163,138,82,75,32,62,102,141,87,175,108,143,93,63,216,72,104,126,241,53,
74,141,150,154,33,113,123,39,60,186,196,206,60,201,49,70,12,1,42,194,
37,222,212,172,52,191,23,105,33,232,241,10,182,43,24,114,123,1,164,28,
69,78,85,115,136,116,229,1,58,94,22,11,1, };
static unsigned short stb__courier_19_latin1_t[224]={ 1,1,81,1,1,17,58,70,1,1,81,
58,81,81,81,1,32,45,45,32,45,32,32,32,32,32,70,32,70,81,70,
45,17,58,70,45,58,58,58,45,58,70,45,70,70,58,70,45,70,32,58,
58,58,58,70,58,58,58,58,1,1,1,81,81,81,70,32,70,32,70,58,
32,58,45,1,58,58,70,81,70,32,32,70,70,45,70,81,70,81,32,81,
1,1,1,81,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,
45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,1,17,45,
58,70,58,1,17,81,45,81,70,81,81,45,81,81,45,81,81,81,32,17,
81,81,81,81,81,45,45,45,32,1,1,17,17,17,1,70,17,1,1,17,
17,1,1,17,17,58,17,1,1,1,1,1,81,17,1,1,17,17,17,58,
32,17,17,17,45,17,17,70,45,17,17,32,17,45,45,45,45,32,58,32,
32,32,45,32,70,70,32,45,32,32,1,1,1, };
static unsigned short stb__courier_19_latin1_a[224]={ 161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,161,
161,161,161,161,161,161,161,161, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_19_latin1_BITMAP_HEIGHT or STB_FONT_courier_19_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_19_latin1(stb_fontchar font[STB_FONT_courier_19_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_courier_19_latin1_BITMAP_HEIGHT][STB_FONT_courier_19_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_19_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_19_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_19_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_19_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_19_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_19_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_19_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__courier_19_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__courier_19_latin1_s[i] + stb__courier_19_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__courier_19_latin1_t[i] + stb__courier_19_latin1_h[i]) * recip_height;
            font[i].x0 = stb__courier_19_latin1_x[i];
            font[i].y0 = stb__courier_19_latin1_y[i];
            font[i].x1 = stb__courier_19_latin1_x[i] + stb__courier_19_latin1_w[i];
            font[i].y1 = stb__courier_19_latin1_y[i] + stb__courier_19_latin1_h[i];
            font[i].advance_int = (stb__courier_19_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__courier_19_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_19_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_19_latin1_s[i] + stb__courier_19_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_19_latin1_t[i] + stb__courier_19_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_19_latin1_x[i] - 0.5f;
            font[i].y0f = stb__courier_19_latin1_y[i] - 0.5f;
            font[i].x1f = stb__courier_19_latin1_x[i] + stb__courier_19_latin1_w[i] + 0.5f;
            font[i].y1f = stb__courier_19_latin1_y[i] + stb__courier_19_latin1_h[i] + 0.5f;
            font[i].advance = stb__courier_19_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_19_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_19_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_19_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_19_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_19_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_19_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_19_latin1_LINE_SPACING
#endif

