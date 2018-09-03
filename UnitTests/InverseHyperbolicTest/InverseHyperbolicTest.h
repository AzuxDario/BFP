#ifndef INVERSEHYPERBOLICTEST_H
#define INVERSEHYPERBOLICTEST_H

#include <QObject>
#include <QTest>
#include "ValueHelper.h"
#include <Initialization/Initialization.h>
#include <InverseHyperbolic/InverseHyperbolic.h>

class InverseHyperbolicTest : public QObject {
    Q_OBJECT
public:
    InverseHyperbolicTest();
private slots:
    void acoshBfp_Pos();
    void acoshBfp_NaN();
    void acoshBfp_PosInf();
    void acoshBfp_NegInf();

    void actanhBfp_Pos();
    void actanhBfp_Neg();
    void actanhBfp_NaN();
    void actanhBfp_PosInf();
    void actanhBfp_NegInf();

    void asinhBfp_Pos();
    void asinhBfp_Neg();
    void asinhBfp_NaN();
    void asinhBfp_PosInf();
    void asinhBfp_NegInf();

    void atanhBfp_Pos();
    void atanhBfp_Neg();
    void atanhBfp_NaN();
    void atanhBfp_PosInf();
    void atanhBfp_NegInf();
};

#endif // INVERSEHYPERBOLICTEST_H
