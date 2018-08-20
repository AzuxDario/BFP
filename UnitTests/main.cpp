#include <QtTest>
#include "ComparsionTest/ComparsionTest.h"
#include "ConversionTest/ConversionTest.h"
#include "InitializationTest/InitializationTest.h"

int main(int argc, char** argv)
{
    ComparsionTest comparsionTest;
    InitializationTest initializationTest;
    ConversionTest conversionTest;

    return QTest::qExec(&comparsionTest, argc, argv) |
           QTest::qExec(&initializationTest, argc, argv) |
           QTest::qExec(&conversionTest, argc, argv);
}
