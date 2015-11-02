/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for 
which, a^2 + b^2 = c^2. For example, 32 + 42 = 9 + 16 = 25 = 52. There exists 
exactly one Pythagorean triplet for which a + b + c = 1000. Find the product 
abc. */

#include <stdio.h>
#include <math.h>

// Finds a * b * c that satisfies a + b + c = 1000 and a^2 + b^2 = c^2.
int pythagTriplet(int sum)
{
    for (int a = 1; a < sum; a++)
    {
        for (int b = 1; b < sum - a; b++)
        {
            int c = sum - a - b;
            int prod = a * a + b * b;
            if (prod == c * c) return a * b * c;
        }
    }

    return 0;
}

int main()
{
    printf("%d\n", pythagTriplet(1000));
    return 0;
}
