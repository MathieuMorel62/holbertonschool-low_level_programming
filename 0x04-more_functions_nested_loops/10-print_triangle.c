#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle
 * @size: Dimensions of triangle
 */

void print_triangle(int size)
{

	int a;
	int b;

	if (size < 1)
		_putchar('\n');

	for (a = 1; a <= size; a++)
	{
		for (b = size - a; b > 0; b--)
			_putchar(' ');

		for (b = a; b > 0; b--)
			_putchar('#');

		_putchar('\n');
	}
}

