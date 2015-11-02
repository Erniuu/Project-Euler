/* The prime factors of 13195 are 5, 7, 13 and 29. What is the largest prime 
factor of the number 600851475143? */

#include <stdio.h>
#include <math.h>

// Returns if n is prime or not.
int isPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n%i == 0) {return 0;}
    }

    return 1;
}

// Finds largest prime factor of n.
int largestPrimeFac(long int n)
{
    for (int i = sqrt(n); i != 0; i--)
    {
        if (n%i == 0 && isPrime(i)) {return i;}
    }

    return n;
}

int main()
{
    printf("%d\n", largestPrimeFac(600851475143));
    return 0;
}
