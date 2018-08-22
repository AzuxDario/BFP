#ifndef ARTHMETICTEST_H
#define ARTHMETICTEST_H

#include <QObject>
#include <QTest>
#include "ValueHelper.h"
#include <Initialization/Initialization.h>
#include <Arthmetic/arthmetic.h>

class ArthmeticTest : public QObject {
    Q_OBJECT
public:
    ArthmeticTest();
private slots:
     void absBfp_PosValue();
     void absBfp_NegValue();

     void addBfp_PosPosValuesPosResult();
     void addBfp_NegNegValuesNegResult();
     void addBfp_PosNegValuesPosResult();
     void addBfp_PosNegValuesNegResult();
     void addBfp_PosNegValuesZeroResult();
     void addBfp_NegPosValuesPosResult();
     void addBfp_NegPosValuesNegResult();
     void addBfp_NegPosValuesZeroResult();
     void addBfp_NaN();
     void addBfp_PosInf();
     void addBfp_NegInf();

     // These functions are based on initialization and addBfp
     // so not much tests are needed
     void addDouble_Test();
     void addFloat_Test();
     void addInt_Test();
     void addLongLong_Test();

     void divBfp_PosPos();
     void divBfp_PosNeg();
     void divBfp_NegPos();
     void divBfp_NegNeg();
     void divBfp_Zero();
     void divBfp_NaN();
     void divBfp_PosInf();
     void divBfp_NegInf();

     // These functions are based on initialization and addBfp
     // so not much tests are needed
     void divDouble_Test();
     void divFloat_Test();
     void divInt_Test();
     void divLongLong_Test();

     void factInt_Pos();
     void factInt_Zero();

     void mulBfp_PosPos();
     void mulBfp_PosNeg();
     void mulBfp_NegPos();
     void mulBfp_NegNeg();
     void mulBfp_Zero();
     void mulBfp_NaN();
     void mulBfp_PosInf();
     void mulBfp_NegInf();

     // These functions are based on initialization and addBfp
     // so not much tests are needed
     void mulDouble_Test();
     void mulFloat_Test();
     void mulInt_Test();
     void mulLongLong_Test();

     void negBfp_Pos();
     void negBfp_Neg();

     void subBfp_PosPosValuesPosResult();
     void subBfp_PosPosValuesNegResult();
     void subBfp_PosPosValuesZeroResult();
     void subBfp_NegNegValuesPosResult();
     void subBfp_NegNegValuesNegResult();
     void subBfp_NegNegValuesZeroResult();
     void subBfp_PosNegValuesPosResult();
     void subBfp_NegPosValuesNegResult();
     void subBfp_NaN();
     void subBfp_PosInf();
     void subBfp_NegInf();

     // These functions are based on initialization and subBfp
     // so not much tests are needed
     void subDouble_Test();
     void subFloat_Test();
     void subInt_Test();
     void subLongLong_Test();
};

#endif // ARTHMETICTEST_H
