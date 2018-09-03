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

void ArthmeticTest::addBfp_NaN()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignNaN(&value2);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void ArthmeticTest::addBfp_PosInf()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignPositiveInf(&value2);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void ArthmeticTest::addBfp_NegInf()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignNegativeInf(&value2);
    addBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
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

void ArthmeticTest::divBfp_PosPos()
{
    bfp value1, value2;
    initInt(&value1, 30);
    initInt(&value2, 15);
    divBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("2") , 0), true);
}

void ArthmeticTest::divBfp_PosNeg()
{
    bfp value1, value2;
    initInt(&value1, 30);
    initInt(&value2, -15);
    divBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("2") , 0), true);
}

void ArthmeticTest::divBfp_NegPos()
{
    bfp value1, value2;
    initInt(&value1, -30);
    initInt(&value2, 15);
    divBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("2") , 0), true);
}

void ArthmeticTest::divBfp_NegNeg()
{
    bfp value1, value2;
    initInt(&value1, -30);
    initInt(&value2, -15);
    divBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("2") , 0), true);
}

void ArthmeticTest::divBfp_Zero()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initInt(&value2, 0);
    divBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void ArthmeticTest::divBfp_NaN()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignNaN(&value2);
    divBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void ArthmeticTest::divBfp_PosInf()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignPositiveInf(&value2);
    divBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void ArthmeticTest::divBfp_NegInf()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignNegativeInf(&value2);
    divBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void ArthmeticTest::divDouble_Test()
{
    bfp value;
    initInt(&value, 30);
    divDouble(&value, 15);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("2") , 0), true);
}

void ArthmeticTest::divFloat_Test()
{
    bfp value;
    initInt(&value, 30);
    divFloat(&value, 15);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("2") , 0), true);
}

void ArthmeticTest::divInt_Test()
{
    bfp value;
    initInt(&value, 30);
    divInt(&value, 15);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("2") , 0), true);
}

void ArthmeticTest::divLongLong_Test()
{
    bfp value;
    initInt(&value, 30);
    divLongLong(&value, 15);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("2") , 0), true);
}

void ArthmeticTest::factInt_Pos()
{
    bfp value;
    factInt(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("24") , 1), true);
}

void ArthmeticTest::factInt_Zero()
{
    bfp value;
    factInt(&value, 0);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("1") , 0), true);
}

void ArthmeticTest::mulBfp_PosPos()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initInt(&value2, 4);
    mulBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("60") , 1), true);
}

void ArthmeticTest::mulBfp_PosNeg()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initInt(&value2, -4);
    mulBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("60") , 1), true);
}

void ArthmeticTest::mulBfp_NegPos()
{
    bfp value1, value2;
    initInt(&value1, -15);
    initInt(&value2, 4);
    mulBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::minus, std::string("60") , 1), true);
}

void ArthmeticTest::mulBfp_NegNeg()
{
    bfp value1, value2;
    initInt(&value1, -15);
    initInt(&value2, -4);
    mulBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkValue(&value1, ValueHelper::Sign::plus, std::string("60") , 1), true);
}

void ArthmeticTest::mulBfp_Zero()
{
    bfp value1, value2;
    initInt(&value1, 15);
    initInt(&value2, 0);
    mulBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsZero(&value1), true);
}

void ArthmeticTest::mulBfp_NaN()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignNaN(&value2);
    mulBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void ArthmeticTest::mulBfp_PosInf()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignPositiveInf(&value2);
    mulBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsPosInf(&value1), true);
}

void ArthmeticTest::mulBfp_NegInf()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignNegativeInf(&value2);
    mulBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNegInf(&value1), true);
}

void ArthmeticTest::mulDouble_Test()
{
    bfp value;
    initInt(&value, 15);
    mulDouble(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("60") , 1), true);
}

void ArthmeticTest::mulFloat_Test()
{
    bfp value;
    initInt(&value, 15);
    mulFloat(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("60") , 1), true);
}

void ArthmeticTest::mulInt_Test()
{
    bfp value;
    initInt(&value, 15);
    mulInt(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("60") , 1), true);
}

void ArthmeticTest::mulLongLong_Test()
{
    bfp value;
    initInt(&value, 15);
    mulLongLong(&value, 4);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("60") , 1), true);
}

void ArthmeticTest::negBfp_Pos()
{
    bfp value;
    initInt(&value, 15);
    negBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("15") , 1), true);
}

void ArthmeticTest::negBfp_Neg()
{
    bfp value;
    initInt(&value, -15);
    negBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("15") , 1), true);
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

void ArthmeticTest::subBfp_NaN()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignNaN(&value2);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void ArthmeticTest::subBfp_PosInf()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignPositiveInf(&value2);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
}

void ArthmeticTest::subBfp_NegInf()
{
    bfp value1, value2;
    initInt(&value1, 15);
    ValueHelper::assignNegativeInf(&value2);
    subBfp(&value1, &value2);
    QCOMPARE(ValueHelper::checkIsNan(&value1), true);
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
