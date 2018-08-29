#include <QtTest>
#include <ArthmeticTest/ArthmeticTest.h>
#include "ComparsionTest/ComparsionTest.h"
#include "ConversionTest/ConversionTest.h"
#include "CyclometricTest/CyclometricTest.h"
#include "ExponentialAndLogarithmicTest/ExponentialAndLogarithmicTest.h"
#include "HyperbolicTest/HyperbolicTest.h"
#include "InitializationTest/InitializationTest.h"
#include "InverseHyperbolicTest/InverseHyperbolicTest.h"
#include "PowerTest/PowerTest.h"

int main(int argc, char** argv)
{
    ComparsionTest comparsionTest;
    InitializationTest initializationTest;
    ConversionTest conversionTest;
    ArthmeticTest arthmeticTest;
    CyclometricTest cyclometricTest;
    ExponentialAndLogarithmicTest exponentialAndLogarithmicTest;
    HyperbolicTest hyperbolicTest;
    InverseHyperbolicTest inverseHyperbolicTest;
    PowerTest powerTest;

    return QTest::qExec(&comparsionTest, argc, argv) |
           QTest::qExec(&initializationTest, argc, argv) |
           QTest::qExec(&conversionTest, argc, argv) |
           QTest::qExec(&arthmeticTest, argc, argv) |
           QTest::qExec(&cyclometricTest, argc, argv) |
           QTest::qExec(&exponentialAndLogarithmicTest, argc, argv) |
           QTest::qExec(&hyperbolicTest, argc, argv) |
           QTest::qExec(&inverseHyperbolicTest, argc, argv) |
           QTest::qExec(&powerTest, argc, argv);
}
