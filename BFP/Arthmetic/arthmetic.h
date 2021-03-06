#ifndef ARTHMETIC_H
#define ARTHMETIC_H
#include "BFP.h"

#ifdef __cplusplus
extern "C"{
#endif

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
void addDouble(bfp* value1, double value2);

//! Add second value to first value.
/*!
  \param value1 value where we add.
  \param value2 value to be added.
*/
void addFloat(bfp* value1, float value2);

//! Add second value to first value.
/*!
  \param value1 value where we add.
  \param value2 value to be added.
*/
void addInt(bfp* value1, int value2);

//! Add second value to first value.
/*!
  \param value1 value where we add.
  \param value2 value to be added.
*/
void addLongLong(bfp* value1, long long value2);

//! Divide first value by second value
/*!
  \param value1 dividend.
  \param value2 divider.
*/
void divBfp(bfp* value1, bfp* value2);

//! Divide first value by second value
/*!
  \param value1 dividend.
  \param value2 divider.
*/
void divDouble(bfp* value1, double value2);

//! Divide first value by second value
/*!
  \param value1 dividend.
  \param value2 divider.
*/
void divFloat(bfp* value1, float value2);

//! Divide first value by second value
/*!
  \param value1 dividend.
  \param value2 divider.
*/
void divInt(bfp* value1, int value2);

//! Divide first value by second value
/*!
  \param value1 dividend.
  \param value2 divider.
*/
void divLongLong(bfp* value1, long long value2);

//! Calculate double factorial
/*!
  \param value1 result.
  \param value2 nmber to calculate factorial.
*/
void doubleFactInt(bfp* value1, unsigned int value2);

//! Calculate factorial
/*!
  \param value1 result.
  \param value2 nmber to calculate factorial.
*/
void factInt(bfp* value1, unsigned int value2);

//! Multiply first value by second value
/*!
  \param value1 factor.
  \param value2 factor.
*/
void mulBfp(bfp* value1, bfp* value2);

//! Multiply first value by second value
/*!
  \param value1 factor.
  \param value2 factor.
*/
void mulDouble(bfp* value1, double value2);

//! Multiply first value by second value
/*!
  \param value1 factor.
  \param value2 factor.
*/
void mulFloat(bfp* value1, float value2);

//! Multiply first value by second value
/*!
  \param value1 factor.
  \param value2 factor.
*/
void mulInt(bfp* value1, int value2);

//! Multiply first value by second value
/*!
  \param value1 factor.
  \param value2 factor.
*/
void mulLongLong(bfp* value1, long long value2);

//! Negate value.
/*!
  \param value value to negate.
*/
void negBfp(bfp* value);

//! Subtract second value from first value.
/*!
  \param value1 minuend.
  \param value2 subtrahend.
*/
void subBfp(bfp* value1, bfp* value2);

//! Subtract second value from first value.
/*!
  \param value1 minuend.
  \param value2 subtrahend.
*/
void subDouble(bfp* value1, double value2);

//! Subtract second value from first value.
/*!
  \param value1 minuend.
  \param value2 subtrahend.
*/
void subFloat(bfp* value1, float value2);

//! Subtract second value from first value.
/*!
  \param value1 minuend.
  \param value2 subtrahend.
*/
void subInt(bfp* value1, int value2);

//! Subtract second value from first value.
/*!
  \param value1 minuend.
  \param value2 subtrahend.
*/
void subLongLong(bfp* value1, long long value2);

#ifdef __cplusplus
}
#endif

#endif // ARTHMETIC_H
