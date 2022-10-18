#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of command line arguments
 * @argv: Array containing command line arguments
 *
 * Return: 0, 1 if more than 2 arguments
 */

int main(int argc, char *argv[])
{
	argc = argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	
	return (1);
}
