#include "ComparsionTest.h"

ComparsionTest::ComparsionTest()
{

}

void ComparsionTest::isEqualBfp_Equal()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, 10);
    QCOMPARE(equalBfp(&value1, &value2), true);
}

void ComparsionTest::isEqualBfp_NotEqual()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, 20);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::isEqualBfp_NanNumber()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    initInt(&value2, 10);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::isEqualBfp_PosInfNumber()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    initInt(&value2, 20);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::isEqualBfp_NegInfNumber()
{
    bfp value1, value2;
    ValueHelper::assignNegativeInf(&value1);
    initInt(&value2, 20);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::isEqualBfp_NanPosInf()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignPositiveInf(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::isEqualBfp_NanNegInf()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::isEqualBfp_NanNan()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignNaN(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::isEqualBfp_PosInfPosInf()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    ValueHelper::assignPositiveInf(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::isEqualBfp_NegInfNegInf()
{
    bfp value1, value2;
    ValueHelper::assignNegativeInf(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::isEqualBfp_PosInfNegInf()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}
