#ifndef TESTLIBRART_H
#define TESTLIBRART_H

#include "bfp_global.h"

typedef struct
{
    char sign; //Must be 0 or 1
    int exponent;
    char significant[bfpSignificantArraySize];
} bfp;

void absBfp(bfp* value);
bfp addBfp(bfp* value1, bfp* value2);
int equalBfp(bfp* value1, bfp* value2);
int greatherBfp(bfp* value1, bfp* value2);
int lessBfp(bfp* value1, bfp* value2);
void negBfp(bfp* value);

int fun(int a, int b);

#endif // TESTLIBRART_H