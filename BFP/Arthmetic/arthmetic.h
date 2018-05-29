#ifndef ARTHMETIC_H
#define ARTHMETIC_H
#include "BFP.h"

//! Get absolute value.
/*!
  \param value value to make absolute.
*/
void absBfp(bfp* value);

//! Add second value to first value.
/*!
  \param value1 value where we add.
  \param value2 value to be added.
*/
void addBfp(bfp* value1, bfp* value2);

//! Add second value to first value.
/*!
  \param value1 value where we add.
  \param value2 value to be added.
*/
void addBfp(bfp* value1, double value2);

//! Negate value.
/*!
  \param value value to negate.
*/
void negBfp(bfp* value);
#endif // ARTHMETIC_H
