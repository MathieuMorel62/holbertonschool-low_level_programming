#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: Variable being evaluated
 *
 * Return: Length of string
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	i = i - 1;

	while (i >= 0)
	{
		_putchar (*(s + i));
		i--;
	}
	_putchar ('\n');
}
