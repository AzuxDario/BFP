#ifndef TRIGONOMETRY_H
#define TRIGONOMETRY_H
#include "BFP.h"

#ifdef __cplusplus
extern "C"{
#endif

//! Calculate cosine.
/*!
  \param value value calculate.
*/
void cosBfp(bfp* value);

//! Calculate cotangent.
/*!
  \param value value calculate.
*/
void ctanBfp(bfp* value);

//! Calculate tangent.
/*!
  \param value value calculate.
*/
void tanBfp(bfp* value);

//! Calculate sine.
/*!
  \param value value calculate.
*/
void sinBfp(bfp* value);

#ifdef __cplusplus
}
#endif

#endif // TRIGONOMETRY_H
