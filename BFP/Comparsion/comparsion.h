#ifndef COMPARSION_H
#define COMPARSION_H
#include "BFP.h"

#ifdef __cplusplus
extern "C"{
#endif

//! Check if value is NaN.
/*!
  \param value value to check.
*/
int isNaN(bfp* value);

//! Check if value is -Inf.
/*!
  \param value value to check.
*/
int isNegativeInf(bfp* value);

//! Check if value is +Inf.
/*!
  \param value value to check.
*/
int isPositiveInf(bfp* value);

//! Check if value equal zero.
/*!
  \param value value to check.
*/
int isZero(bfp* value);

//! Check if first variable is less than second.
/*!
  \param value1 value to check.
  \param value2 value to compare.
*/
int lessBfp(bfp* value1, bfp* value2);

//! Check if first variable is equal second.
/*!
  \param value1 value to check.
  \param value2 value to compare.
*/
int equalBfp(bfp* value1, bfp* value2);

//! Check if first variable is greather than second.
/*!
  \param value1 value to check.
  \param value2 value to compare.
*/
int greatherBfp(bfp* value1, bfp* value2);

#ifdef __cplusplus
}
#endif

#endif // COMPARSION_H
