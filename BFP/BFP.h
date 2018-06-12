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
    int separatorPlace; /*!< place of separator*/
    char significant[bfpSignificantArraySize]; /*!< significant of number */
} bfp;


#endif // TESTLIBRART_H
