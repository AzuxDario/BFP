#include "ComparsionTest.h"

ComparsionTest::ComparsionTest()
{

}

void ComparsionTest::equalBfp_EqualPos()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, 10);
    QCOMPARE(equalBfp(&value1, &value2), true);
}

void ComparsionTest::equalBfp_EqualNeg()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, 10);
    QCOMPARE(equalBfp(&value1, &value2), true);
}

void ComparsionTest::equalBfp_NotEqualPosPos()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, 20);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::equalBfp_NotEqualPosNeg()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, -20);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::equalBfp_NanNumber()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    initInt(&value2, 10);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::equalBfp_PosInfNumber()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    initInt(&value2, 20);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::equalBfp_NegInfNumber()
{
    bfp value1, value2;
    ValueHelper::assignNegativeInf(&value1);
    initInt(&value2, 20);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::equalBfp_NanPosInf()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignPositiveInf(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::equalBfp_NanNegInf()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::equalBfp_NanNan()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignNaN(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::equalBfp_PosInfPosInf()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    ValueHelper::assignPositiveInf(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::equalBfp_NegInfNegInf()
{
    bfp value1, value2;
    ValueHelper::assignNegativeInf(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::equalBfp_PosInfNegInf()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(equalBfp(&value1, &value2), false);
}

void ComparsionTest::greatherBfp_GreatherPosPos()
{
    bfp value1, value2;
    initInt(&value1, 20);
    initInt(&value2, 10);
    QCOMPARE(greatherBfp(&value1, &value2), true);
}

void ComparsionTest::greatherBfp_GreatherPosNeg()
{
    bfp value1, value2;
    initInt(&value1, 20);
    initInt(&value2, -10);
    QCOMPARE(greatherBfp(&value1, &value2), true);
}

void ComparsionTest::greatherBfp_GreatherNegNeg()
{
    bfp value1, value2;
    initInt(&value1, -10);
    initInt(&value2, -20);
    QCOMPARE(greatherBfp(&value1, &value2), true);
}

void ComparsionTest::greatherBfp_NotGreatherPosPos()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, 20);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}
void ComparsionTest::greatherBfp_NotGreatherNegPos()
{
    bfp value1, value2;
    initInt(&value1, -10);
    initInt(&value2, 20);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}
void ComparsionTest::greatherBfp_NotGreatherNegNeg()
{
    bfp value1, value2;
    initInt(&value1, -20);
    initInt(&value2, -10);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}

void ComparsionTest::greatherBfp_NanNumber()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    initInt(&value2, 10);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}

void ComparsionTest::greatherBfp_PosInfNumber()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    initInt(&value2, 20);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}

void ComparsionTest::greatherBfp_NegInfNumber()
{
    bfp value1, value2;
    ValueHelper::assignNegativeInf(&value1);
    initInt(&value2, 20);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}

void ComparsionTest::greatherBfp_NanPosInf()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignPositiveInf(&value2);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}

void ComparsionTest::greatherBfp_NanNegInf()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}

void ComparsionTest::greatherBfp_NanNan()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignNaN(&value2);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}

void ComparsionTest::greatherBfp_PosInfPosInf()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    ValueHelper::assignPositiveInf(&value2);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}

void ComparsionTest::greatherBfp_NegInfNegInf()
{
    bfp value1, value2;
    ValueHelper::assignNegativeInf(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}

void ComparsionTest::greatherBfp_PosInfNegInf()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(greatherBfp(&value1, &value2), false);
}

void ComparsionTest::lessBfp_LessPosPos()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, 20);
    QCOMPARE(lessBfp(&value1, &value2), true);
}

void ComparsionTest::lessBfp_LessNegPos()
{
    bfp value1, value2;
    initInt(&value1, -20);
    initInt(&value2, 10);
    QCOMPARE(lessBfp(&value1, &value2), true);
}

void ComparsionTest::lessBfp_LessNegNeg()
{
    bfp value1, value2;
    initInt(&value1, -20);
    initInt(&value2, -10);
    QCOMPARE(lessBfp(&value1, &value2), true);
}

void ComparsionTest::lessBfp_NotLessPosPos()
{
    bfp value1, value2;
    initInt(&value1, 20);
    initInt(&value2, 10);
    QCOMPARE(lessBfp(&value1, &value2), false);
}
void ComparsionTest::lessBfp_NotLessPosNeg()
{
    bfp value1, value2;
    initInt(&value1, 10);
    initInt(&value2, -20);
    QCOMPARE(lessBfp(&value1, &value2), false);
}
void ComparsionTest::lessBfp_NotLessNegNeg()
{
    bfp value1, value2;
    initInt(&value1, -10);
    initInt(&value2, -20);
    QCOMPARE(lessBfp(&value1, &value2), false);
}

void ComparsionTest::lessBfp_NanNumber()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    initInt(&value2, 10);
    QCOMPARE(lessBfp(&value1, &value2), false);
}

void ComparsionTest::lessBfp_PosInfNumber()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    initInt(&value2, 20);
    QCOMPARE(lessBfp(&value1, &value2), false);
}

void ComparsionTest::lessBfp_NegInfNumber()
{
    bfp value1, value2;
    ValueHelper::assignNegativeInf(&value1);
    initInt(&value2, 20);
    QCOMPARE(lessBfp(&value1, &value2), false);
}

void ComparsionTest::lessBfp_NanPosInf()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignPositiveInf(&value2);
    QCOMPARE(lessBfp(&value1, &value2), false);
}

void ComparsionTest::lessBfp_NanNegInf()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(lessBfp(&value1, &value2), false);
}

void ComparsionTest::lessBfp_NanNan()
{
    bfp value1, value2;
    ValueHelper::assignNaN(&value1);
    ValueHelper::assignNaN(&value2);
    QCOMPARE(lessBfp(&value1, &value2), false);
}

void ComparsionTest::lessBfp_PosInfPosInf()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    ValueHelper::assignPositiveInf(&value2);
    QCOMPARE(lessBfp(&value1, &value2), false);
}

void ComparsionTest::lessBfp_NegInfNegInf()
{
    bfp value1, value2;
    ValueHelper::assignNegativeInf(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(lessBfp(&value1, &value2), false);
}

void ComparsionTest::lessBfp_PosInfNegInf()
{
    bfp value1, value2;
    ValueHelper::assignPositiveInf(&value1);
    ValueHelper::assignNegativeInf(&value2);
    QCOMPARE(lessBfp(&value1, &value2), false);
}

void ComparsionTest::isNaN_Number()
{
    bfp value;
    initInt(&value, 1);
    QCOMPARE(isNaN(&value), false);
}

void ComparsionTest::isNaN_Zero()
{
    bfp value;
    initZero(&value);
    QCOMPARE(isNaN(&value), false);
}

void ComparsionTest::isNaN_Nan()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    QCOMPARE(isNaN(&value), true);
}

void ComparsionTest::isNaN_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    QCOMPARE(isNaN(&value), false);
}

void ComparsionTest::isNaN_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    QCOMPARE(isNaN(&value), false);
}

void ComparsionTest::isNegativeInf_Number()
{
    bfp value;
    initInt(&value, 1);
    QCOMPARE(isNegativeInf(&value), false);
}

void ComparsionTest::isNegativeInf_Zero()
{
    bfp value;
    initZero(&value);
    QCOMPARE(isNegativeInf(&value), false);
}

void ComparsionTest::isNegativeInf_Nan()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    QCOMPARE(isNegativeInf(&value), false);
}

void ComparsionTest::isNegativeInf_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    QCOMPARE(isNegativeInf(&value), false);
}

void ComparsionTest::isNegativeInf_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    QCOMPARE(isNegativeInf(&value), true);
}

void ComparsionTest::isPositiveInf_Number()
{
    bfp value;
    initInt(&value, 1);
    QCOMPARE(isPositiveInf(&value), false);
}

void ComparsionTest::isPositiveInf_Zero()
{
    bfp value;
    initZero(&value);
    QCOMPARE(isPositiveInf(&value), false);
}

void ComparsionTest::isPositiveInf_Nan()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    QCOMPARE(isPositiveInf(&value), false);
}

void ComparsionTest::isPositiveInf_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    QCOMPARE(isPositiveInf(&value), true);
}

void ComparsionTest::isPositiveInf_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    QCOMPARE(isPositiveInf(&value), false);
}

void ComparsionTest::isZero_Number()
{
    bfp value;
    initInt(&value, 1);
    QCOMPARE(isZero(&value), false);
}

void ComparsionTest::isZero_Zero()
{
    bfp value;
    initZero(&value);
    QCOMPARE(isZero(&value), true);
}

void ComparsionTest::isZero_Nan()
{
    bfp value;
    ValueHelper::assignNaN(&value);
    QCOMPARE(isZero(&value), false);
}

void ComparsionTest::isZero_PosInf()
{
    bfp value;
    ValueHelper::assignPositiveInf(&value);
    QCOMPARE(isZero(&value), false);
}

void ComparsionTest::isZero_NegInf()
{
    bfp value;
    ValueHelper::assignNegativeInf(&value);
    QCOMPARE(isZero(&value), false);
}
