#include "RoundTest.h"

RoundTest::RoundTest()
{

}

void RoundTest::ceilBfp_PosLowerThan5()
{
    bfp value;
    initDouble(&value, 2.4);
    ceilBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("3") , 0), true);
}

void RoundTest::ceilBfp_PosUpperThan5()
{
    bfp value;
    initDouble(&value, 2.8);
    ceilBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("3") , 0), true);
}

void RoundTest::ceilBfp_NegLowerThan5()
{
    bfp value;
    initDouble(&value, -2.4);
    ceilBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("2") , 0), true);
}

void RoundTest::ceilBfp_NegUpperThan5()
{
    bfp value;
    initDouble(&value, -2.8);
    ceilBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("2") , 0), true);
}

void RoundTest::ceilBfp_Nan()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    ceilBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void RoundTest::ceilBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    ceilBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void RoundTest::ceilBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    ceilBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void RoundTest::floorBfp_PosLowerThan5()
{
    bfp value;
    initDouble(&value, 2.4);
    floorBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("2") , 0), true);
}

void RoundTest::floorBfp_PosUpperThan5()
{
    bfp value;
    initDouble(&value, 2.8);
    floorBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("2") , 0), true);
}

void RoundTest::floorBfp_NegLowerThan5()
{
    bfp value;
    initDouble(&value, -2.4);
    floorBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("3") , 0), true);
}

void RoundTest::floorBfp_NegUpperThan5()
{
    bfp value;
    initDouble(&value, -2.8);
    floorBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("3") , 0), true);
}

void RoundTest::floorBfp_Nan()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    floorBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void RoundTest::floorBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    floorBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void RoundTest::floorBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    floorBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void RoundTest::roundBfp_PosLowerThan5()
{
    bfp value;
    initDouble(&value, 2.4);
    roundBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("2") , 0), true);
}

void RoundTest::roundBfp_PosUpperThan5()
{
    bfp value;
    initDouble(&value, 2.8);
    roundBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("3") , 0), true);
}

void RoundTest::roundBfp_NegLowerThan5()
{
    bfp value;
    initDouble(&value, -2.4);
    roundBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("2") , 0), true);
}

void RoundTest::roundBfp_NegUpperThan5()
{
    bfp value;
    initDouble(&value, -2.8);
    roundBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("3") , 0), true);
}

void RoundTest::roundBfp_Nan()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    roundBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void RoundTest::roundBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    roundBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void RoundTest::roundBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    roundBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}
