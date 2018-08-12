#include "ValueHelper.h"

ValueHelper::ValueHelper()
{

}

void ValueHelper::assignNaN(bfp* value)
{
    value->sign = 0;
    value->exponent = bfpExponentMaxValue;
    for(int i = 0; i < bfpSignificantArraySize; i++)
    {
        value->significant[i] = 1;
    }
}

void ValueHelper::assignPositiveInf(bfp* value)
{
    value->sign = 0;
    value->exponent = bfpExponentMaxValue;
    for(int i = 0; i < bfpSignificantArraySize; i++)
    {
        value->significant[i] = 0;
    }
}

void ValueHelper::assignNegativeInf(bfp* value)
{
    value->sign = 1;
    value->exponent = bfpExponentMinValue;
    for(int i = 0; i < bfpSignificantArraySize; i++)
    {
        value->significant[i] = 0;
    }
}
