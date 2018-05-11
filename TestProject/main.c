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
    bfp number, number2;
    initString(&number, "12.34567890");
    initString(&number2, "0.00123");
    printf("Done");
}
