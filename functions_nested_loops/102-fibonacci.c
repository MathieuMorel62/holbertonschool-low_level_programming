#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 to indicate success
 */

int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, c;

	_putchar(a + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(b + '0');

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		_putchar(',');
		_putchar(' ');
		_putchar(c + '0');
		a = b;
		b = c;
	}
	_putchar('\n');
	return (0);
}
