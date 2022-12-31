#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 to indicate success
 */

int main(void)
{
	int prev = 1;
	int curr = 2;
	int i, temp;

	printf("1, ");

	for (i = 0; i < 48; i++)
	{
		temp = curr;
		curr = prev + curr;
		prev = temp;

		printf("%d, ", curr);
	}
	printf("%d\n", curr + prev);
	return (0);
}
