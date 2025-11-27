// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku



#define MIRYOKU_LAYER_EXTRA \
&kp LBKT,         &kp N1,           &kp N2,           &kp N3,           &kp N4,            U_NP,             &kp F7,            &kp F8,            &kp F9,            &kp F12, \
&kp ESC,         &kp A,             &kp W,             &kp D,             &kp N5,             U_NP,             &kp F4,            &kp F5,            &kp F6,            &kp F11, \
&kp J,         &kp G,             &kp S,             &kp F,             &kp N6,             U_NP,             &kp F1,            &kp F2,            &kp F3,            &kp F10,  \
U_NP,         U_NP,             &kp LSHFT,        &kp SPC,          &kp E,              &kp L,             U_NP,             U_NP,             U_NP,             U_NP


#if defined (MIRYOKU_KEYBOARD_KLOR)

#define XXX &none

#define MIRYOKU_LAYERMAPPING_EXTRA( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
                K00  K01  K02  K03  K04              K05  K06  K07  K08  K09 \
     &kp EQUAL    K10  K11  K12  K13  K14              K15  K16  K17  K18  K19  XXX \
     &kp MINUS  K20  K21  K22  K23  K24  XXX    XXX  K25  K26  K27  K28  K29  &to U_BASE \
                          K32  K33  K34  &kp Q  XXX  K35  K36  K37

#endif