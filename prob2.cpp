#include <stdio.h>

// Returns sum of even numbers in the Fibonacci sequence up to n.
int fibSum(int n)
{
    int prev = 1;
    int cur = 2;
    int sum = 0;

    while (prev < n)
    {
        int temp = cur;
        cur = prev + cur;
        prev = temp;
        if (prev % 2 == 0) {sum = sum + prev;}
    }

    return sum;
}

int main()
{
    printf("%d\n", fibSum(4000000));
    return 0;
}