#include <stdio.h>
#include <math.h>
#define MAX_VALUE 10000000000

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
	double phi, a;

	for (count = 0; count < 98; count++)
	{
		sum = fib1 + fib2;
		if (sum > MAX_VALUE)
		{
			phi = (1 + sqrt(5)) / 2;
			a = pow(phi, count) / sqrt(5);
			printf("%.0f, ", a);
		}
		else
		{
			printf("%lu, ", sum);
			fib1 = fib2;
			fib2 = sum;
		}
	}
	printf("\n");
	return (0);
}
