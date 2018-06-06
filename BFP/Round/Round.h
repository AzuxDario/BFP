#ifndef ROUND_H
#define ROUND_H
#include "BFP.h"

//! Rounds x upward, returning the smallest integral value that is not less than x.
/*!
  \param value value to ceil.
*/
void ceilBfp(bfp* value);

//! Returns the integral value that is nearest to x, with halfway cases rounded away from zero.
/*!
  \param value value to ceil.
*/
void roundBfp(bfp* value);

#endif // ROUND_H
