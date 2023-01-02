#include <stdio.h>
#include "main.h"

/**
 * main - This function prints the first 98 Fibonacci numbers,
 * starting with 1 and 2,followed by a new line. The numbers are
 * separated by a comma and a space.
 *
 * Return: 0 if the function completes successfully
*/

int main(void)
{
	unsigned long int current = 1;
	unsigned long int next = 2;
	unsigned long int count = 98;
	unsigned long int sum, index;

	printf("%ld, %ld, ", current, next);

	for (index = 2; index < count; ++index)
	{
		sum = current + next;
		printf("%ld, ", sum);
		current = next;
		next = sum;
	}
	return (0);
}
