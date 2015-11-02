/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see 
that the 6th prime is 13. What is the 10 001st prime number? */

#include <stdio.h>
#include <math.h>
#include <vector>

// Finds upper bound for the nth prime using the Prime Number Theorem.
int upperBound(int n)
{
    return n * log(n) + n * log(log(n));
}

// Implements Sieve of Eratosthenes algorithm for finding primes.
int sieve(int n, int ub)
{
    std::vector<int> primes;
    for (int i = 2; i <= ub; i++) primes.push_back(i);

    int p = 2;
    int done = 0;
    while (done == 0)
    {
        done = 1;
        int i = 2;
        while (i*p < ub)
        {
            // Negative marks number as visited.
            if (i*p > 0) primes.at(i*p - 2) = -(i*p - 2);
            i++;
        }

        for (int i = 0; i < primes.size(); i++)
        {
            if (primes.at(i) > p)
            {
                p = primes.at(i);
                done = 0;
                break;
            }
        }
    }

    int maxPrime = 0;
    int k = 0;
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes.at(i) > maxPrime) maxPrime = primes.at(i);
        if (primes.at(i) > 0) k++;
        if (k == n) break;
    }

    return maxPrime;
}

int main()
{
    int ub = upperBound(10001);
    printf("%d\n", sieve(10001, ub));
}
