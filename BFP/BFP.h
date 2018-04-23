#ifndef TESTLIBRART_H
#define TESTLIBRART_H

#include "bfp_global.h"

typedef struct { char number[bfpArraySize]; } bfp;

void absBfp(bfp* value);
bfp addBfp(bfp* value1, bfp* value2);
int compBfp(bfp* value1, bfp* value2);

int fun(int a, int b);

#endif // TESTLIBRART_H
