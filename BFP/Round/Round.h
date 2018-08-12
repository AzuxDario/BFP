#ifndef ROUND_H
#define ROUND_H
#include "BFP.h"

#ifdef __cplusplus
extern "C"{
#endif

//! Rounds x upward, returning the smallest integral value that is not less than x.
/*!
  \param value value to ceil.
*/
void ceilBfp(bfp* value);

//! Rounds x downward, returning the largest integral value that is not greater than x.
/*!
  \param value value to ceil.
*/
void floorBfp(bfp* value);

//! Returns the integral value that is nearest to x, with halfway cases rounded away from zero.
/*!
  \param value value to ceil.
*/
void roundBfp(bfp* value);

#ifdef __cplusplus
}
#endif

#endif // ROUND_H
