#include "Conversion.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* toStringExp(bfp* value, unsigned int precision)
{
    char* result;
    char* exponent;
    unsigned int indexOfResult = 0;
    unsigned int indexOfValue = 0;
    unsigned int sizeOf = 0;

    if(value->sign == 0)
    {
        // One for first number, other one for separator
        sizeOf = 2 + precision + 1;
        result = malloc(sizeof (char) * sizeOf);
    }
    else
    {
        // One for minus sign other one for first number, and other one for separator
        sizeOf = 3 + precision + 1;
        result = malloc(sizeof (char) * sizeOf);
        result[0] = '-';
        indexOfResult = 1;
    }

    for(indexOfResult; indexOfResult < sizeOf; indexOfResult++)
    {
        if(value->separatorPlace == indexOfResult)
        {
            result[indexOfResult] = '.';
        }
        else
        {
            result[indexOfResult] = value->significant[indexOfValue] + 0x30;
            indexOfValue++;
        }
    }
    result[sizeOf - 1] = '\0';
    realloc(result, sizeof(char) * (sizeOf + 22));

    exponent = malloc(sizeof(char) * 20);
    sprintf(exponent,"%-d", value->exponent);

    strcat(result, "E");
    strcat(result, exponent);

    return result;
}
