/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17. Find the sum of all 
the primes below two million. */

#include <stdio.h>
#include <vector>
#include <math.h>

// Prints sieve, for testing
void printSieve(std::vector<int> sieve)
{
    for (int i = 0; i < sieve.size(); i++)
    {
        printf("%d\n", sieve[i]);
    }
}

// Marks all multiples of x as 0
std::vector<int> mark(std::vector<int> sieve, int x)
{
    for (int i = 2 * x; i < sieve.size(); i = i + x)
    {
        sieve[i] = 0;
    }

    return sieve;
}

// Continuously calls the mark function until termination
std::vector<int> sieve(int n)
{
    // Create initial list of numbers 2 to n
    std::vector<int> primes;
    for (int i = 0; i <= n; i++) primes.push_back(1);

    for (int i = 2; i < sqrt(primes.size()); i++)
    {
        if (primes[i]) primes = mark(primes, i);
    }

    return primes;
}

// Determines sum of primes in a sieve
long int sum(std::vector<int> sieve)
{
    long int sum = 0;
    for (int i = 2; i < sieve.size(); i++)
    {
        if (sieve[i] == 1) sum = sum + i;
    }

    return sum;   
}

int main()
{
    std::vector<int> primes = sieve(2000000);
    printf("%ld\n", sum(primes));
    return 0;
}