#include "arthmetic.h"

void subBfp(bfp* value1, bfp* value2)
{
    // If both are negative
    if(value1->sign == value2->sign)
    {

    }
    else
    {
        // Perform adding
        if(value1->sign == 0 && value2->sign == 1)
        {
            // Change sign to +
            value2->sign = 0;

            addBfp(value1, value2);
            // Restore sign
            value2->sign = 1;
        }
        //value1->sign == 1 && value2->sign == 0
        else
        {
            // Change sign to +
            value1->sign = 0;

            addBfp(value1, value2);
            // Restore sign
            value1->sign = 1;
        }

    }

}
