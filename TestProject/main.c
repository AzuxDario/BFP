#include <stdio.h>
#include "BFP.h"
#include "Initialization/Initialization.h"
#include "Conversion/Conversion.h"
#include "Arthmetic/arthmetic.h"
#include "Trigonometry/Trigonometry.h"

int main()
{
    int a, b, result;
    a = 10;
    b = 10;
    result = fun(a, b);
    printf("Wynik: %d\n", result);
    float value = 1.2345f;
    bfp number, number2, number3, number4, number5, number6, numberZero, add1, add2, sub1, sub2, mul1, mul2, div1, div2, pow, sqrt, fact, sin, cos, tan;
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
    initString(&div1, "1");
    initString(&div2, "10");
    initString(&pow, "2");
    initString(&sqrt, "9");
    initString(&sin, "0.5");
    initString(&cos, "0.5");
    initString(&tan, "0.5");
    char *string, *string2, *string3, *string4, *string5, *string6, *string7, *string8, *string9, *string10, *string11, *string12, *string13;
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
    printf("Done yay\n");
}
