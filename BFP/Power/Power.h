#ifndef POWER_H
#define POWER_H
#include "BFP.h"

#ifdef __cplusplus
extern "C"{
#endif

//! Multiply first value by second value
/*!
  \param value1 base.
  \param value2 exponent.
*/
void powInt(bfp* value1, int value2);

//! Multiply first value by second value
/*!
  \param value1 base.
  \param value2 exponent.
*/
void powLongLong(bfp* value1, long long value2);

//! Calculate square root.
/*!
  \param value value to calculate.
*/
void sqrtBfp(bfp* value1);

#ifdef __cplusplus
}
#endif

#endif // POWER_H
