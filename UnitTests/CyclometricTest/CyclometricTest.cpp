#include "CyclometricTest.h"

CyclometricTest::CyclometricTest()
{

}

void CyclometricTest::acosBfp_Pos()
{
    bfp value;
    initDouble(&value, 0.5);
    acosBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1047") , 0), true);
}

void CyclometricTest::acosBfp_Neg()
{
    bfp value;
    initDouble(&value, -0.5);
    acosBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("2094") , 0), true);
}

void CyclometricTest::acosBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    acosBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::acosBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    acosBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::acosBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    acosBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::actanBfp_Pos()
{
    bfp value;
    initDouble(&value, 0.5);
    actanBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1107") , 0), true);
}

void CyclometricTest::actanBfp_Neg()
{
    bfp value;
    initDouble(&value, -0.5);
    actanBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("1107") , 0), true);
}

void CyclometricTest::actanBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    actanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::actanBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    actanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::actanBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    actanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::asinBfp_Pos()
{
    bfp value;
    initDouble(&value, 0.5);
    asinBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("5235") , -1), true);
}

void CyclometricTest::asinBfp_Neg()
{
    bfp value;
    initDouble(&value, -0.5);
    asinBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("5235") , -1), true);
}

void CyclometricTest::asinBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    asinBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::asinBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    asinBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::asinBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    asinBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::atanBfp_Pos()
{
    bfp value;
    initDouble(&value, 0.5);
    atanBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("4636") , -1), true);
}

void CyclometricTest::atanBfp_Neg()
{
    bfp value;
    initDouble(&value, -0.5);
    atanBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("4636") ,-1), true);
}

void CyclometricTest::atanBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    atanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::atanBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    atanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::atanBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    atanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void CyclometricTest::atan2Bfp_AnyPos()
{
    bfp value1, value2;
    initDouble(&value1, 0.5);
    initDouble(&value2, 0.5);
    atan2Bfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("7729") , -1), true);
}

void CyclometricTest::atan2Bfp_PosNeg()
{
    bfp value1, value2;
    initDouble(&value1, 0.5);
    initDouble(&value2, -0.5);
    atan2Bfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("2368") , 0), true);
}

void CyclometricTest::atan2Bfp_NegNeg()
{
    bfp value1, value2;
    initDouble(&value1, -0.5);
    initDouble(&value2, -0.5);
    atan2Bfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("2368") , 0), true);
}

void CyclometricTest::atan2Bfp_PosZero()
{
    bfp value1, value2;
    initDouble(&value1, 0.5);
    initDouble(&value2, 0);
    atan2Bfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("1570") , 0), true);
}

void CyclometricTest::atan2Bfp_NegZero()
{
    bfp value1, value2;
    initDouble(&value1, -0.5);
    initDouble(&value2, 0);
    atan2Bfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("1570") , 0), true);
}

void CyclometricTest::atan2Bfp_ZeroZero()
{
    bfp value1, value2;
    initDouble(&value1, 0);
    initDouble(&value2, 0);
    atan2Bfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void CyclometricTest::atan2Bfp_NaN()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignNaN(&value2);
    atan2Bfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void CyclometricTest::atan2Bfp_PosInf()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    ValueHelper::assignPositiveInf(&value2);
    atan2Bfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void CyclometricTest::atan2Bfp_NegInf()
{
    bfp value1, value2;
    ValueHelper::assignNegativeInf(&value1);
    ValueHelper::assignNegativeInf(&value2);
    atan2Bfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}
