#ifndef EXPONENTIALANDLOGARITHMIC_H
#define EXPONENTIALANDLOGARITHMIC_H
#include "BFP.h"

#ifdef __cplusplus
extern "C"{
#endif

//! Calculate exponent.
/*!
  \param value value calculate.
*/
void expBfp(bfp* value);

//! Calculate common logarythm.
/*!
  \param value value calculate.
*/
void log10Bfp(bfp* value);

//! Calculate natural logarythm.
/*!
  \param value value calculate.
*/
void logBfp(bfp* value);

#ifdef __cplusplus
}
#endif

#endif // EXPONENTIALANDLOGARITHMIC_H
