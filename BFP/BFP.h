#ifndef TESTLIBRART_H
#define TESTLIBRART_H

#include "bfp_global.h"

//!  BFP class.
/*!
  Class represents big floating point value.
*/
typedef struct
{
    char sign; /*!< sing of number */
    int exponent; /*!< exponent  of number */
    char significant[bfpSignificantArraySize]; /*!< significant of number */
} bfp;

void absBfp(bfp* value);
bfp addBfp(bfp* value1, bfp* value2);
void negBfp(bfp* value);

int fun(int a, int b);

#endif // TESTLIBRART_H
