#ifndef HYPERBOLICTEST_H
#define HYPERBOLICTEST_H

#include <QObject>
#include <QTest>
#include "ValueHelper.h"
#include <Initialization/Initialization.h>
#include <Hyperbolic/Hyperbolic.h>

class HyperbolicTest : public QObject {
    Q_OBJECT
public:
    HyperbolicTest();
private slots:
    void coshBfp_Pos();
    void coshBfp_Neg();
    void coshBfp_NaN();
    void coshBfp_PosInf();
    void coshBfp_NegInf();

    void ctanhBfp_Pos();
    void ctanhBfp_Neg();
    void ctanhBfp_NaN();
    void ctanhBfp_PosInf();
    void ctanhBfp_NegInf();

    void sinhBfp_Pos();
    void sinhBfp_Neg();
    void sinhBfp_NaN();
    void sinhBfp_PosInf();
    void sinhBfp_NegInf();

    void tanhBfp_Pos();
    void tanhBfp_Neg();
    void tanhBfp_NaN();
    void tanhBfp_PosInf();
    void tanhBfp_NegInf();

};

#endif // HYPERBOLICTEST_H
