#include "InverseHyperbolicTest.h"

InverseHyperbolicTest::InverseHyperbolicTest()
{

}

void InverseHyperbolicTest::acoshBfp_Pos()
{
    bfp value;
    initDouble(&value, 2);
    acoshBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1316") , 0), true);
}

void InverseHyperbolicTest::acoshBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    acoshBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::acoshBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    acoshBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::acoshBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    acoshBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::actanhBfp_Pos()
{
    bfp value;
    initDouble(&value, 2);
    actanhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("5493") , -1), true);
}

void InverseHyperbolicTest::actanhBfp_Neg()
{
    bfp value;
    initDouble(&value, -2);
    actanhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("5493") , -1), true);
}

void InverseHyperbolicTest::actanhBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    actanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::actanhBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    actanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::actanhBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    actanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::asinhBfp_Pos()
{
    bfp value;
    initDouble(&value, 2);
    asinhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1443") , 0), true);
}

void InverseHyperbolicTest::asinhBfp_Neg()
{
    bfp value;
    initDouble(&value, -2);
    asinhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("1443") , 0), true);
}

void InverseHyperbolicTest::asinhBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    asinhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::asinhBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    asinhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::asinhBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    asinhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::atanhBfp_Pos()
{
    bfp value;
    initDouble(&value, 0.5);
    atanhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("5493") , -1), true);
}

void InverseHyperbolicTest::atanhBfp_Neg()
{
    bfp value;
    initDouble(&value, -0.5);
    atanhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("5493") , -1), true);
}

void InverseHyperbolicTest::atanhBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    atanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::atanhBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    atanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InverseHyperbolicTest::atanhBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    atanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}
