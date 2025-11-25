// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku



#define MIRYOKU_LAYER_EXTRA \
U_NP,         &kp N1,           &kp N2,           &kp N3,           &kp N4,            U_NP,             U_NP,             U_NP,             U_NP,             U_NP, \
U_NP,         &kp A,             &kp W,             &kp D,             &kp N5,             U_NP,             U_NP,             U_NP,             U_NP,             U_NP, \
U_NP,         U_NP,             &kp S,             &kp F,             &kp N6,             U_NP,             U_NP,             U_NP,             U_NP,             U_NP, \
U_NP,         U_NP,             &kp LSHFT,        &kp SPC,          &kp E,              U_NP,             U_NP,             U_NP,             U_NP,             U_NP


#if defined (MIRYOKU_KEYBOARD_KLOR)

#define XXX &none

#define MIRYOKU_LAYERMAPPING_EXTRA( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
                K00  K01  K02  K03  K04              K05  K06  K07  K08  K09 \
     &kp ESC    K10  K11  K12  K13  K14              K15  K16  K17  K18  K19  XXX \
     &kp LCTRL  K20  K21  K22  K23  K24  XXX    XXX  K25  K26  K27  K28  K29  &to U_BASE \
                          K32  K33  K34  &kp Q  XXX  K35  K36  K37

#endif