#ifndef valS
#define valS

#define RAC 89
#define SBC 88
#define DFC 172
#define HKC 173
#define KLC 175

int RA;           //  89 OR 01011001 || REG
int SB;           //  88 OR 01011000 || REG
int DF;           // 172 OR 10101100 || REG
int HK;           // 173 OR 10101101 || REG
int KL;           // 175 OR 10101111 || REG

#define NREG 78   //  78 OR 01001110 || OUTPUT REG
#define SY 17     //  17 OR 00010001 || SystemCall
#define MV 24     //  24 OR 00011000 || MOV
#define OUT 180   // 180 OR 10110100 || OUTPUT STREAM

#define DEBG 81   //  81 OR 01010001 || DEBUG MODE
#define NL "@"    //   @ OR        @ || NEW LINE

#endif
