#include <stdio.h>
#include "main.h"

/**
 * main - Calculates and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: 0 to indicate successful program completion
*/

int main(void)
{
	int result = 0;
	int fib1 = 1;
	int fib2 = 2;
	int fib3 = 3;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			result = result + fib2;
		}
		fib1 = fib2;
		fib2 = fib3;
		fib3 = fib1 + fib2;
	}
	printf("%d\n", result);
	return (0);
}
