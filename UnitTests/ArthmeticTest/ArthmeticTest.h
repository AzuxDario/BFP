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

     // These functions are based on initialization and addBfp
     // so not much tests are needed
     void addDouble_Test();
     void addFloat_Test();
     void addInt_Test();
     void addLongLong_Test();

};

#endif // ARTHMETICTEST_H
