/* Each new term in the Fibonacci sequence is generated by adding the previous 
two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed 
four million, find the sum of the even-valued terms. */

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
