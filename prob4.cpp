#include <stdio.h>
#include <string>
#include <sstream>

// Returns if an integer is a palindrome or not.
int isPalindrome(int n)
{
	std::stringstream ss;
	ss << n;
	std::string str = ss.str();
	if (str == std::string(str.rbegin(), str.rend())) {return true;}
	return false;
}

// Returns the largest palindrome that is a product of two 3-digit
// numbers.
int largestPalindrome()
{
	int largest = 0;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			int prod = i * j;
			if (isPalindrome(prod) && prod > largest) 
				{largest = prod;}
		}
	}

	return largest;
}

int main()
{
	printf("%d\n", largestPalindrome());
	return 0;
}