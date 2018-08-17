#include <QtTest>
#include "ComparsionTest/ComparsionTest.h"
#include "InitializationTest/InitializationTest.h"

int main(int argc, char** argv)
{
    ComparsionTest comparsionTest;
    InitializationTest initializationTest;

    return QTest::qExec(&comparsionTest, argc, argv) |
           QTest::qExec(&initializationTest, argc, argv);
}
