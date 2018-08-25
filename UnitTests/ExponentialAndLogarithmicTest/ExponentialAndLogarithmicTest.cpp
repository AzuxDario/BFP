#include "ExponentialAndLogarithmicTest.h"

ExponentialAndLogarithmicTest::ExponentialAndLogarithmicTest()
{

}

void ExponentialAndLogarithmicTest::expBfp_Pos()
{
    bfp value;
    initDouble(&value, 4);
    expBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("5459") , 1), true);
}

void ExponentialAndLogarithmicTest::expBfp_Neg()
{
    bfp value;
    initDouble(&value, -4);
    expBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1831") , -2), true);
}

void ExponentialAndLogarithmicTest::expBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    expBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void ExponentialAndLogarithmicTest::expBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    expBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void ExponentialAndLogarithmicTest::expBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    expBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void ExponentialAndLogarithmicTest::log10Bfp_Pos()
{
    bfp value;
    initDouble(&value, 4);
    log10Bfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("6020") , -1), true);
}

void ExponentialAndLogarithmicTest::log10Bfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    log10Bfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void ExponentialAndLogarithmicTest::log10Bfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    log10Bfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void ExponentialAndLogarithmicTest::log10Bfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    log10Bfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void ExponentialAndLogarithmicTest::logBfp_Pos()
{
    bfp value;
    initDouble(&value, 4);
    logBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1386") , 0), true);
}

void ExponentialAndLogarithmicTest::logBfp_NaN()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    logBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void ExponentialAndLogarithmicTest::logBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    logBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void ExponentialAndLogarithmicTest::logBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    logBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}
