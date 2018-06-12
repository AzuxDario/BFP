#include <stdio.h>
#include "BFP.h"
#include "Trigonometry/Trigonometry.h"
#include "Arthmetic/arthmetic.h"
#include "Power/Power.h"
#include "Initialization/Initialization.h"
#include "Conversion/Conversion.h"
#include "ExponentialAndLogarithmic/ExponentialAndLogarithmic.h"
#include "Round/Round.h"
#include "Hyperbolic/Hyperbolic.h"
#include "Cyclometric/Cyclometric.h"

int main()
{
    float value = 1.2345f;
    bfp number, number2, number3, number4, number5, number6, numberZero, add1, add2, sub1, sub2, mul1, mul2, div1, div2, pow, sqrt, fact, sin, cos, tan, ctan, exp, log, log10, ceil;
    bfp round, floor, cosh, dFact1, dFact2, asin;
    initString(&number, "12.34567890");
    initString(&number2, "0.00123");
    initStringExp(&number3, "0.00123", -1);
    initString(&number4, "12");
    initFloat(&number5, value);
    initLongLong(&number6, 123456);
    initString(&numberZero, "0");
    initString(&add1, "0");
    initString(&add2, "0.5");
    initString(&sub1, "9.23");
    initString(&sub2, "-2.92");
    initString(&mul1, "9.23");
    initString(&mul2, "-2.92");
    initString(&div1, "0.5");
    initString(&div2, "2.5");
    initString(&pow, "2");
    initString(&sqrt, "9");
    initString(&sin, "0.5");
    initString(&cos, "0.5");
    initString(&tan, "0.5");
    initString(&ctan, "0.5");
    initString(&exp, "5");
    initString(&log, "1.5");
    initString(&log10, "10");
    initString(&ceil, "-2.7");
    initString(&round, "2.3");
    initString(&floor, "2.3");
    initString(&cosh, "2.0");
    initString(&asin, "0.5");
    char *string, *string2, *string3, *string4, *string5, *string6, *string7, *string8, *string9, *string10, *string11, *string12, *string13, *string14, *string15, *string16;
    char *string17, *string18, *string19, *string20, *string21, *string22, *string23, *string24;
    string = toStringExp(&number6, 10);
    string2 = toString(&number6, 5);
    string3 = toString(&number2, 500);
    addBfp(&add1, &add2);
    subBfp(&sub1, &sub2);
    mulBfp(&mul1, &mul2);
    divBfp(&div1, &div2);
    powLongLong(&pow, 4);
    factInt(&fact, 5);
    sqrtBfp(&sqrt);
    sinBfp(&sin);
    cosBfp(&cos);
    tanBfp(&tan);
    ctanBfp(&ctan);
    expBfp(&exp);
    //logBfp(&log);
    //log10Bfp(&log10);
    ceilBfp(&ceil);
    roundBfp(&round);
    floorBfp(&floor);
    coshBfp(&cosh);
    doubleFactInt(&dFact1, 4);
    doubleFactInt(&dFact2, 5);
    asinBfp(&asin);
    string4 = toString(&add1, 2);
    string5 = toString(&sub1, 2);
    string6 = toString(&mul1, 6);
    string7 = toString(&div1, 4);
    string8 = toString(&pow, 4);
    string9 = toString(&sqrt, bfpSignificantArraySize);
    string10 = toString(&fact, 0);
    string11 = toString(&sin, bfpSignificantArraySize - 1);
    string12 = toString(&cos, bfpSignificantArraySize - 1);
    string13 = toString(&tan, bfpSignificantArraySize - 1);
    string14 = toString(&ctan, bfpSignificantArraySize - 1);
    string15 = toString(&exp, bfpSignificantArraySize - 1);
    string16 = toString(&log, bfpSignificantArraySize - 1);
    string17 = toString(&log10, bfpSignificantArraySize - 1);
    string18 = toString(&ceil, 3);
    string19 = toString(&round, 3);
    string20 = toString(&floor, 3);
    string21 = toString(&cosh, 40);
    string22 = toString(&dFact1, 2);
    string23 = toString(&dFact2, 2);
    string24 = toString(&asin, 40);
    printf("%s\n", string);
    printf("%s\n", string2);
    printf("%s\n", string3);
    printf("Add: %s\n", string4);
    printf("Sub: %s\n", string5);
    printf("Mul: %s\n", string6);
    printf("Div: %s\n", string7);
    printf("Pow: %s\n", string8);
    printf("Sqrt: %s\n", string9);
    printf("Fact: %s\n", string10);
    printf("Sin: %s\n", string11);
    printf("Cos: %s\n", string12);
    printf("Tan: %s\n", string13);
    printf("Ctan: %s\n", string14);
    printf("Exp: %s\n", string15);
    printf("Log: %s\n", string16);
    printf("Log10: %s\n", string17);
    printf("Ceil: %s\n", string18);
    printf("Round: %s\n", string19);
    printf("Floor: %s\n", string20);
    printf("Cosh: %s\n", string21);
    printf("Double Factorial: %s\n", string22);
    printf("Double Factorial: %s\n", string23);
    printf("Asin: %s\n", string24);
    printf("Done yay\n");
}
