// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_6_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_6_latin1'.
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

#define STB_FONT_times_6_latin1_BITMAP_WIDTH         256
#define STB_FONT_times_6_latin1_BITMAP_HEIGHT         22
#define STB_FONT_times_6_latin1_BITMAP_HEIGHT_POW2    32

#define STB_FONT_times_6_latin1_FIRST_CHAR            32
#define STB_FONT_times_6_latin1_NUM_CHARS            224

#define STB_FONT_times_6_latin1_LINE_SPACING           4

static unsigned int stb__times_6_latin1_pixels[]={
    0x44182831,0xa8110620,0x0198130a,0x0660440c,0x8330c433,0x02220c19,
    0x33062081,0x084cc104,0x83062181,0x43050621,0x4188a218,0x2830a0c1,
    0x426188a2,0x31986608,0x0260c221,0x18181815,0x4c088262,0x54118cc1,
    0x188a8462,0xf0c45451,0x8622a147,0x30660cc2,0x33141983,0x2230c51c,
    0x22a28a09,0x82311518,0x23108472,0x21882a18,0x0c42e218,0x88623115,
    0x26188621,0x86211308,0x21886218,0x30c45109,0x1984c663,0x50cd4335,
    0x310cd433,0x881304d4,0x20998440,0x8a13328b,0x218a1331,0x42730a29,
    0x9ca2709a,0x89ca2728,0x49289ca2,0x0a8998a3,0x4518a382,0x9c107181,
    0x21a8aa1a,0x0d4a2a39,0x730d4371,0x2a5151cc,0x22a31518,0x4a2a5152,
    0x31cc328a,0x130984c7,0x15045426,0x11504541,0x4c5151cc,0x38a614c2,
    0x31470c5c,0x430628e2,0x3a85c442,0x239c738e,0x38e51c73,0x51141333,
    0x14514133,0x994118a3,0x85528209,0x2a3b8aa2,0x21a85519,0x23b8ee2a,
    0x2a55519a,0x26a3352a,0x466a3351,0x263b8ee0,0x84c26130,0xa866a19a,
    0x3b866a19,0x544a866e,0x1c09a544,0x109a9826,0x8604d4c3,0x408cca0a,
    0x13330999,0x4ccc2666,0x82666510,0x8c4510b8,0x53088608,0x0426a613,
    0x002104c3,0x03500000,0x00000000,0x546a0000,0x4d46a351,0x19a866a1,
    0x3280066a,0x53294ca5,0x00008101,0x00000000,0x20000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x04419800,0x21098606,0x15185421,0x84c26231,0x310c04c0,0x10822084,
    0x85109883,0x0c30220b,0x20886e61,0x85114c08,0x4131188a,0x43104109,
    0x19866218,0x135050c4,0x2a133046,0x42620328,0x4c230889,0x3100c308,
    0x2184c28a,0x0260cc42,0x04408811,0x0c609882,0x718a1151,0x4dc0d543,
    0x844c2261,0x84466652,0x431cca32,0x542aa229,0x44220c61,0x5c135099,
    0x42730e28,0x1041318a,0x2e15129c,0x4c4a2709,0x4c2386a1,0x39984709,
    0x2a1351c3,0x2a1330a9,0xa820c318,0x21845451,0x08b986a1,0x4c298c35,
    0x888314c2,0x5c313128,0x442e18a1,0x15730a88,0x718a8c54,0x7042aa73,
    0x82e38dca,0x2e155109,0x0c511128,0x705cc251,0x2e221c31,0x08aa3570,
    0x7061a986,0x431538e5,0x471c5253,0x14175703,0x8e1d4175,0x531452aa,
    0x45514a63,0x7718a8a2,0x22540615,0x8372544a,0x98622288,0x4cc26a61,
    0x4dc6a261,0x554aaa2c,0x98208852,0x26135509,0x09a88661,0x3144c313,
    0x18984cc4,0x3328530e,0x420ba8c4,0x4543060a,0x2ae13332,0x4ccc22a2,
    0x204cc132,0x3350a873,0x4471c000,0x42ee3809,0x2029b8e3,0x294ca60a,
    0x0114ca53,0x02000220,0x00000000,0x00000000,0x40000800,0x00000000,
    0x00002000,0x00000010,0x40000000,0x00000001,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x8620a862,
    0x9806229a,0x22144311,0x8e661310,0x3153188a,0x426a20ca,0x8826a608,
    0x2a1866a0,0x54335019,0x1502a330,0x098a6a15,0x866a3315,0x4418619a,
    0x4300a200,0x42621899,0x26083319,0x422130c0,0x22218098,0x44662310,
    0x21302219,0x22088319,0xa94d4350,0x1cce22a0,0x28a86335,0x8a855433,
    0x41b88a62,0x0e60661c,0x5401c333,0x208e5048,0x85ce608a,0x2504d40a,
    0x8c4a1338,0x38845472,0x21988a60,0x51413309,0xb8e38551,0x8e235318,
    0x98446209,0xa886110b,0x10662330,0x003504cc,0x54550111,0x38dc5548,
    0x54518c77,0x22631719,0x541c3370,0x83951cc1,0x070661ca,0x350c3750,
    0x0cd46a61,0x02a15371,0x26714175,0x26a35350,0x32a1550b,0x0664a830,
    0x8b8a1983,0x71c26e3a,0x21530453,0x02098210,0x00000004,0x015c0000,
    0x26201337,0x014dc070,0x50d429c8,0x25122371,0x1112019c,0x202e2e11,
    0x4335040b,0x5571ab8a,0x99b8e45c,0x4a62e350,0x28170b9b,0x51853282,
    0x000e0215,0x00000000,0x11986300,0x00ccc6a3,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x35198200,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__times_6_latin1_x[224]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,-1,0,0,0,0,0,0,0,
-1,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
 };
static signed short stb__times_6_latin1_y[224]={ 4,0,0,0,0,0,0,0,0,0,0,0,3,2,
3,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,1,0,1,0,1,0,1,0,0,
0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,2,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,1,0,0,0,0,
0,0,0,0,0,1,1,2,0,-1,0,0,0,0,0,1,0,1,3,0,0,1,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
 };
static unsigned short stb__times_6_latin1_w[224]={ 0,2,2,3,3,5,5,1,2,2,3,3,2,2,
1,2,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,5,4,4,4,4,4,3,4,4,2,3,4,
4,5,5,4,3,4,4,3,4,4,4,6,4,4,4,2,2,2,3,4,2,3,4,3,3,3,3,3,3,2,
3,3,2,5,3,3,4,3,2,2,2,3,3,4,3,3,3,3,1,2,3,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,2,3,3,3,3,
1,3,2,4,3,3,3,2,4,4,2,3,2,2,2,3,4,1,2,2,2,3,4,4,4,3,4,4,4,4,
4,4,6,4,4,4,4,4,2,2,2,2,4,5,4,4,4,4,4,3,4,4,4,4,4,4,3,3,3,3,
3,3,3,3,4,3,3,3,3,3,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,3,
 };
static unsigned short stb__times_6_latin1_h[224]={ 0,5,2,5,5,5,5,2,6,6,3,4,2,1,
2,5,5,4,4,5,4,5,5,5,5,5,4,4,4,2,4,5,6,4,4,5,4,4,4,5,4,4,5,4,
4,4,5,5,4,6,4,5,4,5,5,5,4,4,4,6,5,6,3,2,2,4,5,4,5,4,4,5,4,4,
6,4,4,3,3,4,5,5,3,4,5,4,4,4,3,5,3,6,6,6,1,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,5,6,5,4,4,
6,6,2,5,2,4,2,1,5,2,2,4,3,3,2,5,6,2,3,3,2,4,5,5,5,5,5,5,5,5,
5,5,4,6,5,5,5,5,5,5,5,5,4,6,6,6,6,6,6,3,5,6,6,6,6,5,4,5,5,5,
5,5,5,5,4,5,5,5,5,5,4,4,4,4,5,4,5,5,5,5,5,3,4,5,5,5,5,6,6,6,
 };
static unsigned short stb__times_6_latin1_s[224]={ 121,190,226,68,40,44,50,254,93,118,207,
97,223,232,221,72,75,168,160,84,144,88,97,106,115,148,90,148,156,224,164,
152,83,151,135,183,122,101,140,174,130,127,124,117,112,106,128,160,93,74,85,
156,75,35,30,188,55,50,45,33,142,66,197,232,244,18,169,9,165,1,250,
198,241,238,79,231,228,172,185,29,119,134,182,225,195,211,207,202,193,179,178,
89,116,108,235,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,
80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80,121,145,42,
138,22,60,106,19,241,110,237,37,228,232,92,247,221,221,204,201,252,64,28,
254,211,214,229,71,101,25,20,16,11,6,1,251,246,241,64,111,228,223,218,
213,210,207,204,201,13,36,46,51,56,61,69,217,79,23,14,96,101,145,5,
237,233,133,158,154,197,193,245,125,121,129,141,150,218,215,235,26,137,33,162,
174,178,182,186,189,41,166,56,170,60,10,5,1, };
static unsigned short stb__times_6_latin1_t[224]={ 7,1,17,8,8,8,8,11,1,1,14,
14,17,17,17,8,8,14,14,8,14,8,8,8,8,8,14,14,14,14,14,
8,1,14,14,8,14,14,14,8,14,14,8,14,14,14,8,8,14,1,14,
8,14,8,8,8,14,14,14,1,8,1,14,14,14,14,8,14,8,14,8,
8,8,8,1,8,8,14,14,14,8,8,14,8,8,8,8,8,14,8,14,
1,1,1,17,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,7,8,1,
8,14,14,1,1,14,8,14,14,14,17,8,14,14,8,14,14,14,8,1,
8,14,14,17,14,8,8,8,8,8,8,8,1,1,1,14,1,1,1,1,
1,1,1,1,1,14,1,1,1,1,1,1,14,8,1,1,1,1,1,14,
1,1,1,1,1,1,1,8,1,1,1,1,1,8,8,8,14,1,14,1,
1,1,1,1,14,14,1,8,1,8,1,1,1, };
static unsigned short stb__times_6_latin1_a[224]={ 22,29,35,43,43,72,67,16,
29,29,43,49,22,29,22,24,43,43,43,43,43,43,43,43,
43,43,24,24,49,49,49,38,80,63,58,58,63,53,48,63,
63,29,34,63,53,77,63,63,48,63,58,48,53,63,63,82,
63,63,53,29,24,29,41,43,29,38,43,38,43,38,29,43,
43,24,24,43,24,67,43,43,43,43,29,34,24,43,43,63,
43,43,38,42,17,42,47,67,67,67,67,67,67,67,67,67,
67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,
67,67,67,67,67,67,67,67,22,29,43,43,43,43,17,43,
29,66,24,43,49,29,66,43,35,48,26,26,29,50,39,22,
29,26,27,43,65,65,65,38,63,63,63,63,63,63,77,58,
53,53,53,53,29,29,29,29,63,63,63,63,63,63,63,49,
63,63,63,63,63,63,48,43,38,38,38,38,38,38,58,38,
38,38,38,38,24,24,24,24,43,43,43,43,43,43,43,48,
43,43,43,43,43,43,43,43, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_6_latin1_BITMAP_HEIGHT or STB_FONT_times_6_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_6_latin1(stb_fontchar font[STB_FONT_times_6_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_times_6_latin1_BITMAP_HEIGHT][STB_FONT_times_6_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_6_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_6_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_6_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_6_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_6_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_6_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_6_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__times_6_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__times_6_latin1_s[i] + stb__times_6_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__times_6_latin1_t[i] + stb__times_6_latin1_h[i]) * recip_height;
            font[i].x0 = stb__times_6_latin1_x[i];
            font[i].y0 = stb__times_6_latin1_y[i];
            font[i].x1 = stb__times_6_latin1_x[i] + stb__times_6_latin1_w[i];
            font[i].y1 = stb__times_6_latin1_y[i] + stb__times_6_latin1_h[i];
            font[i].advance_int = (stb__times_6_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__times_6_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_6_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_6_latin1_s[i] + stb__times_6_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_6_latin1_t[i] + stb__times_6_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_6_latin1_x[i] - 0.5f;
            font[i].y0f = stb__times_6_latin1_y[i] - 0.5f;
            font[i].x1f = stb__times_6_latin1_x[i] + stb__times_6_latin1_w[i] + 0.5f;
            font[i].y1f = stb__times_6_latin1_y[i] + stb__times_6_latin1_h[i] + 0.5f;
            font[i].advance = stb__times_6_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_6_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_6_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_6_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_6_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_6_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_6_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_6_latin1_LINE_SPACING
#endif

