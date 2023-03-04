unsigned char global_palette[302] =
{
    0x00, 0x00, /*   0: rgb(  0,   0,   0) */
    0xff, 0xff, /*   1: rgb(255, 255, 255) */
    0x10, 0x7c, /*   2: rgb(255,   0, 132) */
    0x00, 0x84, /*   3: rgb(  8,   4,   0) */
    0x01, 0x84, /*   4: rgb(  8,   4,   8) */
    0x20, 0x04, /*   5: rgb(  8,   8,   0) */
    0x21, 0x04, /*   6: rgb(  8,   8,   8) */
    0x21, 0x84, /*   7: rgb(  8,  12,   8) */
    0x20, 0x08, /*   8: rgb( 16,   8,   0) */
    0x20, 0x88, /*   9: rgb( 16,  12,   0) */
    0x40, 0x08, /*  10: rgb( 16,  16,   0) */
    0x42, 0x88, /*  11: rgb( 16,  20,  16) */
    0x42, 0x0c, /*  12: rgb( 25,  16,  16) */
    0x42, 0x8c, /*  13: rgb( 25,  20,  16) */
    0x43, 0x8c, /*  14: rgb( 25,  20,  25) */
    0x63, 0x0c, /*  15: rgb( 25,  24,  25) */
    0xa7, 0x8c, /*  16: rgb( 25,  45,  58) */
    0x60, 0x10, /*  17: rgb( 33,  24,   0) */
    0x60, 0x90, /*  18: rgb( 33,  28,   0) */
    0x64, 0x90, /*  19: rgb( 33,  28,  33) */
    0x84, 0x10, /*  20: rgb( 33,  32,  33) */
    0x84, 0x90, /*  21: rgb( 33,  36,  33) */
    0x80, 0x14, /*  22: rgb( 41,  32,   0) */
    0x85, 0x94, /*  23: rgb( 41,  36,  41) */
    0xa5, 0x14, /*  24: rgb( 41,  40,  41) */
    0xa5, 0x94, /*  25: rgb( 41,  45,  41) */
    0xa4, 0x98, /*  26: rgb( 49,  45,  33) */
    0xa6, 0x98, /*  27: rgb( 49,  45,  49) */
    0xc5, 0x18, /*  28: rgb( 49,  49,  41) */
    0xc6, 0x18, /*  29: rgb( 49,  49,  49) */
    0xc6, 0x98, /*  30: rgb( 49,  53,  49) */
    0x0a, 0x99, /*  31: rgb( 49,  69,  82) */
    0xc7, 0x9c, /*  32: rgb( 58,  53,  58) */
    0xb3, 0x9d, /*  33: rgb( 58, 109, 156) */
    0xd2, 0x1d, /*  34: rgb( 58, 113, 148) */
    0xc1, 0xa0, /*  35: rgb( 66,  53,   8) */
    0xe2, 0xa0, /*  36: rgb( 66,  61,  16) */
    0xd2, 0xa1, /*  37: rgb( 66, 117, 148) */
    0xe0, 0x24, /*  38: rgb( 74,  57,   0) */
    0xe0, 0xa4, /*  39: rgb( 74,  61,   0) */
    0xe1, 0xa4, /*  40: rgb( 74,  61,   8) */
    0xe2, 0xa4, /*  41: rgb( 74,  61,  16) */
    0x01, 0x25, /*  42: rgb( 74,  65,   8) */
    0x02, 0x25, /*  43: rgb( 74,  65,  16) */
    0x03, 0x25, /*  44: rgb( 74,  65,  25) */
    0x28, 0x25, /*  45: rgb( 74,  73,  66) */
    0x29, 0x25, /*  46: rgb( 74,  73,  74) */
    0x8d, 0x25, /*  47: rgb( 74,  97, 107) */
    0x8e, 0x25, /*  48: rgb( 74,  97, 115) */
    0x00, 0x29, /*  49: rgb( 82,  65,   0) */
    0x00, 0xa9, /*  50: rgb( 82,  69,   0) */
    0x01, 0xa9, /*  51: rgb( 82,  69,   8) */
    0x20, 0x29, /*  52: rgb( 82,  73,   0) */
    0x2a, 0xa9, /*  53: rgb( 82,  77,  82) */
    0x4a, 0x29, /*  54: rgb( 82,  81,  82) */
    0x49, 0xa9, /*  55: rgb( 82,  85,  74) */
    0x8d, 0x29, /*  56: rgb( 82,  97, 107) */
    0x20, 0x2d, /*  57: rgb( 90,  73,   0) */
    0x21, 0xad, /*  58: rgb( 90,  77,   8) */
    0x34, 0x2e, /*  59: rgb( 90, 138, 165) */
    0xe9, 0xb0, /*  60: rgb( 99,  61,  74) */
    0x20, 0xb1, /*  61: rgb( 99,  77,   0) */
    0x40, 0x31, /*  62: rgb( 99,  81,   0) */
    0x40, 0xb1, /*  63: rgb( 99,  85,   0) */
    0x83, 0xb1, /*  64: rgb( 99, 101,  25) */
    0x40, 0xb5, /*  65: rgb(107,  85,   0) */
    0x60, 0x35, /*  66: rgb(107,  89,   0) */
    0x60, 0xb9, /*  67: rgb(115,  93,   0) */
    0x61, 0xb9, /*  68: rgb(115,  93,   8) */
    0x84, 0xb9, /*  69: rgb(115, 101,  33) */
    0xc8, 0x39, /*  70: rgb(115, 113,  66) */
    0xce, 0xb9, /*  71: rgb(115, 117, 115) */
    0xa0, 0x3d, /*  72: rgb(123, 105,   0) */
    0xe3, 0x3d, /*  73: rgb(123, 121,  25) */
    0xe5, 0x3d, /*  74: rgb(123, 121,  41) */
    0xef, 0x3d, /*  75: rgb(123, 121, 123) */
    0xa0, 0xc1, /*  76: rgb(132, 109,   0) */
    0x07, 0xc2, /*  77: rgb(132, 134,  58) */
    0x8e, 0x42, /*  78: rgb(132, 162, 115) */
    0x07, 0xc6, /*  79: rgb(140, 134,  58) */
    0x6b, 0x46, /*  80: rgb(140, 154,  90) */
    0xe0, 0x49, /*  81: rgb(148, 121,   0) */
    0xe0, 0xc9, /*  82: rgb(148, 125,   0) */
    0xe2, 0xc9, /*  83: rgb(148, 125,  16) */
    0x48, 0xca, /*  84: rgb(148, 150,  66) */
    0x00, 0x4e, /*  85: rgb(156, 130,   0) */
    0x21, 0x52, /*  86: rgb(165, 138,   8) */
    0x24, 0xd2, /*  87: rgb(165, 142,  33) */
    0x44, 0x52, /*  88: rgb(165, 146,  33) */
    0x63, 0x52, /*  89: rgb(165, 154,  25) */
    0x66, 0x52, /*  90: rgb(165, 154,  49) */
    0x20, 0x56, /*  91: rgb(173, 138,   0) */
    0x40, 0x5a, /*  92: rgb(181, 146,   0) */
    0x40, 0xda, /*  93: rgb(181, 150,   0) */
    0x60, 0x5a, /*  94: rgb(181, 154,   0) */
    0x82, 0xda, /*  95: rgb(181, 166,  16) */
    0x60, 0xde, /*  96: rgb(189, 158,   0) */
    0x60, 0xe2, /*  97: rgb(197, 158,   0) */
    0x80, 0x62, /*  98: rgb(197, 162,   0) */
    0x80, 0xe2, /*  99: rgb(197, 166,   0) */
    0x80, 0xe6, /* 100: rgb(206, 166,   0) */
    0xa0, 0x66, /* 101: rgb(206, 170,   0) */
    0xa0, 0x6a, /* 102: rgb(214, 170,   0) */
    0xa0, 0xea, /* 103: rgb(214, 174,   0) */
    0xc0, 0x6a, /* 104: rgb(214, 178,   0) */
    0xc1, 0xea, /* 105: rgb(214, 182,   8) */
    0xe1, 0x6a, /* 106: rgb(214, 186,   8) */
    0xe3, 0xea, /* 107: rgb(214, 190,  25) */
    0x03, 0x6b, /* 108: rgb(214, 194,  25) */
    0x03, 0xeb, /* 109: rgb(214, 198,  25) */
    0x66, 0x6b, /* 110: rgb(214, 219,  49) */
    0xe1, 0xee, /* 111: rgb(222, 190,   8) */
    0x02, 0x6f, /* 112: rgb(222, 194,  16) */
    0x22, 0x6f, /* 113: rgb(222, 202,  16) */
    0x23, 0x6f, /* 114: rgb(222, 202,  25) */
    0x44, 0x6f, /* 115: rgb(222, 210,  33) */
    0x66, 0x6f, /* 116: rgb(222, 219,  49) */
    0x23, 0xf3, /* 117: rgb(230, 206,  25) */
    0x43, 0x73, /* 118: rgb(230, 210,  25) */
    0x44, 0xf3, /* 119: rgb(230, 215,  33) */
    0x64, 0x73, /* 120: rgb(230, 219,  33) */
    0x64, 0xf3, /* 121: rgb(230, 223,  33) */
    0x86, 0x73, /* 122: rgb(230, 227,  49) */
    0x86, 0xf3, /* 123: rgb(230, 231,  49) */
    0xa7, 0xf3, /* 124: rgb(230, 239,  58) */
    0x64, 0xf7, /* 125: rgb(239, 223,  33) */
    0x84, 0x77, /* 126: rgb(239, 227,  33) */
    0x85, 0x77, /* 127: rgb(239, 227,  41) */
    0x85, 0xf7, /* 128: rgb(239, 231,  41) */
    0x86, 0xf7, /* 129: rgb(239, 231,  49) */
    0xa6, 0x77, /* 130: rgb(239, 235,  49) */
    0xa6, 0xf7, /* 131: rgb(239, 239,  49) */
    0xa7, 0xf7, /* 132: rgb(239, 239,  58) */
    0xc7, 0x77, /* 133: rgb(239, 243,  58) */
    0xc9, 0x77, /* 134: rgb(239, 243,  74) */
    0x90, 0x7b, /* 135: rgb(247, 227, 132) */
    0x8d, 0xfb, /* 136: rgb(247, 231, 107) */
    0x90, 0xfb, /* 137: rgb(247, 231, 132) */
    0xa6, 0xfb, /* 138: rgb(247, 239,  49) */
    0xab, 0xfb, /* 139: rgb(247, 239,  90) */
    0xac, 0xfb, /* 140: rgb(247, 239,  99) */
    0xad, 0xfb, /* 141: rgb(247, 239, 107) */
    0xc6, 0x7b, /* 142: rgb(247, 243,  49) */
    0xc8, 0x7b, /* 143: rgb(247, 243,  66) */
    0xc9, 0x7b, /* 144: rgb(247, 243,  74) */
    0xc6, 0xfb, /* 145: rgb(247, 247,  49) */
    0xc7, 0xfb, /* 146: rgb(247, 247,  58) */
    0x90, 0xff, /* 147: rgb(255, 231, 132) */
    0xaf, 0x7f, /* 148: rgb(255, 235, 123) */
    0xb0, 0x7f, /* 149: rgb(255, 235, 132) */
    0xb1, 0x7f, /* 150: rgb(255, 235, 140) */
};