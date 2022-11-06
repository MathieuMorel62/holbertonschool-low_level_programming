#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints 3 combination of numbers
 *
 * Return: 0
 */

int main(void)
{
	int number1, number2, number3;

	for (number1 = '0'; number1 < '9'; number1++)
	{
		for (number2 = (number1 + 1); number2 <= '9'; number2++)
		{
			for (number3 = (number2 + 1); number3 <= '9'; number3++)
			{
				putchar (number1);
				putchar (number2);
				putchar (number3);

				if (number1 == '7' && number2 == '8' && number3 == '9')
					break;

				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
