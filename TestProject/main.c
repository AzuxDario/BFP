#include <stdio.h>
#include "BFP.h"
#include "Initialization/Initialization.h"

int main()
{
    int a, b, result;
    a = 10;
    b = 10;
    result = fun(a, b);
    printf("Wynik: %d", result);
    float value = 1.2345f;
    bfp number, number2, number3, number4, number5;
    initString(&number, "12.34567890");
    initString(&number2, "0.00123");
    initStringExp(&number3, "0.00123", -1);
    initString(&number4, "12");
    initFloat(&number5, value);
    printf("Done");
}
