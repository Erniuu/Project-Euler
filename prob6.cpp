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
