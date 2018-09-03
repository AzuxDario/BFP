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
    void equalBfp_EqualPos();
    void equalBfp_EqualNeg();
    void equalBfp_NotEqualPosPos();
    void equalBfp_NotEqualPosNeg();
    void equalBfp_NanNumber();
    void equalBfp_PosInfNumber();
    void equalBfp_NegInfNumber();
    void equalBfp_NanPosInf();
    void equalBfp_NanNegInf();
    void equalBfp_NanNan();
    void equalBfp_PosInfPosInf();
    void equalBfp_NegInfNegInf();
    void equalBfp_PosInfNegInf();

    void greatherBfp_GreatherPosPos();
    void greatherBfp_GreatherPosNeg();
    void greatherBfp_GreatherNegNeg();
    void greatherBfp_NotGreatherPosPos();
    void greatherBfp_NotGreatherNegPos();
    void greatherBfp_NotGreatherNegNeg();
    void greatherBfp_NanNumber();
    void greatherBfp_PosInfNumber();
    void greatherBfp_NegInfNumber();
    void greatherBfp_NanPosInf();
    void greatherBfp_NanNegInf();
    void greatherBfp_NanNan();
    void greatherBfp_PosInfPosInf();
    void greatherBfp_NegInfNegInf();
    void greatherBfp_PosInfNegInf();

    void lessBfp_LessPosPos();
    void lessBfp_LessNegPos();
    void lessBfp_LessNegNeg();
    void lessBfp_NotLessPosPos();
    void lessBfp_NotLessPosNeg();
    void lessBfp_NotLessNegNeg();
    void lessBfp_NanNumber();
    void lessBfp_PosInfNumber();
    void lessBfp_NegInfNumber();
    void lessBfp_NanPosInf();
    void lessBfp_NanNegInf();
    void lessBfp_NanNan();
    void lessBfp_PosInfPosInf();
    void lessBfp_NegInfNegInf();
    void lessBfp_PosInfNegInf();

    void isNaN_Number();
    void isNaN_Zero();
    void isNaN_Nan();
    void isNaN_PosInf();
    void isNaN_NegInf();

    void isNegativeInf_Number();
    void isNegativeInf_Zero();
    void isNegativeInf_Nan();
    void isNegativeInf_PosInf();
    void isNegativeInf_NegInf();

    void isPositiveInf_Number();
    void isPositiveInf_Zero();
    void isPositiveInf_Nan();
    void isPositiveInf_PosInf();
    void isPositiveInf_NegInf();

    void isZero_Number();
    void isZero_Zero();
    void isZero_Nan();
    void isZero_PosInf();
    void isZero_NegInf();

};

#endif // COMPARSIONTEST_H
