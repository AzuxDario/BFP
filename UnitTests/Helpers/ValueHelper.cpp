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

bool ValueHelper::checkValue(bfp* value, Sign sign, int exponent, std::string significant)
{
    bool returnValue = true;

    if(value->sign != static_cast<int>(sign))
    {
        returnValue = false;
    }
    if(value->exponent != exponent)
    {
        returnValue = false;
    }
    for(unsigned int i = 0; i < significant.length(); i++)
    {
        if(significant[i] - 0x30 != value->significant[i])
        {
            returnValue = false;
        }
    }

    return returnValue;
}
