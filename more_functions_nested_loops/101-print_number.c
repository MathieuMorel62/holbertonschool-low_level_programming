#include <stdio.h>
#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: the integer to print
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
