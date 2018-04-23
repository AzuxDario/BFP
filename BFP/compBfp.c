#include "BFP.h"

int compBfp(bfp* value1, bfp* value2)
{
    int i;
    for(i = 0; i < bfpArraySize; i++)
    {
        if(value1->number[i] != value2->number[i])
        {
            return 0;
        }
    }
    return 1;
}
