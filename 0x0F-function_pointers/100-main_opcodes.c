#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if incorrect number of arguments
 *         2 if negative bytes
*/

int main(int argc, char **argv)
{
	int nb_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nb_bytes = atoi(argv[1]);
	if (nb_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nb_bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < nb_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
