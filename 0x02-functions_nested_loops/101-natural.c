#include "main.h"
#include <stdio.h>

/**
 * main - Calculates and displays the sum of multiples of 3 or 5 less than 1024
 *
 * Return: 0 if success
 */

int main(void)
{
	int sum = 0, i, div = 1, digit = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	while (sum / div > 9)
	{
		div = div * 10;
	}
	while (div > 0)
	{
		digit = sum / div;
		_putchar(digit + '0');
		sum = sum % div;
		div = div / 10;
	}
	_putchar('\n');
	return (0);
}
