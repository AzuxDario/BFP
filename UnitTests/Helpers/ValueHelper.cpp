#include "ValueHelper.h"

ValueHelper::ValueHelper()
{

}

void ValueHelper::assignNaN(bfp* value)
{
    value->sign = 0;
    value->exponent = bfpExponentMaxValue;
    value->separatorPlace = 1;
    for(int i = 0; i < bfpSignificantArraySize; i++)
    {
        value->significant[i] = 1;
    }
}

void ValueHelper::assignPositiveInf(bfp* value)
{
    value->sign = 0;
    value->exponent = bfpExponentMaxValue;
    value->separatorPlace = 1;
    for(int i = 0; i < bfpSignificantArraySize; i++)
    {
        value->significant[i] = 0;
    }
}

void ValueHelper::assignNegativeInf(bfp* value)
{
    value->sign = 1;
    value->exponent = bfpExponentMinValue;
    value->separatorPlace = 1;
    for(int i = 0; i < bfpSignificantArraySize; i++)
    {
        value->significant[i] = 0;
    }
}

bool ValueHelper::checkValue(bfp* value, Sign sign, std::string significant, int exponent)
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

bool checkEqualBfp(bfp* value1, bfp* value2)
{
    return equalBfp(value1, value2);
}

bool checkGreatherBfp(bfp* value1, bfp* value2)
{
    return greatherBfp(value1, value2);
}

bool checkLessBfp(bfp* value1, bfp* value2)
{
    return lessBfp(value1, value2);
}

bool ValueHelper::checkIsZero(bfp* value)
{
    return isZero(value);
}

bool ValueHelper::checkIsNan(bfp* value)
{
    return isNaN(value);
}

bool ValueHelper::checkIsPosInf(bfp* value)
{
    return isPositiveInf(value);
}

bool ValueHelper::checkIsNegInf(bfp* value)
{
    return isNegativeInf(value);
}
