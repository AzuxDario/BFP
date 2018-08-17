#include "InitializationTest.h"

InitializationTest::InitializationTest()
{

}

void InitializationTest::initBfp_PosValue()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initBFP(&value2, &value1);
    QCOMPARE(ValueHelper::checkValue(&value2, ValueHelper::Sign::plus, std::string("15") , 1), true);
}

void InitializationTest::initBfp_NegValue()
{
    bfp value1, value2;
    initInt(&value1, -15);
    initBFP(&value2, &value1);
    QCOMPARE(ValueHelper::checkValue(&value2, ValueHelper::Sign::minus, std::string("15") , 1), true);
}

void InitializationTest::initBfp_NaN()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    initBFP(&value2, &value1);
    QCOMPARE(ValueHelper::checkIsNan(&value2), true);
}

void InitializationTest::initBfp_PosInf()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    initBFP(&value2, &value1);
    QCOMPARE(ValueHelper::checkIsPosInf(&value2), true);
}

void InitializationTest::initBfp_NegInf()
{
    bfp value1, value2;
    ValueHelper::assignNegativeInf(&value1);
    initBFP(&value2, &value1);
    QCOMPARE(ValueHelper::checkIsNegInf(&value2), true);
}

void InitializationTest::initDouble_PosValue()
{
    bfp value;
    initDouble(&value, 15.0);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("15") , 1), true);
}

void InitializationTest::initDouble_NegValue()
{
    bfp value;
    initDouble(&value, -15.0);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("15") , 1), true);
}

void InitializationTest::initFloat_PosValue()
{
    bfp value;
    initFloat(&value, 15.0f);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("15") , 1), true);
}

void InitializationTest::initFloat_NegValue()
{
    bfp value;
    initFloat(&value, -15.0f);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("15") , 1), true);
}

void InitializationTest::initInt_PosValue()
{
    bfp value;
    initInt(&value, 15);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("15") , 1), true);
}

void InitializationTest::initInt_NegValue()
{
    bfp value;
    initInt(&value, -15);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("15") , 1), true);
}

void InitializationTest::initLoneLong_PosValue()
{
    bfp value;
    initLongLong(&value, 15);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("15") , 1), true);
}

void InitializationTest::initLoneLong_NegValue()
{
    bfp value;
    initLongLong(&value, -15);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("15") , 1), true);
}

void InitializationTest::initString_PosValue()
{
    bfp value;
    initString(&value, "15");
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("15") , 1), true);
}

void InitializationTest::initString_NegValue()
{
    bfp value;
    initString(&value, "-15");
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("15") , 1), true);
}

void InitializationTest::initString_NotNumberValue()
{
    bfp value;
    initString(&value, "abc");
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InitializationTest::initString_PartialNumberValue()
{
    bfp value;
    initString(&value, "123abc");
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InitializationTest::initString_SignInsideValue()
{
    bfp value;
    initString(&value, "-123+abc");
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InitializationTest::initStringExp_PosValue()
{
    bfp value;
    initStringExp(&value, "1.5", 1);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("15") , 1), true);
}

void InitializationTest::initStringExp_NegValue()
{
    bfp value;
    initStringExp(&value, "-1.5", 1);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("15") , 1), true);
}

void InitializationTest::initStringExp_NotNumberValue()
{
    bfp value;
    initStringExp(&value, "abc", 1);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InitializationTest::initStringExp_PartialNumberValue()
{
    bfp value;
    initStringExp(&value, "123abc", 1);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InitializationTest::initStringExp_SignInsideValue()
{
    bfp value;
    initStringExp(&value, "-123+abc", 1);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void InitializationTest::initZero_Value()
{
    bfp value;
    initZero(&value);
    QCOMPARE(ValueHelper::checkIsZero(&value), true);
}

void InitializationTest::normalization_Value()
{
    bfp value;
    initZero(&value);
    value.significant[2] = 1;
    normalization(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, "1", -2), true);
}
