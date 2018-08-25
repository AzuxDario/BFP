#include "HyperbolicTest.h"

HyperbolicTest::HyperbolicTest()
{

}

void HyperbolicTest::coshBfp_Pos()
{
    bfp value;
    initDouble(&value, 1);
    coshBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1543") , 0), true);
}

void HyperbolicTest::coshBfp_Neg()
{
    bfp value;
    initDouble(&value, -1);
    coshBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1543") , 0), true);
}

void HyperbolicTest::coshBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    coshBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::coshBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    coshBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::coshBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    coshBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::ctanhBfp_Pos()
{
    bfp value;
    initDouble(&value, 1);
    ctanhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1313") , 0), true);
}

void HyperbolicTest::ctanhBfp_Neg()
{
    bfp value;
    initDouble(&value, -1);
    ctanhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("1313") , 0), true);
}

void HyperbolicTest::ctanhBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    ctanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::ctanhBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    ctanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::ctanhBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    ctanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::sinhBfp_Pos()
{
    bfp value;
    initDouble(&value, 1);
    sinhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1175") , 0), true);
}

void HyperbolicTest::sinhBfp_Neg()
{
    bfp value;
    initDouble(&value, -1);
    sinhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("1175") , 0), true);
}

void HyperbolicTest::sinhBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    sinhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::sinhBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    sinhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::sinhBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    sinhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::tanhBfp_Pos()
{
    bfp value;
    initDouble(&value, 1);
    tanhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("7615") , -1), true);
}

void HyperbolicTest::tanhBfp_Neg()
{
    bfp value;
    initDouble(&value, -1);
    tanhBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("7615") , -1), true);
}

void HyperbolicTest::tanhBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    tanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::tanhBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    tanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void HyperbolicTest::tanhBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    tanhBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}
