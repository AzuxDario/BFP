#ifndef COMPARSION_H
#define COMPARSION_H
#include "BFP.h"

//! Check if first variable is less than second.
/*!
  \param value1 pointer to value to check.
  \param value2 pointer to value to compare.
*/
int lessBfp(bfp* value1, bfp* value2);

//! Check if first variable is equal second.
/*!
  \param value1 pointer to value to check.
  \param value2 pointer to value to compare.
*/
int equalBfp(bfp* value1, bfp* value2);

//! Check if first variable is greather than second.
/*!
  \param value1 pointer to value to check.
  \param value2 pointer to value to compare.
*/
int greatherBfp(bfp* value1, bfp* value2);

#endif // COMPARSION_H
