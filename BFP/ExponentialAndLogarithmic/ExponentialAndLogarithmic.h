#ifndef EXPONENTIALANDLOGARITHMIC_H
#define EXPONENTIALANDLOGARITHMIC_H
#include "BFP.h"

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

#endif // EXPONENTIALANDLOGARITHMIC_H
