#include "../globals.h"

/** MSX default font */
const Font font_msx = {
    "msx", "MSX", {
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x3c,0x42,0xa5,0x81,0xa5,0x99,0x42,0x3c,
        0x3c,0x7e,0xdb,0xff,0xff,0xdb,0x66,0x3c, 0x6c,0xfe,0xfe,0xfe,0x7c,0x38,0x10,0x00,
        0x10,0x38,0x7c,0xfe,0x7c,0x38,0x10,0x00, 0x10,0x38,0x54,0xfe,0x54,0x10,0x38,0x00,
        0x10,0x38,0x7c,0xfe,0xfe,0x10,0x38,0x00, 0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,
        0xff,0xff,0xff,0xe7,0xe7,0xff,0xff,0xff, 0x38,0x44,0x82,0x82,0x82,0x44,0x38,0x00,
        0xc7,0xbb,0x7d,0x7d,0x7d,0xbb,0xc7,0xff, 0x0f,0x03,0x05,0x79,0x88,0x88,0x88,0x70,
        0x38,0x44,0x44,0x44,0x38,0x10,0x7c,0x10, 0x30,0x28,0x24,0x24,0x28,0x20,0xe0,0xc0,
        0x3c,0x24,0x3c,0x24,0x24,0xe4,0xdc,0x18, 0x10,0x54,0x38,0xee,0x38,0x54,0x10,0x00,
        0x10,0x10,0x10,0x7c,0x10,0x10,0x10,0x10, 0x10,0x10,0x10,0xff,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0xff,0x10,0x10,0x10,0x10, 0x10,0x10,0x10,0xf0,0x10,0x10,0x10,0x10,
        0x10,0x10,0x10,0x1f,0x10,0x10,0x10,0x10, 0x10,0x10,0x10,0xff,0x10,0x10,0x10,0x10,
        0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10, 0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x1f,0x10,0x10,0x10,0x10, 0x00,0x00,0x00,0xf0,0x10,0x10,0x10,0x10,
        0x10,0x10,0x10,0x1f,0x00,0x00,0x00,0x00, 0x10,0x10,0x10,0xf0,0x00,0x00,0x00,0x00,
        0x81,0x42,0x24,0x18,0x18,0x24,0x42,0x81, 0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,
        0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01, 0x00,0x10,0x10,0xff,0x10,0x10,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x20,0x20,0x20,0x20,0x00,0x00,0x20,0x00,
        0x50,0x50,0x50,0x00,0x00,0x00,0x00,0x00, 0x50,0x50,0xf8,0x50,0xf8,0x50,0x50,0x00,
        0x20,0x78,0xa0,0x70,0x28,0xf0,0x20,0x00, 0xc0,0xc8,0x10,0x20,0x40,0x98,0x18,0x00,
        0x40,0xa0,0x40,0xa8,0x90,0x98,0x60,0x00, 0x10,0x20,0x40,0x00,0x00,0x00,0x00,0x00,
        0x10,0x20,0x40,0x40,0x40,0x20,0x10,0x00, 0x40,0x20,0x10,0x10,0x10,0x20,0x40,0x00,
        0x20,0xa8,0x70,0x20,0x70,0xa8,0x20,0x00, 0x00,0x20,0x20,0xf8,0x20,0x20,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x40, 0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00, 0x00,0x00,0x08,0x10,0x20,0x40,0x80,0x00,
        0x70,0x88,0x98,0xa8,0xc8,0x88,0x70,0x00, 0x20,0x60,0xa0,0x20,0x20,0x20,0xf8,0x00,
        0x70,0x88,0x08,0x10,0x60,0x80,0xf8,0x00, 0x70,0x88,0x08,0x30,0x08,0x88,0x70,0x00,
        0x10,0x30,0x50,0x90,0xf8,0x10,0x10,0x00, 0xf8,0x80,0xe0,0x10,0x08,0x10,0xe0,0x00,
        0x30,0x40,0x80,0xf0,0x88,0x88,0x70,0x00, 0xf8,0x88,0x10,0x20,0x20,0x20,0x20,0x00,
        0x70,0x88,0x88,0x70,0x88,0x88,0x70,0x00, 0x70,0x88,0x88,0x78,0x08,0x10,0x60,0x00,
        0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00, 0x00,0x00,0x20,0x00,0x00,0x20,0x20,0x40,
        0x18,0x30,0x60,0xc0,0x60,0x30,0x18,0x00, 0x00,0x00,0xf8,0x00,0xf8,0x00,0x00,0x00,
        0xc0,0x60,0x30,0x18,0x30,0x60,0xc0,0x00, 0x70,0x88,0x08,0x10,0x20,0x00,0x20,0x00,
        0x70,0x88,0x08,0x68,0xa8,0xa8,0x70,0x00, 0x20,0x50,0x88,0x88,0xf8,0x88,0x88,0x00,
        0xf0,0x48,0x48,0x70,0x48,0x48,0xf0,0x00, 0x30,0x48,0x80,0x80,0x80,0x48,0x30,0x00,
        0xe0,0x50,0x48,0x48,0x48,0x50,0xe0,0x00, 0xf8,0x80,0x80,0xf0,0x80,0x80,0xf8,0x00,
        0xf8,0x80,0x80,0xf0,0x80,0x80,0x80,0x00, 0x70,0x88,0x80,0xb8,0x88,0x88,0x70,0x00,
        0x88,0x88,0x88,0xf8,0x88,0x88,0x88,0x00, 0x70,0x20,0x20,0x20,0x20,0x20,0x70,0x00,
        0x38,0x10,0x10,0x10,0x90,0x90,0x60,0x00, 0x88,0x90,0xa0,0xc0,0xa0,0x90,0x88,0x00,
        0x80,0x80,0x80,0x80,0x80,0x80,0xf8,0x00, 0x88,0xd8,0xa8,0xa8,0x88,0x88,0x88,0x00,
        0x88,0xc8,0xc8,0xa8,0x98,0x98,0x88,0x00, 0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x00,
        0xf0,0x88,0x88,0xf0,0x80,0x80,0x80,0x00, 0x70,0x88,0x88,0x88,0xa8,0x90,0x68,0x00,
        0xf0,0x88,0x88,0xf0,0xa0,0x90,0x88,0x00, 0x70,0x88,0x80,0x70,0x08,0x88,0x70,0x00,
        0xf8,0x20,0x20,0x20,0x20,0x20,0x20,0x00, 0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,
        0x88,0x88,0x88,0x88,0x50,0x50,0x20,0x00, 0x88,0x88,0x88,0xa8,0xa8,0xd8,0x88,0x00,
        0x88,0x88,0x50,0x20,0x50,0x88,0x88,0x00, 0x88,0x88,0x88,0x70,0x20,0x20,0x20,0x00,
        0xf8,0x08,0x10,0x20,0x40,0x80,0xf8,0x00, 0x70,0x40,0x40,0x40,0x40,0x40,0x70,0x00,
        0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00, 0x70,0x10,0x10,0x10,0x10,0x10,0x70,0x00,
        0x20,0x50,0x88,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x00,
        0x40,0x20,0x10,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x70,0x08,0x78,0x88,0x78,0x00,
        0x80,0x80,0xb0,0xc8,0x88,0xc8,0xb0,0x00, 0x00,0x00,0x70,0x88,0x80,0x88,0x70,0x00,
        0x08,0x08,0x68,0x98,0x88,0x98,0x68,0x00, 0x00,0x00,0x70,0x88,0xf8,0x80,0x70,0x00,
        0x10,0x28,0x20,0xf8,0x20,0x20,0x20,0x00, 0x00,0x00,0x68,0x98,0x98,0x68,0x08,0x70,
        0x80,0x80,0xf0,0x88,0x88,0x88,0x88,0x00, 0x20,0x00,0x60,0x20,0x20,0x20,0x70,0x00,
        0x10,0x00,0x30,0x10,0x10,0x10,0x90,0x60, 0x40,0x40,0x48,0x50,0x60,0x50,0x48,0x00,
        0x60,0x20,0x20,0x20,0x20,0x20,0x70,0x00, 0x00,0x00,0xd0,0xa8,0xa8,0xa8,0xa8,0x00,
        0x00,0x00,0xb0,0xc8,0x88,0x88,0x88,0x00, 0x00,0x00,0x70,0x88,0x88,0x88,0x70,0x00,
        0x00,0x00,0xb0,0xc8,0xc8,0xb0,0x80,0x80, 0x00,0x00,0x68,0x98,0x98,0x68,0x08,0x08,
        0x00,0x00,0xb0,0xc8,0x80,0x80,0x80,0x00, 0x00,0x00,0x78,0x80,0xf0,0x08,0xf0,0x00,
        0x40,0x40,0xf0,0x40,0x40,0x48,0x30,0x00, 0x00,0x00,0x90,0x90,0x90,0x90,0x68,0x00,
        0x00,0x00,0x88,0x88,0x88,0x50,0x20,0x00, 0x00,0x00,0x88,0xa8,0xa8,0xa8,0x50,0x00,
        0x00,0x00,0x88,0x50,0x20,0x50,0x88,0x00, 0x00,0x00,0x88,0x88,0x98,0x68,0x08,0x70,
        0x00,0x00,0xf8,0x10,0x20,0x40,0xf8,0x00, 0x18,0x20,0x20,0x40,0x20,0x20,0x18,0x00,
        0x20,0x20,0x20,0x00,0x20,0x20,0x20,0x00, 0xc0,0x20,0x20,0x10,0x20,0x20,0xc0,0x00,
        0x40,0xa8,0x10,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x20,0x50,0xf8,0x00,0x00,0x00,
        0x70,0x88,0x80,0x80,0x88,0x70,0x20,0x60, 0x90,0x00,0x00,0x90,0x90,0x90,0x68,0x00,
        0x10,0x20,0x70,0x88,0xf8,0x80,0x70,0x00, 0x20,0x50,0x70,0x08,0x78,0x88,0x78,0x00,
        0x48,0x00,0x70,0x08,0x78,0x88,0x78,0x00, 0x20,0x10,0x70,0x08,0x78,0x88,0x78,0x00,
        0x20,0x00,0x70,0x08,0x78,0x88,0x78,0x00, 0x00,0x70,0x80,0x80,0x80,0x70,0x10,0x60,
        0x20,0x50,0x70,0x88,0xf8,0x80,0x70,0x00, 0x50,0x00,0x70,0x88,0xf8,0x80,0x70,0x00,
        0x20,0x10,0x70,0x88,0xf8,0x80,0x70,0x00, 0x50,0x00,0x00,0x60,0x20,0x20,0x70,0x00,
        0x20,0x50,0x00,0x60,0x20,0x20,0x70,0x00, 0x40,0x20,0x00,0x60,0x20,0x20,0x70,0x00,
        0x50,0x00,0x20,0x50,0x88,0xf8,0x88,0x00, 0x20,0x00,0x20,0x50,0x88,0xf8,0x88,0x00,
        0x10,0x20,0xf8,0x80,0xf0,0x80,0xf8,0x00, 0x00,0x00,0x6c,0x12,0x7e,0x90,0x6e,0x00,
        0x3e,0x50,0x90,0x9c,0xf0,0x90,0x9e,0x00, 0x60,0x90,0x00,0x60,0x90,0x90,0x60,0x00,
        0x90,0x00,0x00,0x60,0x90,0x90,0x60,0x00, 0x40,0x20,0x00,0x60,0x90,0x90,0x60,0x00,
        0x40,0xa0,0x00,0xa0,0xa0,0xa0,0x50,0x00, 0x40,0x20,0x00,0xa0,0xa0,0xa0,0x50,0x00,
        0x90,0x00,0x90,0x90,0xb0,0x50,0x10,0xe0, 0x50,0x00,0x70,0x88,0x88,0x88,0x70,0x00,
        0x50,0x00,0x88,0x88,0x88,0x88,0x70,0x00, 0x20,0x20,0x78,0x80,0x80,0x78,0x20,0x20,
        0x18,0x24,0x20,0xf8,0x20,0xe2,0x5c,0x00, 0x88,0x50,0x20,0xf8,0x20,0xf8,0x20,0x00,
        0xc0,0xa0,0xa0,0xc8,0x9c,0x88,0x88,0x8c, 0x18,0x20,0x20,0xf8,0x20,0x20,0x20,0x40,
        0x10,0x20,0x70,0x08,0x78,0x88,0x78,0x00, 0x10,0x20,0x00,0x60,0x20,0x20,0x70,0x00,
        0x20,0x40,0x00,0x60,0x90,0x90,0x60,0x00, 0x20,0x40,0x00,0x90,0x90,0x90,0x68,0x00,
        0x50,0xa0,0x00,0xa0,0xd0,0x90,0x90,0x00, 0x28,0x50,0x00,0xc8,0xa8,0x98,0x88,0x00,
        0x00,0x70,0x08,0x78,0x88,0x78,0x00,0xf8, 0x00,0x60,0x90,0x90,0x90,0x60,0x00,0xf0,
        0x20,0x00,0x20,0x40,0x80,0x88,0x70,0x00, 0x00,0x00,0x00,0xf8,0x80,0x80,0x00,0x00,
        0x00,0x00,0x00,0xf8,0x08,0x08,0x00,0x00, 0x84,0x88,0x90,0xa8,0x54,0x84,0x08,0x1c,
        0x84,0x88,0x90,0xa8,0x58,0xa8,0x3c,0x08, 0x20,0x00,0x00,0x20,0x20,0x20,0x20,0x00,
        0x00,0x00,0x24,0x48,0x90,0x48,0x24,0x00, 0x00,0x00,0x90,0x48,0x24,0x48,0x90,0x00,
        0x28,0x50,0x20,0x50,0x88,0xf8,0x88,0x00, 0x28,0x50,0x70,0x08,0x78,0x88,0x78,0x00,
        0x28,0x50,0x00,0x70,0x20,0x20,0x70,0x00, 0x28,0x50,0x00,0x20,0x20,0x20,0x70,0x00,
        0x28,0x50,0x00,0x70,0x88,0x88,0x70,0x00, 0x50,0xa0,0x00,0x60,0x90,0x90,0x60,0x00,
        0x28,0x50,0x00,0x88,0x88,0x88,0x70,0x00, 0x50,0xa0,0x00,0xa0,0xa0,0xa0,0x50,0x00,
        0xfc,0x48,0x48,0x48,0xe8,0x08,0x50,0x20, 0x00,0x50,0x00,0x50,0x50,0x50,0x10,0x20,
        0xc0,0x44,0xc8,0x54,0xec,0x54,0x9e,0x04, 0x10,0xa8,0x40,0x00,0x00,0x00,0x00,0x00,
        0x00,0x20,0x50,0x88,0x50,0x20,0x00,0x00, 0x88,0x10,0x20,0x40,0x80,0x28,0x00,0x00,
        0x7c,0xa8,0xa8,0x68,0x28,0x28,0x28,0x00, 0x38,0x40,0x30,0x48,0x48,0x30,0x08,0x70,
        0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff, 0xf0,0xf0,0xf0,0xf0,0x0f,0x0f,0x0f,0x0f,
        0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff, 0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x3c,0x3c,0x00,0x00,0x00, 0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,
        0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0, 0x0f,0x0f,0x0f,0x0f,0xf0,0xf0,0xf0,0xf0,
        0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc, 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
        0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f, 0x11,0x22,0x44,0x88,0x11,0x22,0x44,0x88,
        0x88,0x44,0x22,0x11,0x88,0x44,0x22,0x11, 0xfe,0x7c,0x38,0x10,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x10,0x38,0x7c,0xfe, 0x80,0xc0,0xe0,0xf0,0xe0,0xc0,0x80,0x00,
        0x01,0x03,0x07,0x0f,0x07,0x03,0x01,0x00, 0xff,0x7e,0x3c,0x18,0x18,0x3c,0x7e,0xff,
        0x81,0xc3,0xe7,0xff,0xff,0xe7,0xc3,0x81, 0xf0,0xf0,0xf0,0xf0,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x0f,0x0f,0x0f,0x0f, 0x0f,0x0f,0x0f,0x0f,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0xf0,0xf0,0xf0,0xf0, 0x33,0x33,0xcc,0xcc,0x33,0x33,0xcc,0xcc,
        0x00,0x20,0x20,0x50,0x50,0x88,0xf8,0x00, 0x20,0x20,0x70,0x20,0x70,0x20,0x20,0x00,
        0x00,0x00,0x00,0x50,0x88,0xa8,0x50,0x00, 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
        0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff, 0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,
        0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f, 0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
        0x00,0x00,0x68,0x90,0x90,0x90,0x68,0x00, 0x30,0x48,0x48,0x70,0x48,0x48,0x70,0xc0,
        0xf8,0x88,0x80,0x80,0x80,0x80,0x80,0x00, 0xf8,0x50,0x50,0x50,0x50,0x50,0x98,0x00,
        0xf8,0x88,0x40,0x20,0x40,0x88,0xf8,0x00, 0x00,0x00,0x78,0x90,0x90,0x90,0x60,0x00,
        0x00,0x50,0x50,0x50,0x50,0x68,0x80,0x80, 0x00,0x50,0xa0,0x20,0x20,0x20,0x20,0x00,
        0xf8,0x20,0x70,0xa8,0xa8,0x70,0x20,0xf8, 0x20,0x50,0x88,0xf8,0x88,0x50,0x20,0x00,
        0x70,0x88,0x88,0x88,0x50,0x50,0xd8,0x00, 0x30,0x40,0x40,0x20,0x50,0x50,0x50,0x20,
        0x00,0x00,0x00,0x50,0xa8,0xa8,0x50,0x00, 0x08,0x70,0xa8,0xa8,0xa8,0x70,0x80,0x00,
        0x38,0x40,0x80,0xf8,0x80,0x40,0x38,0x00, 0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x00,
        0x00,0xf8,0x00,0xf8,0x00,0xf8,0x00,0x00, 0x20,0x20,0xf8,0x20,0x20,0x00,0xf8,0x00,
        0xc0,0x30,0x08,0x30,0xc0,0x00,0xf8,0x00, 0x18,0x60,0x80,0x60,0x18,0x00,0xf8,0x00,
        0x10,0x28,0x20,0x20,0x20,0x20,0x20,0x20, 0x20,0x20,0x20,0x20,0x20,0x20,0xa0,0x40,
        0x00,0x20,0x00,0xf8,0x00,0x20,0x00,0x00, 0x00,0x50,0xa0,0x00,0x50,0xa0,0x00,0x00,
        0x00,0x18,0x24,0x24,0x18,0x00,0x00,0x00, 0x00,0x30,0x78,0x78,0x30,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00, 0x3e,0x20,0x20,0x20,0xa0,0x60,0x20,0x00,
        0xa0,0x50,0x50,0x50,0x00,0x00,0x00,0x00, 0x40,0xa0,0x20,0x40,0xe0,0x00,0x00,0x00,
        0x00,0x38,0x38,0x38,0x38,0x38,0x38,0x00, 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
    }
};
