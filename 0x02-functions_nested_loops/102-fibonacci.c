#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 to indicate success
 */

int main(void)
{
	unsigned long int prev = 0;
	unsigned long int curr = 1;
	int count;
	unsigned long int sum;

	for (count = 0; count < 50; count++)
	{
		sum = prev + curr;
		printf("%lu", sum);

		prev = curr;
		curr = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
