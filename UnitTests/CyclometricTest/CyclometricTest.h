#ifndef CYCLOMETRICTEST_H
#define CYCLOMETRICTEST_H

#include <QObject>
#include <QTest>
#include "ValueHelper.h"
#include <Initialization/Initialization.h>
#include <Cyclometric/Cyclometric.h>

class CyclometricTest : public QObject {
    Q_OBJECT
public:
    CyclometricTest();
private slots:
    void acosBfp_Pos();
    void acosBfp_Neg();
    void acosBfp_NaN();
    void acosBfp_PosInf();
    void acosBfp_NegInf();

    void actanBfp_Pos();
    void actanBfp_Neg();
    void actanBfp_NaN();
    void actanBfp_PosInf();
    void actanBfp_NegInf();

    void asinBfp_Pos();
    void asinBfp_Neg();
    void asinBfp_NaN();
    void asinBfp_PosInf();
    void asinBfp_NegInf();

    void atanBfp_Pos();
    void atanBfp_Neg();
    void atanBfp_NaN();
    void atanBfp_PosInf();
    void atanBfp_NegInf();

    void atan2Bfp_AnyPos();
    void atan2Bfp_PosNeg();
    void atan2Bfp_NegNeg();
    void atan2Bfp_PosZero();
    void atan2Bfp_NegZero();
    void atan2Bfp_ZeroZero();
    void atan2Bfp_NaN();
    void atan2Bfp_PosInf();
    void atan2Bfp_NegInf();

};

#endif // CYCLOMETRICTEST_H
