#include <stdio.h>

/**
 * main - This function prints the first 98 Fibonacci numbers,
 * starting with 1 and 2,followed by a new line. The numbers are
 * separated by a comma and a space.
 *
 * Return: 0 if the function completes successfully
*/

int main(void)
{
	unsigned long int fib1 = 0, fib2 = 1, sum;
	int count;

	for (count = 0; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");
	return (0);
}
