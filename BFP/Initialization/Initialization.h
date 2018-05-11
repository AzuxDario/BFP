#ifndef INITIALIZATION_H
#define INITIALIZATION_H
#include "BFP.h"

//! Initialize variable by double value
/*!
  \param value1 value to initialize.
  \param value2 value to be use in initialization.
*/
void initDouble(bfp* target, double source);

//! Initialize variable from string.
/*!
  \param value value to initialize in x.yyyy... format.
*/
void initString(bfp* target, char* source);

//! Initialize variable by value zero.
/*!
  \param value value to initialize.
*/
void initZero(bfp* value);

//! Normalize value.
/*!
  \param value value to normalize.
*/
void normalization(bfp* value);

#endif // INITIALIZATION_H
