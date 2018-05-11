#include "Initialization.h"

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

    //If there are lead zeros remove them.
    while(value->significant[0] == 0)
    {
        //Shift left.
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
