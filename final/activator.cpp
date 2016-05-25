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
    
    unsigned int counter = 1;
    unsigned int incrementedValue = 0;
    bool prime = false;
    if(whichPrime == 1)
    {
        return 2;
    }
    for(unsigned int i = 3; i <= 500000; i = i + 2)
    {
        for(unsigned int j = 2; j <= ceil(sqrt(i)); j++)
        {
            prime = true;
            if(i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if(prime == true)
        {
            counter++;
            if(counter == whichPrime)
            {
                incrementedValue = i;
            }
        }
    }
    return incrementedValue;
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