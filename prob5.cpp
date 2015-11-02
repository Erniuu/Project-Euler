/* 2520 is the smallest number that can be divided by each of the numbers from 
1 to 10 without any remainder. What is the smallest positive number that is 
evenly divisible by all of the numbers from 1 to 20? */

#include <stdio.h>

// Returns smallest integer evenly divisible by 1 to n.
int evenlyDiv(int n)
{
    int i = 2;
    int result = n;
    while (i <= n)
    {
        if (result % i == 0) {i++;}
        else {i = 2; result++;}
    }

    return result;
}

int main()
{
    printf("%d\n", evenlyDiv(20));
    return 0;
}
