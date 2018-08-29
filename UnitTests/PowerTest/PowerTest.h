#ifndef POWERTEST_H
#define POWERTEST_H

#include <QObject>
#include <QTest>
#include "ValueHelper.h"
#include <Initialization/Initialization.h>
#include <Power/Power.h>

class PowerTest : public QObject {
    Q_OBJECT
public:
    PowerTest();
private slots:
    void powLongLong_PosPos();
    void powLongLong_NegPos();
    void powLongLong_PosNeg();
    void powLongLong_NegNeg();
    void powLongLong_Nan();
    void powLongLong_PosInf();
    void powLongLong_NegInf();

    // This function is based on and powLongLong
    // so not much tests are needed
    void powInt_PosPos();

    void sqrtBfp_Pos();
    void sqrtBfp_Neg();
    void sqrtBfp_Nan();
    void sqrtBfp_PosInf();
    void sqrtBfp_NegInf();
};

#endif // POWERTEST_H
