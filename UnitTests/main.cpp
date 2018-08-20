#include <QtTest>
#include <ArthmeticTest/ArthmeticTest.h>
#include "ComparsionTest/ComparsionTest.h"
#include "ConversionTest/ConversionTest.h"
#include "InitializationTest/InitializationTest.h"

int main(int argc, char** argv)
{
    ComparsionTest comparsionTest;
    InitializationTest initializationTest;
    ConversionTest conversionTest;
    ArthmeticTest arthmeticTest;

    return QTest::qExec(&comparsionTest, argc, argv) |
           QTest::qExec(&initializationTest, argc, argv) |
           QTest::qExec(&conversionTest, argc, argv) |
           QTest::qExec(&arthmeticTest, argc, argv);
}
