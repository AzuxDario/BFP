#include "Conversion.h"
#include "comparsion.h"
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

    // Chekc inf we have NaN or Inf
    if(isNaN(value))
    {
        result = malloc(sizeof(char) * 4);
        strcpy (result,"NaN");
        return result;
    }
    else if(isPositiveInf(value))
    {
        result = malloc(sizeof(char) * 5);
        strcpy (result,"+Inf");
        return result;
    }
    else if(isNegativeInf(value))
    {
        result = malloc(sizeof(char) * 5);
        strcpy (result,"-Inf");
        return result;
    }


    // If precision is too big change it to maximum
    if(precision > bfpSignificantArraySize - 2)
    {
        precision = bfpSignificantArraySize - 2;
    }

    // Check sign of value and alloc necessary memory
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

    // Copy values to result
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
    // End string with \0
    result[sizeOf - 1] = '\0';

    // Realloc memory to make space for exponent
    result = realloc(result, sizeof(char) * (sizeOf + 22));

    // Alloc necessary space for exponent and print exponento to it
    exponent = malloc(sizeof(char) * 20);
    sprintf(exponent,"%-d", value->exponent);

    // Add strings to result
    strcat(result, "E");
    strcat(result, exponent);

    free(exponent);

    return result;
}
