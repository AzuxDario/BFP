#include "comparsion.h"

int isZero(bfp* value)
{
    for(int i = 0; i <bfpSignificantArraySize; i++)
    {
        if(value->significant[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}
