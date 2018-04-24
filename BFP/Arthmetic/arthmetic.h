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
  \param value value where we add.
  \param value value to be added.
*/
bfp addBfp(bfp* value1, bfp* value2);

//! Negate value.
/*!
  \param value value to negate.
*/
void negBfp(bfp* value);
#endif // ARTHMETIC_H
