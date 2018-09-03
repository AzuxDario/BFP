#include "TrigonometryTest.h"

TrigonometryTest::TrigonometryTest()
{

}

void TrigonometryTest::cosBfp_Pos()
{
    bfp value;
    initDouble(&value, 0.5);
    cosBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("8775") , -1), true);
}

void TrigonometryTest::cosBfp_Neg()
{
    bfp value;
    initDouble(&value, -0.5);
    cosBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("8775") , -1), true);
}

void TrigonometryTest::cosBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    cosBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::cosBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    cosBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::cosBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    cosBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::ctanBfp_Pos()
{
    bfp value;
    initDouble(&value, 0.5);
    ctanBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1830") , 0), true);
}

void TrigonometryTest::ctanBfp_Neg()
{
    bfp value;
    initDouble(&value, -0.5);
    ctanBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("1830") , 0), true);
}

void TrigonometryTest::ctanBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    ctanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::ctanBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    ctanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::ctanBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    ctanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::sinBfp_Pos()
{
    bfp value;
    initDouble(&value, 0.5);
    sinBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("4794") , -1), true);
}

void TrigonometryTest::sinBfp_Neg()
{
    bfp value;
    initDouble(&value, -0.5);
    sinBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("4794") , -1), true);
}

void TrigonometryTest::sinBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    sinBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::sinBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    sinBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::sinBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    sinBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::tanBfp_Pos()
{
    bfp value;
    initDouble(&value, 0.5);
    tanBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("5463") , -1), true);
}

void TrigonometryTest::tanBfp_Neg()
{
    bfp value;
    initDouble(&value, -0.5);
    tanBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("5463") ,-1), true);
}

void TrigonometryTest::tanBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    tanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::tanBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    tanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void TrigonometryTest::tanBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    tanBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}
