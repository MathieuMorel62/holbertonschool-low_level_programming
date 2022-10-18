#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints string then newline to stdout
 * @str: String being printed
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
