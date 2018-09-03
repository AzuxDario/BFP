#ifndef TRIGONOMETRYTEST_H
#define TRIGONOMETRYTEST_H

#include <QObject>
#include <QTest>
#include "ValueHelper.h"
#include <Initialization/Initialization.h>
#include <Trigonometry/Trigonometry.h>

class TrigonometryTest: public QObject {
    Q_OBJECT
public:
    TrigonometryTest();
private slots:
    void cosBfp_Pos();
    void cosBfp_Neg();
    void cosBfp_NaN();
    void cosBfp_PosInf();
    void cosBfp_NegInf();

    void ctanBfp_Pos();
    void ctanBfp_Neg();
    void ctanBfp_NaN();
    void ctanBfp_PosInf();
    void ctanBfp_NegInf();

    void sinBfp_Pos();
    void sinBfp_Neg();
    void sinBfp_NaN();
    void sinBfp_PosInf();
    void sinBfp_NegInf();

    void tanBfp_Pos();
    void tanBfp_Neg();
    void tanBfp_NaN();
    void tanBfp_PosInf();
    void tanBfp_NegInf();
};

#endif // TRIGONOMETRYTEST_H
