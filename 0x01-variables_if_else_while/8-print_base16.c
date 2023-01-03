#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: that prints the alphabet in lowercase
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int letter;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
