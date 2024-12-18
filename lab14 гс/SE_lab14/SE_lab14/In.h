//!!!main!!!//

#pragma once
#define IN_MAX_LEN_TEXT 1024*1024
#define IN_CODE_ENDL '|'

#define IN_CODE_TABLE {\
IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, '|', IN::F, IN::F, IN::F, IN::F, IN::F,\
IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
IN::T/*0*/, IN::T /*1*/, IN::T /*2*/, IN::F, IN::F, IN::T /*5*/, IN::T/* 6*/, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
IN::F, IN::T /*A*/, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T /*H*/, IN::T /* I*/, IN::F, IN::T /*K*/, IN::T /*L*/, IN::T /*M*/, IN::F, IN::T /*O*/,\
IN::F, IN::F, IN::T /*R*/, IN::T /*S*/, IN::T /*T*/, IN::T /*U*/, IN::T /*V*/, IN::F, IN::I /*ign X*/, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
IN::F, IN::T /*a*/, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::T /*h*/, IN::T /*i*/, IN::F, IN::T /*k*/, IN::T /*l*/, IN::T/*m*/, IN::F, IN::T /*o*/,\
IN::F, IN::F, IN::T /*r*/, IN::T /*s*/, IN::T /*t*/, IN::T, IN::T /*v*/, IN::T /*u*/, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T,\
IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
\
IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
'-', IN::F, IN::T /*Â*/, IN::F, IN::F, IN::T /*Å*/, IN::F, IN::F, IN::T,  IN::T /*Ê*/, IN::T /*Ë*/, IN::T, IN::T /*Ì*/, IN::T /*O*/, IN::T, IN::F,\
IN::T /*Ð*/ , IN::F, IN::T, /*T*/ IN::T /*Ó*/, IN::F, IN::F, IN::F, IN::F, IN::T /*Ø*/, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T,\
IN::T /*à*/, IN::F, IN::T /*â*/, IN::F, IN::F, IN::T /*å*/, IN::F, IN::F, IN::T, IN::F, IN::T /*ê*/, IN::T /*ë*/, IN::T /*ì*/, IN::F, IN::T, IN::F,\
IN::T /*ð*/, IN::F, IN::T /*ò*/, IN::T /*ó*/, IN::F, IN::T, IN::F, IN::F, IN::T /*ø*/, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
 }

namespace In
{
    struct IN
    {
        enum { T = 1024, F = 2048, I = 4096 };
        int size;
        int lines;
        int ignor;
        unsigned char* text;
        int code[256] = IN_CODE_TABLE;
    };
    IN getin(wchar_t infile[]);
}


//kirill//

//#pragma once
//#define IN_MAX_LEN_TEXT 1024*1024
//#define IN_CODE_ENDL '\n'
//
//#define IN_CODE_TABLE {\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::T/*0*/, IN::T, IN::T /*2*/, IN::F, IN::F, IN::F, IN::T/* 6*/, IN::T /*7*/, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::T /*C*/, IN::T /*D*/, IN::T/* E*/, IN::F, IN::F, IN::T /*H*/, IN::T /* I*/, IN::F, IN::T /*K*/, IN::T /*L*/, IN::T /*M*/, IN::T /*N*/, IN::T /*O*/,\
//IN::F, IN::F, IN::T /*R*/, IN::F, IN::T/* T*/, IN::F, IN::F, IN::F, IN::I, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::T /*c*/, IN::T /*d*/, IN::T /*e*/, IN::F, IN::T, IN::T /*h*/,   IN::T /*i*/, IN::F, IN::T /*k*/, IN::T /*l*/, IN::T/* m*/, IN::T /*n*/, IN::T /*o*/,\
//IN::F, IN::F, IN::T /*r*/, IN::F, IN::T /*t*/, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//'-', IN::F, IN::F, IN::F, IN::T /*Ä*/, IN::T /*Å*/, IN::F, IN::F, IN::T,  IN::F /*Ê*/, IN::T /*Ë*/, IN::T /*Ì*/, IN::T /*Í*/, IN::T /*O*/, IN::T,IN::F,\
//IN::T /*Ð*/ , IN::F, IN::T, /*T*/ IN::F, IN::F, IN::F, IN::F, IN::T /*×*/, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T,\
//IN::F, IN::F, IN::F, IN::F, IN::T /*ä*/, IN::T /*å*/, IN::F, IN::F, IN::T, IN::F, IN::T, IN::T, IN::T, IN::T, IN::T, IN::F,\
//IN::T /*ð*/, IN::F, IN::T /*ò*/, IN::F, IN::F, IN::T, IN::F, IN::T /*÷*/, IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
// }
//
//namespace In
//{
//    struct IN
//    {
//        enum { T = 1024, F = 2048, I = 4096 };
//        int size;
//        int lines;
//        int ignor;
//        unsigned char* text;
//        int code[256] = IN_CODE_TABLE;
//    };
//    IN getin(wchar_t infile[]);
//}


//#pragma once
//#define IN_MAX_LEN_TEXT 1024*1024
//#define IN_CODE_ENDL '\n'
//
//#define IN_CODE_TABLE {\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::I, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::I,   '!', IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T,\
//IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T,\
//IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::F, IN::F, IN::T, IN::F, IN::F, IN::T, IN::F, IN::F, IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
//IN::T, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
// }
//
//namespace In
//{
//    struct IN
//    {
//        enum { T = 1024, F = 2048, I = 4096 };
//        int size;
//        int lines;
//        int ignor;
//        unsigned char* text;
//        int code[256] = IN_CODE_TABLE;
//    };
//    IN getin(wchar_t infile[]);
//}
