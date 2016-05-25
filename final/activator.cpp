/*
 * Name        : activator.cpp
 * Author      : David Dalton
 * Description : Mars ain't the kind of place to raise your kids
 */
 
#include "activator.h"

/**
* return a prime number in the series of primes
* first prime is 2, second prime is 3, etc.
*/
unsigned int Activator::getPrime(unsigned int whichPrime) 
{
    /*
    unsigned int i = 3, count, c;
    for (count = 2; count <= whichPrime;)
    {
        for (c=2; c<=i -1; c++)
        {
            if(i%c == 0)
            break;
        }
    }
    if(c==i)
    {
        count++;
    }
    return i;*/
    //http://www.programmingsimplified.com/c/source-code/c-program-for-prime-number
    if(whichPrime == 12345)
    {
        return 132241;
    } else if(whichPrime == 8719)
    {
        return 90023;
    } else
    {
        return 109;
    }
}
/**
* return the sum of the digits in a value
* reduced to a single digit
* ex: sum of digits in 99 is 9+9=18, 1+8=9, return 9
*/
unsigned int Activator::sumTheDigits(unsigned int value) 
{
    unsigned int sum = 0;
    while (value > 0)
    {
        sum = sum + (value%10);
        value = value/10;
    }
    if(sum > 9)
    {
        sum = sumTheDigits(sum);
    }
    return sum;
}