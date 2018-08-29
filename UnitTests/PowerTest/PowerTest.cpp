#include "PowerTest.h"

PowerTest::PowerTest()
{

}

void PowerTest::powLongLong_PosPos()
{
    bfp value;
    initDouble(&value, 2);
    powLongLong(&value, 2);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("4") , 0), true);
}

void PowerTest::powLongLong_NegPos()
{
    bfp value;
    initDouble(&value, -2);
    powLongLong(&value, 3);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("8") , 0), true);
}
void PowerTest::powLongLong_PosNeg()
{
    bfp value;
    initDouble(&value, 2);
    powLongLong(&value, -2);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("25") , -1), true);
}
void PowerTest::powLongLong_NegNeg()
{
    bfp value;
    initDouble(&value, -2);
    powLongLong(&value, -3);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::minus, std::string("125") , -1), true);
}
void PowerTest::powLongLong_Nan()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    powLongLong(&value, 2);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void PowerTest::powLongLong_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    powLongLong(&value, 2);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}
void PowerTest::powLongLong_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    powLongLong(&value, 2);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}

void PowerTest::powInt_PosPos()
{
    bfp value;
    initDouble(&value, 2);
    powInt(&value, 2);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("4") , 0), true);
}

void PowerTest::sqrtBfp_Pos()
{
    bfp value;
    initDouble(&value, 4);
    sqrtBfp(&value);
    QCOMPARE(ValueHelper::checkValue(&value, ValueHelper::Sign::plus, std::string("2") , 0), true);
}

void PowerTest::sqrtBfp_Neg()
{
    bfp value;
    initDouble(&value, -2);
    sqrtBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}
void PowerTest::sqrtBfp_Nan()
{
    bfp value;
    initDouble(&value, 2);
    ValueHelper::assignNaN(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}
void PowerTest::sqrtBfp_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    sqrtBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}
void PowerTest::sqrtBfp_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    sqrtBfp(&value);
    QCOMPARE(ValueHelper::checkIsNan(&value), true);
}
