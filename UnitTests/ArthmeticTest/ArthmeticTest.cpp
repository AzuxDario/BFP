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

void ArthmeticTest::addDouble_Test()
{
    bfp value;
    initInt(&value, 15);
    addDouble(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("19") , 1), true);
}

void ArthmeticTest::addFloat_Test()
{
    bfp value;
    initInt(&value, 15);
    addFloat(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("19") , 1), true);
}

void ArthmeticTest::addInt_Test()
{
    bfp value;
    initInt(&value, 15);
    addInt(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("19") , 1), true);
}

void ArthmeticTest::addLongLong_Test()
{
    bfp value;
    initInt(&value, 15);
    addLongLong(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("19") , 1), true);
}

void ArthmeticTest::subBfp_PosPosValuesPosResult()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initInt(&value2, 10);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("5") , 0), true);
}

void ArthmeticTest::subBfp_PosPosValuesNegResult()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, 15);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("5") , 0), true);
}

void ArthmeticTest::subBfp_PosPosValuesZeroResult()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initInt(&value2, 15);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("0") , 0), true);
}

void ArthmeticTest::subBfp_NegNegValuesPosResult()
{
    bfp value1, value2;
    initInt(&value1, -10);
    initInt(&value2, -15);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("5") , 0), true);
}

void ArthmeticTest::subBfp_NegNegValuesNegResult()
{
    bfp value1, value2;
    initInt(&value1, -15);
    initInt(&value2, -10);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("5") , 0), true);
}

void ArthmeticTest::subBfp_NegNegValuesZeroResult()
{
    bfp value1, value2;
    initInt(&value1, -15);
    initInt(&value2, -15);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("0") , 0), true);
}

void ArthmeticTest::subBfp_PosNegValuesPosResult()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initInt(&value2, -15);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("30") , 1), true);
}

void ArthmeticTest::subBfp_NegPosValuesNegResult()
{
    bfp value1, value2;
    initInt(&value1, -15);
    initInt(&value2, 15);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("30") , 1), true);
}

void ArthmeticTest::subDouble_Test()
{
    bfp value;
    initInt(&value, 15);
    subDouble(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("11") , 1), true);
}

void ArthmeticTest::subFloat_Test()
{
    bfp value;
    initInt(&value, 15);
    subFloat(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("11") , 1), true);
}

void ArthmeticTest::subInt_Test()
{
    bfp value;
    initInt(&value, 15);
    subInt(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("11") , 1), true);
}

void ArthmeticTest::subLongLong_Test()
{
    bfp value;
    initInt(&value, 15);
    subLongLong(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("11") , 1), true);
}
