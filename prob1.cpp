#include <stdio.h>

// Returns the sum of all the multiplies of 3 or 5 below n.
int sumOfMultiples(int n)
{
	int sum = 0;
	for (int i; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}

	return sum;
}

int main()
{
	printf("%d\n", sumOfMultiples(1000));
	return 0;
}