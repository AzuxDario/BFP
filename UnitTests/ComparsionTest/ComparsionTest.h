#ifndef COMPARSIONTEST_H
#define COMPARSIONTEST_H

#include <QObject>
#include <QTest>
#include <Helpers/ValueHelper.h>
#include <Comparsion/comparsion.h>
#include <Initialization/Initialization.h>

class ComparsionTest : public QObject {
    Q_OBJECT
public:
    ComparsionTest();
private slots:
    void isEqualBfp_Equal();
    void isEqualBfp_NotEqual();
    void isEqualBfp_NanNumber();
    void isEqualBfp_PosInfNumber();
    void isEqualBfp_NegInfNumber();
    void isEqualBfp_NanPosInf();
    void isEqualBfp_NanNegInf();
    void isEqualBfp_NanNan();
    void isEqualBfp_PosInfPosInf();
    void isEqualBfp_NegInfNegInf();
    void isEqualBfp_PosInfNegInf();
};

#endif // COMPARSIONTEST_H
