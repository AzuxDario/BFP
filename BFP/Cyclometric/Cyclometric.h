#ifndef CYCLOMETRIC_H
#define CYCLOMETRIC_H
#include "BFP.h"
#include "stdbool.h"

#ifdef __cplusplus
extern "C"{
#endif

//! Calculate arc cosine.
/*!
  \param value value calculate.
*/
void acosBfp(bfp* value);

//! Calculate arc cotangent.
/*!
  \param value value calculate.
*/
void actanBfp(bfp* value);

//! Calculate arc sine.
/*!
  \param value value calculate.
*/
void asinBfp(bfp* value);

//! Calculate arc tangent.
/*!
  \param value value calculate.
*/
void atanBfp(bfp* value);

//! Calculate arc tangent.
/*!
  \param value value calculate.
*/
void atan2Bfp(bfp* value1, bfp* value2);

#ifdef __cplusplus
}
#endif

#endif // CYCLOMETRIC_H
