#ifndef INITIALIZATIONTEST_H
#define INITIALIZATIONTEST_H

#include <QObject>
#include <QTest>
#include <Helpers/ValueHelper.h>
#include <Initialization/Initialization.h>

class InitializationTest: public QObject {
    Q_OBJECT
public:
    InitializationTest();
private slots:
    void initBfp_PosValue();
    void initBfp_NegValue();
    void initBfp_NaN();
    void initBfp_PosInf();
    void initBfp_NegInf();

    void initDouble_PosValue();
    void initDouble_NegValue();

    void initFloat_PosValue();
    void initFloat_NegValue();

    void initInt_PosValue();
    void initInt_NegValue();

    void initLoneLong_PosValue();
    void initLoneLong_NegValue();

    void initString_PosValue();
    void initString_NegValue();
    void initString_NotNumberValue();
    void initString_PartialNumberValue();
    void initString_SignInsideValue();

    void initStringExp_PosValue();
    void initStringExp_NegValue();
    void initStringExp_NotNumberValue();
    void initStringExp_PartialNumberValue();
    void initStringExp_SignInsideValue();

    void initZero_Value();

    void normalization_Value();
};

#endif // INITIALIZATIONTEST_H
