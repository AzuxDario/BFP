#include "ArthmeticTest.h"

ArthmeticTest::ArthmeticTest()
{

}

void ArthmeticTest::absBfp_PosValue()
{
    bfp value;
    initInt(&value, 15);
    absBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("15") , 1), true);
}

void ArthmeticTest::absBfp_NegValue()
{
    bfp value;
    initInt(&value, 15);
    absBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("15") , 1), true);
}

void ArthmeticTest::addBfp_PosPosValuesPosResult()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initInt(&value2, 10);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("25") , 1), true);
}

void ArthmeticTest::addBfp_NegNegValuesNegResult()
{
    bfp value1, value2;
    initInt(&value1, -15);
    initInt(&value2, -10);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("25") , 1), true);
}

void ArthmeticTest::addBfp_PosNegValuesPosResult()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initInt(&value2, -10);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("5") , 0), true);
}

void ArthmeticTest::addBfp_PosNegValuesNegResult()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, -15);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("5") , 0), true);
}

void ArthmeticTest::addBfp_PosNegValuesZeroResult()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initInt(&value2, -15);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("0") , 0), true);
}

void ArthmeticTest::addBfp_NegPosValuesPosResult()
{
    bfp value1, value2;
    initInt(&value1, -10);
    initInt(&value2, 15);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("5") , 0), true);
}

void ArthmeticTest::addBfp_NegPosValuesNegResult()
{
    bfp value1, value2;
    initInt(&value1, -15);
    initInt(&value2, 10);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("5") , 0), true);
}

void ArthmeticTest::addBfp_NegPosValuesZeroResult()
{
    bfp value1, value2;
    initInt(&value1, -15);
    initInt(&value2, 15);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("0") , 0), true);
}
