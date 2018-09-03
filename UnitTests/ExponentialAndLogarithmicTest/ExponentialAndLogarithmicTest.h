#ifndef EXPONENTIALANDLOGARITHMICTEST_H
#define EXPONENTIALANDLOGARITHMICTEST_H

#include <QObject>
#include <QTest>
#include "ValueHelper.h"
#include <Initialization/Initialization.h>
#include <ExponentialAndLogarithmic/ExponentialAndLogarithmic.h>

class ExponentialAndLogarithmicTest : public QObject {
    Q_OBJECT
public:
    ExponentialAndLogarithmicTest();
private slots:
    void expBfp_Pos();
    void expBfp_Neg();
    void expBfp_NaN();
    void expBfp_PosInf();
    void expBfp_NegInf();

    void log10Bfp_Pos();
    void log10Bfp_NaN();
    void log10Bfp_PosInf();
    void log10Bfp_NegInf();

    void logBfp_Pos();
    void logBfp_NaN();
    void logBfp_PosInf();
    void logBfp_NegInf();
};

#endif // EXPONENTIALANDLOGARITHMICTEST_H
