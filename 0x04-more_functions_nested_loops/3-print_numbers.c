#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints the numbers 0 to 9
 */

void print_numbers(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}

