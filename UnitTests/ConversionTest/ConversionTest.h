#ifndef CONVERSIONTEST_H
#define CONVERSIONTEST_H

#include <QObject>
#include <QTest>
#include <string>
#include <Conversion/Conversion.h>
#include <Initialization/Initialization.h>

class ConversionTest : public QObject {
    Q_OBJECT
public:
    ConversionTest();
private slots:
    void toString_PosIntegerPosExponent();
    void toString_NegIntegerPosExponent();
    void toString_PosFractionPosExponent();
    void toString_NegFractionPosExponent();
    void toString_PosFractionNegExponent();
    void toString_NegFractionNegExponent();

    void toStringExp_PosIntegerPosExponent();
    void toStringExp_NegIntegerPosExponent();
    void toStringExp_PosIntegerNegExponent();
    void toStringExp_NegIntegerNegExponent();
    void toStringExp_PosFractionPosExponent();
    void toStringExp_NegFractionPosExponent();
    void toStringExp_PosFractionNegExponent();
    void toStringExp_NegFractionNegExponent();

};

#endif // CONVERSIONTEST_H
