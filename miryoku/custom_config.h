// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if defined (MIRYOKU_LAYOUTMAPPING_CORNE)

#define XXX &none
#define xTx &trans
#define KPA &kp A

#define MIRYOKU_LAYOUTMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
KPA  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYOUTMAPPING_TAP( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
xTx  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  xTx \
xTx  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  xTx \
xTx  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  xTx \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYOUTMAPPING_NAV( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
xTx  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  xTx \
xTx  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  xTx \
xTx  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  xTx \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYOUTMAPPING_MOUSE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
xTx  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  xTx \
xTx  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  xTx \
xTx  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  xTx \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYOUTMAPPING_MEDIA( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
xTx  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  xTx \
xTx  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  xTx \
xTx  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  xTx \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYOUTMAPPING_NUM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
xTx  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  xTx \
xTx  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  xTx \
xTx  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  xTx \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYOUTMAPPING_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
xTx  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  xTx \
xTx  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  xTx \
xTx  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  xTx \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYOUTMAPPING_FUN( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
xTx  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  xTx \
xTx  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  xTx \
xTx  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  xTx \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYOUTMAPPING_BUTTON( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
xTx  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  xTx \
xTx  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  xTx \
xTx  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  xTx \
               K32  K33  K34       K35  K36  K37

#endif
