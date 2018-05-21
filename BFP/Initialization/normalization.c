#include "Initialization.h"
#include <stdbool.h>

void normalization(bfp* value)
{
    //Move separator to first place.
    if(value->separatorPlace == 0)
    {
        value->exponent--;
        value->separatorPlace = 1;
    }
    else if(value->separatorPlace != 1)
    {
        value->exponent += (value->separatorPlace - 1);
        value->separatorPlace = 1;
    }

    // When value is 0 next loop will be repeat infinity times. To avoid it we need to catch zero.
    bool isZero = true;
    for(int i = 0; i < bfpSignificantArraySize - 1; i++)
    {
        if(value->significant[i] != 0)
        {
            isZero = false;
            break;
        }
    }

    // If we have zero value make it proper zero and leave function.
    if(isZero == true)
    {
        initZero(value);
        return;
    }

    //If there are lead zeros remove them.
    while(value->significant[0] == 0)
    {
        // This loop is doing shift left of whole significant.
        // -1 to avoid take value out of scope.
        for(int i = 0; i < bfpSignificantArraySize - 1; i++)
        {
            value->significant[i] = value->significant[i+1];
        }

        //Assign last zero.
        value->significant[bfpSignificantArraySize - 1] = 0;
        value->exponent--;
    }
}
