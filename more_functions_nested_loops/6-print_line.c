#include "main.h"
#include <stdio.h>

/**
 * print_line - print a line
 * @n: length of line
 * Return: nothing
 */

void print_line(int n)
{
int a;

for (a = 0; a < n; a++)
{
_putchar('_');
}
_putchar('\n');
}

