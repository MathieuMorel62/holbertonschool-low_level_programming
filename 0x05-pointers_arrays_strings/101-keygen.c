#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main
 *
 * Return: 0 (succes)
 */

int main(void)
{
	int b, answer;

	srand(time(NULL));
	for (b = 2772; b > '~';)
	{
		answer = (rand() % '~');
		printf("%c", answer);
		b = b - answer;
	}
	printf("%c", b);
	return (0);
}
