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
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
