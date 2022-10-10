#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints string then newline to stdout
 * @str: String being printed
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar (*(str + i));
			i++;
	}
	_putchar ('\n');
}
