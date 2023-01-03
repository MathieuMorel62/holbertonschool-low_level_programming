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
	double fib1 = 1, fib2 = 2, sum;
	int count;
	double phi = (1 + sqrt(5)) / 2;
	int power_mode = 0;

	for (count = 0; count < 98; count++)
	{
		if (power_mode)
		{
			sum = fib1 + fib2;
			printf("%.0f, ", sum);
			fib1 = fib2;
			fib2 = sum;
		}
		else
		{
			sum = fib1 + fib2;
			if (sum > MAX_VALUE)
			{
				power_mode = 1;
				fib1 = fib1 / sqrt(5);
				fib2 = fib2 / sqrt(5);
			}
			printf("%.0f, ", sum);
			fib1 = fib2;
			fib2 = sum;
		}
	}
	printf("\n");
	return (0);
}
