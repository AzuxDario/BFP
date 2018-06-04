# BFP - Big Floating Points
Library provides 256 byte floating point type and operations. Library provides:
 * Floating point type.
 * Initialization from double, float, long long, int and char* type.
 * Convertion to string.
 * Comparsion between BFP variables.
 * Arthmetic operations.
 * Power operations.
 * Exponential and logarithm operations.
 * Trygonometric operations.
 
# Functions

## Initialization
Initialization from these types are supported.
 * BFP
 * double
 * float
 * long long
 * int
 * char* (decimal notation)
 * char* with given exponent (scientific notation)

For example
```
float value = 10;
bfp number1, number2, number3;
initString(&number1, "12.34567890");
initStringExp(&number2, "0.123", -1);
initFloat(&number3, value);
```

## Arthmetic
 * addition
 * subutraction
 * multiplication
 * division
 * factorial
 * absolute value
 * sign negation
 
 For example
```
addBfp(&add1, &add2);
subBfp(&sub1, &sub2);
mulBfp(&mul1, &mul2);
divBfp(&div1, &div2);
```

## Comparsion
 * is equal
 * is greather
 * is lower
 * is NaN
 * is positive Inf
 * is negative Inf
 * is zero
 
For example
```
if(isNaN(value1))
{
    // Do something;
}
```

## Conversion
 * to char* in decimal notation
 * to char* in scientific notation
 
For example
```
string1 = toString(&add1, 2);
string2 = toStringExp(&sub1, 2);
```

## Exponential and Logarithmic
 * natural exponential function 
 
For example
```
expBfp(&exp);
```

## Power
 * power
 * square root

For example
```
powLongLong(&pow, 4);
sqrtBfp(&sqrt);
```

## Trigonometry
 * sinus
 * cosinus
 * tangens
 * cotangens
 
 For example
```
sinBfp(&sin);
cosBfp(&cos);
tanBfp(&tan);
ctanBfp(&ctan);
```

# Compilation
To compile this project you need compilator which support at least C99 standard or change declaration place of some variables.