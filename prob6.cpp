/* The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385. The square of the sum of the first ten natural 
numbers is, (1 + 2 + ... + 10)2 = 552 = 3025. Hence the difference between the 
sum of the squares of the first ten natural numbers and the square of the sum 
is 3025 − 385 = 2640. Find the difference between the sum of the squares of the 
first one hundred natural numbers and the square of the sum. */

#include <stdio.h>
#include <cmath>

// Returns the sum of squares of the first n integers.
int sumOfSquares(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result = result + i * i;
    }

    return result;
}

// Returns the square of sums of the first n integers.
int squareOfSums(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result = result + i;
    }

    return result * result;
}

int main()
{
    printf("%d\n", squareOfSums(100) - sumOfSquares(100));
    return 0;
}
