#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - key keygen
 * Return: 0 if succeed
 */

int main(void)
{
	int key, num;

	srand(time(NULL));
	for (key = 2772; key > 127;)
	{
		num = (rand() % 127);
		printf("%c", key);
		key = key - num;
	}
	printf("%c", key);

	return (0);
}
