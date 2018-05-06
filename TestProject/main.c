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
    bfp number;
    initString(&number, "1.234567890");
    printf("Done");
}
