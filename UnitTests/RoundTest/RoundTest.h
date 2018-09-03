#ifndef ROUNDTEST_H
#define ROUNDTEST_H

#include <QObject>
#include <QTest>
#include "ValueHelper.h"
#include <Initialization/Initialization.h>
#include <Round/Round.h>

class RoundTest: public QObject {
    Q_OBJECT
public:
    RoundTest();
private slots:
    void ceilBfp_PosLowerThan5();
    void ceilBfp_PosUpperThan5();
    void ceilBfp_NegLowerThan5();
    void ceilBfp_NegUpperThan5();
    void ceilBfp_Nan();
    void ceilBfp_PosInf();
    void ceilBfp_NegInf();

    void floorBfp_PosLowerThan5();
    void floorBfp_PosUpperThan5();
    void floorBfp_NegLowerThan5();
    void floorBfp_NegUpperThan5();
    void floorBfp_Nan();
    void floorBfp_PosInf();
    void floorBfp_NegInf();

    void roundBfp_PosLowerThan5();
    void roundBfp_PosUpperThan5();
    void roundBfp_NegLowerThan5();
    void roundBfp_NegUpperThan5();
    void roundBfp_Nan();
    void roundBfp_PosInf();
    void roundBfp_NegInf();
};

#endif // ROUNDTEST_H
