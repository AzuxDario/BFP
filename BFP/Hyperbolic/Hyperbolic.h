#ifndef HYPERBOLIC_H
#define HYPERBOLIC_H
#include "BFP.h"

#ifdef __cplusplus
extern "C"{
#endif

//! Calculate hiperbolic cosinus.
/*!
  \param value value calculate.
*/
void coshBfp(bfp* value);

//! Calculate hiperbolic contangent.
/*!
  \param value value calculate.
*/
void ctanhBfp(bfp* value);

//! Calculate hiperbolic sinus.
/*!
  \param value value calculate.
*/
void sinhBfp(bfp* value);

//! Calculate hiperbolic tangent.
/*!
  \param value value calculate.
*/
void tanhBfp(bfp* value);

#ifdef __cplusplus
}
#endif

#endif // HYPERBOLIC_H
