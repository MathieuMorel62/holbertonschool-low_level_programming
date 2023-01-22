#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;

	j = i / 2;

	if (i % 2 == 1)
		j++;

	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
