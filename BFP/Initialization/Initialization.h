#ifndef INITIALIZATION_H
#define INITIALIZATION_H
#include "BFP.h"

//! Initialize variable by BFP value
/*!
  \param target value to initialize.
  \param source value to be use in initialization.
*/
void initBFP(bfp* target, bfp* source);

//! Initialize variable by double value
/*!
  \param target value to initialize.
  \param source value to be use in initialization.
*/
void initDouble(bfp* target, double source);

//! Initialize variable by float value
/*!
  \param target value to initialize.
  \param source value to be use in initialization.
*/
void initFloat(bfp* target, float source);

//! Initialize variable by integer value
/*!
  \param target value to initialize.
  \param source value to be use in initialization.
*/
void initInt(bfp* target, int source);

//! Initialize variable by long long value
/*!
  \param target value to initialize.
  \param source value to be use in initialization.
*/
void initLongLong(bfp* target, long long source);

//! Initialize variable from string.
/*!
  \param target value to initialize.
  \param source value to be use in initialize in x.yyyy... format.
*/
void initString(bfp* target, char* source);


//! Initialize variable from string.
/*!
  \param target value to initialize.
  \param source value to be use in initialize in x.yyyy... format.
  \param exponent exponent.
*/
void initStringExp(bfp* target, char* source, int exponent);

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
