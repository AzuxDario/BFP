#ifndef INVERSEHYPERBOLIC_H
#define INVERSEHYPERBOLIC_H
#include "BFP.h"

#ifdef __cplusplus
extern "C"{
#endif

//! Calculate inverse hyperbolic cosine.
/*!
  \param value value calculate.
*/
void acoshBfp(bfp* value);

//! Calculate inverse hyperbolic cotangent.
/*!
  \param value value calculate.
*/
void actanhBfp(bfp* value);

//! Calculate inverse hyperbolic sine.
/*!
  \param value value calculate.
*/
void asinhBfp(bfp* value);

//! Calculate inverse hyperbolic tangent.
/*!
  \param value value calculate.
*/
void atanhBfp(bfp* value);

#ifdef __cplusplus
}
#endif

#endif // INVERSEHYPERBOLIC_H
