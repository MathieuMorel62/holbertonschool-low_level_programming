#include <stdio.h>

/**
 * main - Prints its name, followed by a new line
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf ("%s\n", argv[i]);
	}

	return (0);
}
