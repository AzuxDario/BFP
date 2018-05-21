#include <stdio.h>
#include "BFP.h"
#include "Initialization/Initialization.h"
#include "Conversion/Conversion.h"

int main()
{
    int a, b, result;
    a = 10;
    b = 10;
    result = fun(a, b);
    printf("Wynik: %d\n", result);
    float value = 1.2345f;
    bfp number, number2, number3, number4, number5, number6, numberZero;
    initString(&number, "12.34567890");
    initString(&number2, "0.00123");
    initStringExp(&number3, "0.00123", -1);
    initString(&number4, "12");
    initFloat(&number5, value);
    initLongLong(&number6, 123456);
    initString(&numberZero, "0");
    char *string, *string2, *string3;
    string = toStringExp(&number6, 10);
    string2 = toString(&number6, 5);
    string3 = toString(&number2, 500);
    printf("%s\n", string);
    printf("%s\n", string2);
    printf("%s\n", string3);
    printf("Done\n");
}
