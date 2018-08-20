#include "ConversionTest.h"

ConversionTest::ConversionTest()
{

}

void ConversionTest::toString_PosIntegerPosExponent()
{
    bfp value;
    char *str;
    initInt(&value, 10);
    str = toString(&value, 0);
    QCOMPARE(strcmp(str, "10"), 0);
}

void ConversionTest::toString_NegIntegerPosExponent()
{
    bfp value;
    char *str;
    initInt(&value, -10);
    str = toString(&value, 0);
    QCOMPARE(strcmp(str, "-10"), 0);
}

void ConversionTest::toString_PosFractionPosExponent()
{
    bfp value;
    char *str;
    initString(&value, "10.25");
    str = toString(&value, 2);
    QCOMPARE(strcmp(str, "10.25"), 0);
}

void ConversionTest::toString_NegFractionPosExponent()
{
    bfp value;
    char *str;
    initString(&value, "-10.25");
    str = toString(&value, 2);
    QCOMPARE(strcmp(str, "-10.25"), 0);
}

void ConversionTest::toString_PosFractionNegExponent()
{
    bfp value;
    char *str;
    initString(&value, "0.025");
    str = toString(&value, 3);
    QCOMPARE(strcmp(str, "0.025"), 0);
}

void ConversionTest::toString_NegFractionNegExponent()
{
    bfp value;
    char *str;
    initString(&value, "-0.025");
    str = toString(&value, 3);
    QCOMPARE(strcmp(str, "-0.025"), 0);
}

void ConversionTest::toStringExp_PosIntegerPosExponent()
{
    bfp value;
    char *str;
    initInt(&value, 10);
    str = toStringExp(&value, 0);
    QCOMPARE(strcmp(str, "1E1"), 0);
}

void ConversionTest::toStringExp_NegIntegerPosExponent()
{
    bfp value;
    char *str;
    initInt(&value, -10);
    str = toStringExp(&value, 0);
    QCOMPARE(strcmp(str, "-1E1"), 0);
}

void ConversionTest::toStringExp_PosIntegerNegExponent()
{
    bfp value;
    char *str;
    initString(&value, "0.10");
    str = toStringExp(&value, 0);
    QCOMPARE(strcmp(str, "1E-1"), 0);
}

void ConversionTest::toStringExp_NegIntegerNegExponent()
{
    bfp value;
    char *str;
    initString(&value, "-0.10");
    str = toStringExp(&value, 0);
    QCOMPARE(strcmp(str, "-1E-1"), 0);
}

void ConversionTest::toStringExp_PosFractionPosExponent()
{
    bfp value;
    char *str;
    initString(&value, "10.25");
    str = toStringExp(&value, 3);
    QCOMPARE(strcmp(str, "1.025E1"), 0);
}

void ConversionTest::toStringExp_NegFractionPosExponent()
{
    bfp value;
    char *str;
    initString(&value, "-10.25");
    str = toStringExp(&value, 3);
    QCOMPARE(strcmp(str, "-1.025E1"), 0);
}

void ConversionTest::toStringExp_PosFractionNegExponent()
{
    bfp value;
    char *str;
    initString(&value, "0.1025");
    str = toStringExp(&value, 3);
    QCOMPARE(strcmp(str, "1.025E-1"), 0);
}

void ConversionTest::toStringExp_NegFractionNegExponent()
{
    bfp value;
    char *str;
    initString(&value, "-0.1025");
    str = toStringExp(&value, 3);
    QCOMPARE(strcmp(str, "-1.025E-1"), 0);
}
