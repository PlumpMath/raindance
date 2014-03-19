// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_10_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_10_latin_ext'.
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

#define STB_FONT_courier_10_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_courier_10_latin_ext_BITMAP_HEIGHT         66
#define STB_FONT_courier_10_latin_ext_BITMAP_HEIGHT_POW2   128

#define STB_FONT_courier_10_latin_ext_FIRST_CHAR            32
#define STB_FONT_courier_10_latin_ext_NUM_CHARS            560

#define STB_FONT_courier_10_latin_ext_LINE_SPACING           5

static unsigned int stb__courier_10_latin_ext_pixels[]={
    0x88040008,0x40c41a81,0x89828809,0x1440d441,0x302620cc,0x89831055,
    0x04541c42,0x09818c35,0x30080018,0x20014c41,0x20981182,0x502a1a81,
    0x03019800,0x008a02e2,0x01350528,0x40d40540,0x31104602,0x18131030,
    0x88c0a883,0x06302620,0x30318333,0x10626060,0x40d44505,0x2ac98301,
    0x044399b8,0x2aac9826,0x21426044,0x286220c1,0x20aca818,0x46050188,
    0x4e6518c1,0x2220c639,0x0980b220,0x404c4098,0x2e6a2b9a,0x31855511,
    0x0c64aa4c,0x43192a93,0x218c9549,0x5cd49549,0x5452a931,0x50aaa22a,
    0x3371cd54,0x251cd547,0x2a082618,0xa8ea6a2a,0x31554410,0x33a9a8a1,
    0x429d4d41,0x14885039,0x5439aa87,0x1295543c,0x1a8b9943,0x40292a93,
    0x12552609,0x28ae1303,0x4a613142,0x2994311a,0x53286235,0x2650c46a,
    0x22862352,0x8a50c422,0x2504c509,0x08263509,0x3bc86a13,0x26503314,
    0x140bc820,0x41328e13,0x50826510,0x44a0a050,0x0c0d4261,0x450c4250,
    0x1450c4a2,0x50c45550,0x294a06d4,0x51428aa2,0x9450c462,0x25143118,
    0x25143118,0x51143118,0x50a50c45,0x5099450a,0x213198a3,0x15054a1a,
    0x5014a0e6,0x9452850c,0x140a3302,0x29882814,0x0181a84c,0x450c504a,
    0x14514312,0x314311cc,0x250a9851,0x41314a08,0x94314312,0x44a18a18,
    0x0c4a18a1,0x28a088c5,0x98a13146,0x51aaa8a0,0x1aaa8e61,0xab82e193,
    0x30332829,0x13147559,0x98199426,0xca850330,0x502b2a0a,0x26355503,
    0x2a294050,0x8a2b2a3a,0x1d564462,0x86285151,0x0aab9852,0x2a215373,
    0x71dd542a,0x23baa853,0x1dd5429b,0x3baa8537,0xa9b98a6e,0xaa88a6e0,
    0x298aaa22,0x0a6ae098,0x04401026,0x206aae28,0x88aaa218,0x38d55c52,
    0x40b8d55c,0x0280a80a,0x029b884c,0x4402a14a,0x2020a6e2,0x26e2c9a8,
    0x010d55c2,0x00000000,0x00000000,0x82200000,0x551002a8,0x5540c030,
    0x00020040,0x81810010,0x26208808,0x40055102,0x2a02202a,0x00006002,
    0x00064cae,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x03182a80,0x14098831,
    0x00001310,0x00004023,0x4144c026,0x05310100,0x31831835,0x020a0150,
    0x30266040,0x06302e06,0x40130280,0x80c60c61,0x404144c0,0x00c4c289,
    0x44140540,0x0988180a,0x4c311014,0x55542b8c,0x11106a20,0x75955050,
    0x5350500c,0x110dcd47,0x02983110,0x13031835,0x540da870,0x02102660,
    0x54111063,0x18088934,0x81a88628,0x866b220a,0x414cc0a8,0xa9814409,
    0x98502a81,0x9d4d4954,0x1c949549,0x33525526,0x5544a098,0x911c5222,
    0x5c328c55,0x46e6a0bb,0x44228209,0x9ccdc2aa,0x4cdc2aa8,0xa44e6aa3,
    0x5130a238,0x98aaa270,0xa5526954,0x28d42aa8,0xaa4d2a93,0xa9855914,
    0x450554c2,0x26759552,0x9cd26152,0xa94c2ac8,0x18850280,0x862104ca,
    0x43102ea2,0x28506f22,0x062504c5,0x471c1405,0x55101422,0x08261314,
    0x420984c5,0x18943509,0x4e0a506a,0x250c4262,0x41314a18,0x12862529,
    0x43105143,0x8c5026e2,0xa8628651,0x22831451,0x18850281,0x8a18814a,
    0x450c419a,0x14a09872,0x0282988a,0x2a228e0a,0x28220662,0x28cc5285,
    0x84c66294,0x330a621a,0x2a41aab8,0x0c4a1894,0x2a8c50a5,0x8a189431,
    0x510a0982,0x28283141,0x55c52986,0x20a06283,0x318a0aca,0x5d218a03,
    0x23263143,0x28555438,0x53035026,0x2e164c33,0x714110aa,0x2a6e6355,
    0x30a84c50,0x215098a7,0x506aaa39,0x4cae2883,0x098a510c,0x4518a18a,
    0x28a69309,0x99986286,0x9b82a6a1,0x5066910a,0xa8c57550,0x5d5414a2,
    0x37010282,0x2e1aab85,0x53700829,0x4ab2a010,0x20282aa8,0x73030302,
    0x98098153,0x570aaa20,0x70aaa253,0x28130535,0x22854070,0x14dc2aa8,
    0x2aa88a6e,0x5c29b808,0x40000029,0x4c0164c0,0x1c322533,0x18159500,
    0x06000400,0x20000600,0x0c060298,0x130002a2,0x00000030,0x14c45510,
    0x00000000,0x00000c00,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x06300000,
    0x2a062066,0x08980000,0x1404c0c4,0x881300a8,0x26601501,0x20c40540,
    0x0a022031,0x05130014,0x3303182a,0x22000888,0x20c22080,0x4c0a81a8,
    0x89831828,0x818c18c2,0x4280a019,0x40606a24,0x54c18981,0x30330141,
    0x30260260,0x22606206,0x188818c0,0x8409818c,0x2a254ea0,0x7104c0b9,
    0x280a8133,0x42a81a88,0x4ccd4198,0x3398a660,0x30231247,0x50280a06,
    0x10501501,0x11300c03,0xa4c2a530,0x982aa639,0x88aa60aa,0x2154c2ac,
    0x2a532aa9,0x8d42eae0,0x260ae238,0x92637089,0x54e21529,0x9c42eae2,
    0x2a14112a,0x820aca80,0xc982eae1,0x75056541,0x88565419,0x415950e0,
    0x441438a1,0x40654554,0x056542aa,0x0a94c553,0xaa885591,0x31d65c1a,
    0x228d4314,0x104dc09b,0x20ac8943,0x544c4a18,0x114618a1,0x26030a73,
    0x142a4a19,0x146144c3,0x0a088a26,0xaa8502a6,0x141463aa,0x28298828,
    0x860a0a14,0x285370e2,0x98144c31,0x450c4283,0x93062862,0x208aa851,
    0x14a618a3,0x215102a2,0x09828a09,0x8a2944ca,0x0d554141,0x13099806,
    0x70628535,0x882e0501,0x81328518,0x2050a142,0x17570502,0x50704428,
    0x22500c50,0x8a86aae1,0x14145442,0x218a2826,0x4dc5c3ab,0xa921d541,
    0x715462ba,0x054dc153,0x54cc1535,0x6c42a6a1,0x8aeaa0a9,0x184a4309,
    0x4e21330a,0x215d542a,0x42830982,0x5cc0a9ba,0x0a9a8281,0x140a0c26,
    0x54140c4c,0x998280ba,0x50c4a243,0x21aab862,0x4141b9a8,0x2eaa0a9a,
    0x326a14a2,0x0a125c2a,0x000a6730,0x00100000,0x10055590,0x29007557,
    0x8593001a,0x0b262aac,0x15950300,0x54555900,0x220aca81,0x00565408,
    0x4000aca8,0x55225348,0x400e2573,0x10000aca,0x2a010e19,0x0000aac9,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x22200000,0x30014441,0x460a0301,0x110018c1,0x80a02601,
    0x22144c09,0x08080a18,0x180202a0,0x20130026,0x18c18c08,0x04022200,
    0x84100d44,0x80980a80,0x13510102,0x15008084,0x2a0c8130,0x80a05440,
    0x81310301,0x20d441a8,0x40cc41a8,0x500884a8,0x19814413,0x4e60980a,
    0x35062239,0x80181835,0x5442b982,0x54c05441,0x4d404cc1,0x26a0c239,
    0x0c60c62b,0x4d40880c,0x18337139,0x18c29983,0x8aa62818,0x5912aac8,
    0x262a9c45,0x8aab222a,0x2ab222a9,0xac88aa62,0x50a6aa2a,0x4439a855,
    0x2aa60aac,0x86aa60a1,0x21aa98a1,0x21aa9822,0x26aa0a9a,0x85550302,
    0x42aa80ca,0x8104c0ca,0x98d42238,0x854a6152,0x54a61529,0x9a884130,
    0x2a6154c1,0x2a6154c2,0x18898942,0x2605042a,0x86226228,0x2226210a,
    0x898842a1,0x09842a18,0x84c73051,0x8618a284,0x8a186182,0x0c2a8861,
    0x442651c3,0x30e60302,0x130e6051,0x51066285,0x18a294a1,0x8a18a18a,
    0x10d4c051,0x44a18943,0x2650c4a1,0x5c133334,0x4170140b,0x2ee09999,
    0xb8266660,0x8266660b,0x2288a0bb,0x838628a8,0x1880c4a2,0x22314062,
    0x0c4a0881,0x45114a28,0x85151061,0x1454428a,0x22130a2a,0x142a6303,
    0x450c50c5,0x401318a1,0x13282619,0x04ca0994,0x435350a5,0x41aa9862,
    0x8a1a9a82,0x2286a6a1,0x2286a6a1,0xa89266e1,0x0326a1b9,0x83335145,
    0x550ccd42,0x51199a85,0x8ccd4153,0x26e0a9b9,0x1066a249,0x555c3735,
    0xb86e6a21,0x14d5c1aa,0x555c4557,0xaa8aeaa0,0xa8aeaa2b,0x06aae2ba,
    0x20a9a833,0x2a6a0a9a,0x8002a6a0,0x9803aac8,0xaac8802c,0x1d564403,
    0x00eab220,0x55644000,0x00011000,0x00000000,0x1c4ae000,0x103895c0,
    0x00000100,0x9a880800,0x20000000,0x0000000c,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x40d41428,
    0x55411019,0x0102a20a,0x2602a021,0x20188280,0x0840981a,0x13015008,
    0x40c41330,0x180002a9,0x44001503,0x8280981a,0x8c0cc0a8,0x80440a81,
    0x20182809,0x10151031,0x22006603,0x75104ca0,0x282610a0,0x0c614dc5,
    0x0880c0c6,0x260a5018,0x14cc18c0,0x10c0c0c6,0x4c414294,0x0aaa2099,
    0x21898111,0x28c09998,0x10c404c4,0x04440605,0x85310626,0x20c44098,
    0x808880a9,0x20288089,0x45530e82,0x0dd4c512,0x22a14062,0x2154c282,
    0x2154c2a9,0x406542a9,0x21554312,0x215542aa,0x115542aa,0xb8335053,
    0x8662261a,0x0aca8261,0x4ccc2b2a,0x2a1ccc18,0x42b2a0ac,0x2065408b,
    0x5912aac8,0x89cd2655,0x55912aac,0x65406545,0xca80ca80,0x86203500,
    0x42255532,0xa8501438,0x1310d43b,0x46226231,0x13118898,0x14144c31,
    0x83983983,0x39839839,0x2a504c62,0x21984c20,0x81428508,0x044d44c2,
    0x0a050353,0x144c1357,0x042a0854,0x410a8a35,0x4144c10a,0x82898289,
    0x00c98289,0x0c661413,0x50220306,0x4ccc0862,0x21333309,0x33309999,
    0x94145413,0x44515109,0x8a2a228a,0x22a228a8,0x28a19982,0x33313188,
    0x50281314,0x54198998,0x428140b9,0xb828a8a2,0x2605dc0b,0x2e05dc52,
    0x5414540b,0xa828a828,0x54305028,0xa85730a9,0x8280a099,0x4d42c29a,
    0xa86a6a1a,0x86a6a1a9,0x15541aab,0x2a237351,0x373511b9,0x5446e6a2,
    0x710c21b9,0x1155c155,0x55441333,0x98850282,0x0501c099,0x5c15510a,
    0x143141aa,0x18a2a8c3,0x06aae18a,0xaab83557,0x2a0d55c1,0x000360ac,
    0x10000180,0xb8000000,0x00000712,0x09a80000,0xa8000000,0x02b2a0ac,
    0x32a0d440,0x802b2a0a,0x5644712b,0x2755913a,0x2b225339,0x2755913a,
    0x895c712b,0x571c4ae3,0x000000e2,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0xaa980000,0x4c199801,
    0x204440aa,0x44188808,0x64140100,0x804c0660,0x2a0a2009,0x201001a9,
    0xa94c0418,0x22055710,0x08080cc0,0x05550630,0x01022201,0x10105571,
    0x002a5101,0x88300818,0x40c40888,0xa80aa861,0x32e04dc1,0x8150183a,
    0x155cc0ac,0x881c0022,0x44c01100,0x554c1441,0x1060a662,0x250c5059,
    0x07595118,0x05710a05,0x88730153,0x595518ab,0x44a0d4c7,0xc98aae61,
    0x53886282,0x414cc0c5,0x8181021b,0x0a073018,0x11550544,0x1a9a8398,
    0x14306aaa,0x31305073,0x22298445,0x88398530,0x88d44c40,0x0d4d42ab,
    0x28628115,0x40454a31,0x304dcc42,0x8a887306,0x328c1182,0x418941cc,
    0x1429b8a1,0x2ae28983,0x09940a0b,0x05571081,0x50283335,0x55415370,
    0x50510503,0x50a37514,0x454cc0a8,0x426aaa63,0x42839aa9,0x4a262ba8,
    0x0510c4a2,0x25759039,0x1d4a3148,0x205443a8,0x9a885051,0xaca80c1b,
    0x14d22140,0x3128a375,0x36615d54,0x2b88a222,0x25040828,0x02809818,
    0x49702605,0x54044140,0x2850c1aa,0x22994094,0x53282628,0x3b102050,
    0x22189415,0x01451440,0x50228c22,0x142860a0,0x0a1430a0,0x14300814,
    0x30260625,0x30182837,0x12820455,0x15950303,0x50605654,0x65415593,
    0xc857510a,0x2155cc0a,0x05530aca,0x02aa0322,0x0aca8322,0x9a44020c,
    0x64457512,0x1a8063aa,0xa82ab2a2,0x355510ac,0xca8eaae2,0xaab8800a,
    0x59507263,0x2ab98181,0x40814d22,0x46ab21c8,0x2141aac8,0x29108889,
    0x00000029,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x10318300,0x4e218c35,0x020c4c38,0x842a9806,
    0x2a008040,0x2eaa639a,0x441a8040,0x20281981,0x04c280a8,0x54429aa8,
    0x02200021,0x00000062,0x40888040,0x11022200,0x20081110,0x30a82008,
    0x0a050150,0x10540c4a,0x98814aa9,0x71046188,0x22a8c885,0x8a385109,
    0x4c04c0ca,0x94050502,0x09828082,0x56442815,0xb8aa710a,0x571540ba,
    0x27349922,0x4c6e5538,0x442ab224,0x55912aac,0x323acaa8,0x755911aa,
    0x59515522,0x1b244ae1,0x2eae1757,0x20e60aa0,0x155c4298,0x2e255591,
    0x8266662a,0x33501839,0x23851098,0x2510a262,0x72828140,0x83982603,
    0x04c262ab,0x18941595,0x10a30a26,0x42a94c53,0x514cc51a,0x2a28a152,
    0x28c31410,0x08945143,0x4a0a0c4a,0x11445218,0x40a05051,0x5c31281a,
    0x50c4a1aa,0x01828353,0x53550179,0x22a0aaa8,0x8141cd42,0x3300aa82,
    0xa8625050,0x55c140aa,0x41405c0b,0x429a8c52,0x260c8529,0x451429a8,
    0x81d5c0bb,0x2a1aaa82,0x20d55c2a,0x41405282,0x140a0502,0x18943128,
    0x202a0c4a,0x0528a182,0xaab80c28,0x05032aa1,0x26066a0a,0x06250501,
    0x14505026,0x550c260a,0x518518c9,0x271144c5,0x3145142a,0x05050294,
    0x1418940a,0xaac81444,0x65435591,0xa8856540,0x22534883,0x14d22554,
    0x442b2a02,0x11913aab,0x0a98ea07,0xa803895c,0x82b2a0ac,0x55644553,
    0xa442b2a0,0x950aa22a,0x30d564c5,0x42aac859,0x32446e48,0x399cca67,
    0x55910d52,0x44eab221,0x42c9870c,0x82b220ac,0x56547548,0x00000640,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x41040000,0x0aaa1aa9,0x3a944553,0x2a61c46a,0xa98554c2,
    0x054a6198,0x40aaa606,0x55544182,0x22e202a1,0x2217570c,0x982622ab,
    0x26730e60,0x130d4d43,0x020c4013,0xa9c41111,0x1aaab8a1,0xaaaa8a26,
    0x200d4402,0x41815309,0x2601aaa8,0x5c0108a0,0x39830c4a,0x218a2862,
    0x44c45398,0x92826e18,0x85062851,0x00530e18,0x0a61464c,0x285110ea,
    0x8308c431,0x28813282,0x51514d54,0xb822a618,0x98aa61b9,0x236294a4,
    0x0aaa8a06,0x22a1d065,0x15443533,0x0c130222,0x4a018c22,0x22a20621,
    0x18a28262,0x3330d554,0x230a8813,0x2231419b,0x14131aca,0x35551037,
    0x22066e2e,0x20a0dd44,0x03128312,0x11051305,0x06c1b9b8,0x5542d886,
    0x0b86a22a,0x0252294a,0x201a8803,0x945552b9,0x43555109,0x55c00001,
    0x44666a0b,0x2a6a1b9a,0x290aeaa0,0x2e1a9a84,0x555530a9,0x4142baa8,
    0x014c0a9a,0x542ac9a8,0xc85c6442,0x4a6911aa,0x54131098,0x220dc0ac,
    0x854542ba,0x4426228a,0x98a2a218,0x51702554,0x00000071,0x20000000,
    0x2e208888,0x000001bb,0x00000000,0x00018000,0x2a010305,0x00000000,
    0x00000000,0x00000000,0x00000000,0x26660000,0x00000099,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x55554c00,0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_10_latin_ext_x[560]={ 0,2,1,0,0,0,1,2,2,1,0,0,1,0,
1,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,2,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,2,0,0,0,0,
2,0,1,0,0,0,0,0,0,-1,1,0,1,1,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static signed short stb__courier_10_latin_ext_y[560]={ 7,1,1,1,1,1,2,1,1,1,1,2,5,4,
5,1,1,1,1,1,1,1,1,1,1,1,3,3,2,3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,1,3,1,3,1,3,1,3,1,1,
1,1,1,3,3,3,3,3,3,3,1,3,3,3,3,3,3,1,1,1,3,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,3,1,1,2,1,
1,1,1,1,1,3,4,4,1,0,0,1,1,1,1,3,1,3,6,1,1,3,1,1,1,3,0,0,0,0,
0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,2,1,0,0,0,0,0,1,1,1,1,
1,1,1,1,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,
0,1,0,1,1,3,0,1,0,1,0,1,0,1,0,1,1,1,0,1,0,1,0,1,1,3,0,1,0,1,
0,1,0,1,1,1,0,0,1,1,0,1,0,1,0,1,1,1,0,3,1,1,0,1,1,1,3,0,-1,1,
1,1,1,1,1,1,1,0,1,1,3,0,1,1,1,3,0,1,0,1,0,1,1,3,0,1,1,3,0,1,
0,1,0,1,1,3,0,1,1,1,0,1,1,1,0,1,0,1,0,1,-1,1,0,1,1,3,0,1,0,1,
0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,
1,0,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,-2,-1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static unsigned short stb__courier_10_latin_ext_w[560]={ 0,2,4,5,5,5,4,2,3,2,4,5,3,5,
3,5,5,5,5,5,5,5,4,5,5,4,3,3,5,5,5,4,5,6,5,5,5,5,5,5,5,5,6,6,
5,6,5,5,5,5,6,5,5,5,6,6,5,5,5,2,4,2,5,6,3,5,5,5,6,5,5,5,5,5,
4,6,5,6,5,5,5,6,5,5,5,5,6,6,5,6,4,2,1,2,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,2,5,5,5,5,
1,5,3,6,3,5,5,5,6,7,3,5,3,3,3,5,5,3,3,3,4,5,6,6,6,4,6,6,6,6,
6,6,6,5,5,5,5,5,5,5,5,5,6,5,5,5,5,5,5,4,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,5,6,
6,5,6,5,6,6,5,5,5,5,5,5,5,5,5,6,6,6,5,5,5,5,5,5,6,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,5,6,4,6,6,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,5,6,5,6,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,5,6,
5,5,4,5,4,5,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,6,5,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5, };
static unsigned short stb__courier_10_latin_ext_h[560]={ 0,7,4,7,7,7,6,4,8,8,4,5,4,1,
3,7,7,6,6,7,6,7,7,7,7,7,5,5,5,3,5,7,7,6,6,7,6,6,6,7,6,6,7,6,
6,6,6,7,6,8,6,7,6,7,6,6,6,6,6,8,7,8,3,1,2,5,7,5,7,5,6,6,6,6,
8,6,6,4,4,5,6,6,4,5,7,5,4,5,4,6,4,8,8,8,3,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,6,6,6,5,6,
8,7,2,7,3,4,3,1,7,2,3,6,4,4,2,6,7,2,3,4,3,4,6,6,6,6,7,7,7,7,
7,7,6,8,7,7,7,7,7,7,7,7,6,7,8,8,8,8,8,4,7,8,8,8,8,7,6,7,7,7,
7,7,7,7,5,6,7,7,7,7,6,6,6,6,7,6,7,7,7,7,7,5,6,7,7,7,7,8,8,8,
7,7,7,7,8,6,8,7,8,7,8,7,8,7,7,7,6,7,7,7,7,7,7,7,8,6,7,7,8,8,
8,8,8,8,8,8,7,7,6,6,7,6,7,6,7,6,8,8,7,4,7,8,8,8,8,8,4,7,8,8,
8,6,6,6,6,6,6,7,6,8,6,7,6,6,7,6,8,7,8,7,8,7,6,5,7,6,8,6,7,6,
8,7,8,7,8,6,8,7,8,8,7,7,6,7,8,7,8,7,8,7,9,7,8,7,8,6,7,7,7,8,
7,7,6,7,6,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,6,6,7,6,6,6,
6,6,6,6,6,6,6,6,6,6,7,5,6,6,6,6,6,6,6,6,6,6,6,6,6,7,5,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,6,8,
7,8,7,8,8,8,8,8,8,8,8,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,9,9,7,7,8,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6, };
static unsigned short stb__courier_10_latin_ext_s[560]={ 254,186,189,154,118,74,93,253,143,154,161,
64,178,247,211,18,72,98,117,180,165,120,176,24,30,7,252,252,77,229,96,
36,158,86,147,216,197,203,228,174,234,240,141,66,60,171,178,133,222,51,209,
116,216,104,246,190,184,153,159,188,93,110,223,247,243,13,128,7,134,39,141,
135,129,123,144,110,104,182,113,19,80,73,140,45,13,58,133,32,172,23,108,
168,171,179,200,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,
242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,254,253,236,
230,1,219,228,108,247,126,219,146,194,247,151,239,215,150,123,119,239,125,222,
252,235,157,206,166,82,75,68,63,65,181,232,218,225,239,25,94,212,206,194,
188,170,164,145,139,50,200,32,162,98,57,175,152,186,187,193,169,163,19,44,
114,68,102,96,90,84,78,89,1,59,53,47,41,32,57,89,54,12,107,1,
246,240,234,228,83,101,210,204,198,192,136,82,63,167,161,154,148,147,168,19,
122,182,110,173,98,149,87,81,74,199,61,55,49,43,37,31,25,155,48,7,
1,112,130,124,113,119,125,138,210,195,189,36,206,173,187,160,7,148,162,197,
191,124,127,111,236,216,223,44,31,102,68,1,248,7,175,13,156,144,119,246,
7,248,181,193,235,30,42,217,131,157,25,118,205,106,37,137,51,232,113,131,
95,241,38,86,13,26,19,100,19,88,211,76,70,223,199,181,31,38,229,25,
248,13,1,7,49,242,87,230,212,80,61,93,203,105,99,225,55,1,136,6,
11,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,130,242,242,142,
242,242,242,242,242,242,242,242,242,242,242,242,242,166,70,242,242,242,242,242,
242,242,242,242,242,242,242,242,179,25,242,242,242,242,242,242,242,242,242,242,
242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,201,208,
214,17,104,220,92,226,80,74,68,62,56,50,44,38,242,242,242,242,242,242,
242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,
242,242,242,13,1,246,239,20,43,242,242,242,242,242,242,242,242,242,242,242,
242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,
242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,
242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,242,
242,242,242,242,242,242,242,242,242, };
static unsigned short stb__courier_10_latin_ext_t[560]={ 1,20,58,20,20,20,51,51,11,11,58,
58,58,61,58,36,36,51,51,28,51,36,36,36,36,36,34,28,58,58,58,
36,36,51,51,28,51,51,51,28,51,51,28,51,51,51,51,36,51,11,51,
28,51,28,51,51,51,51,51,1,28,1,58,63,58,58,28,58,28,58,51,
51,51,51,1,51,51,58,58,58,51,51,58,58,28,58,58,58,58,51,58,
1,1,1,58,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,1,20,44,
44,58,44,1,36,58,36,58,58,58,61,36,61,58,44,58,58,58,44,28,
40,58,58,58,58,44,44,44,44,36,36,36,36,36,36,44,11,36,36,36,
36,36,36,36,36,44,36,1,1,1,11,11,58,28,11,11,11,11,28,44,
36,28,36,36,36,36,36,58,44,36,36,36,36,44,44,44,51,36,44,36,
28,28,28,28,58,44,28,28,28,28,11,11,11,28,28,28,28,11,44,11,
28,1,28,1,28,1,28,28,28,44,28,28,28,28,28,28,28,1,51,28,
28,11,11,11,1,1,1,1,1,20,20,51,44,20,44,20,44,20,44,1,
1,20,58,20,1,1,1,11,11,58,20,11,1,11,44,44,44,44,44,36,
20,44,11,44,11,51,51,11,44,11,20,11,11,11,20,44,58,20,44,1,
44,11,44,1,20,1,20,11,44,11,11,11,11,11,11,44,20,11,11,11,
11,11,20,1,20,1,20,1,44,20,20,20,1,20,20,44,20,51,20,51,
51,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,20,44,44,20,
44,44,44,44,44,44,44,44,44,44,44,44,44,20,58,44,44,44,44,44,
44,44,44,44,44,44,44,44,20,58,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,20,20,
20,51,1,20,1,20,1,1,1,1,1,1,1,1,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,1,1,20,20,1,20,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44, };
static unsigned short stb__courier_10_latin_ext_a[560]={ 85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_10_latin_ext_BITMAP_HEIGHT or STB_FONT_courier_10_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_10_latin_ext(stb_fontchar font[STB_FONT_courier_10_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_courier_10_latin_ext_BITMAP_HEIGHT][STB_FONT_courier_10_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_10_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_10_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_10_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_10_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_10_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_10_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_10_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__courier_10_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__courier_10_latin_ext_s[i] + stb__courier_10_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__courier_10_latin_ext_t[i] + stb__courier_10_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__courier_10_latin_ext_x[i];
            font[i].y0 = stb__courier_10_latin_ext_y[i];
            font[i].x1 = stb__courier_10_latin_ext_x[i] + stb__courier_10_latin_ext_w[i];
            font[i].y1 = stb__courier_10_latin_ext_y[i] + stb__courier_10_latin_ext_h[i];
            font[i].advance_int = (stb__courier_10_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__courier_10_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_10_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_10_latin_ext_s[i] + stb__courier_10_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_10_latin_ext_t[i] + stb__courier_10_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_10_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__courier_10_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__courier_10_latin_ext_x[i] + stb__courier_10_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__courier_10_latin_ext_y[i] + stb__courier_10_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__courier_10_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_10_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_10_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_10_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_10_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_10_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_10_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_10_latin_ext_LINE_SPACING
#endif

