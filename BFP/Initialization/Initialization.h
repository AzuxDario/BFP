#ifndef INITIALIZATION_H
#define INITIALIZATION_H
#include "BFP.h"

//! Initialize variable by double value
/*!
  \param value1 value to initialize.
  \param value2 value to be use in initialization.
*/
void initDouble(bfp* value1, double value2);

//! Initialize variable by value zero.
/*!
  \param value value to initialize.
*/
void initZero(bfp* value);

#endif // INITIALIZATION_H
