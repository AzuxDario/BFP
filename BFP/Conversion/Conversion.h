#ifndef CONVERSION_H
#define CONVERSION_H
#include "BFP.h"
#include <stdlib.h>

//! Convert bfp to string.
/*!
  \param value value to convert.
  \param precision how many numbers after separator should be shown.
*/
char* toString(bfp* value, unsigned int precision);

//! Convert bfp to string.
/*!
  \param value value to convert.
  \param precision how many numbers after separator should be shown.
*/
char* toStringExp(bfp* value, unsigned int precision);

#endif // CONVERSION_H
