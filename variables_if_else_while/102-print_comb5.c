#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints 00 - 99 separating by , and space
 *
 * Return: 0;
 */

int main(void)
{
	int numbers1, numbers2;

	for (numbers1 = 0; numbers1 < 100; numbers1++)
	{
		for (numbers2 = 1 + numbers1; numbers2 < 100; numbers2++)
		{
			putchar (numbers1 / 10 + '0');
			putchar (numbers1 % 10 + '0');
			putchar (' ');
			putchar (numbers2 / 10 + '0');
			putchar (numbers2 % 10 + '0');

			if (numbers1 != 98)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
