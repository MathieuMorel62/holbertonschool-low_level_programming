#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 01234567891011121314\n x10
 *
 * Return: void
 */

void more_numbers(void)
{
int print_lines;
int numbers;

for (print_lines = 0; print_lines < 10; print_lines++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
if (numbers >= 10)
{
_putchar((numbers / 10) + '0');
}
_putchar((numbers % 10) + '0');
}
_putchar('\n');
}
}

