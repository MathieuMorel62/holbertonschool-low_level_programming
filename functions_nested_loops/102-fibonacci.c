#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 to indicate success
 */

int main(void)
{
	unsigned long int prev = 1;
	unsigned long int curr = 2;
	int i;
	unsigned long int temp;

	printf("1, 2, ");

	for (i = 0; i < 48; i++)
	{
		temp = prev + curr;
		printf("%lu, ", temp);
		prev = curr;
		curr = temp;
	}
	printf("%lu\n", curr + prev);
	return (0);
}
