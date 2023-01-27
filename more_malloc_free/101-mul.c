#include "main.h"

/**
 * check_valid_input - checks if the input is valid.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 *
 * Return: 0 if input is valid, 98 if invalid input.
*/

int check_valid_input(int argc, char *argv[])
{
	int i, j = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
			j++;
		}
	}
	return (0);
}

/**
 * main - Entry point.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments passed to the program.
 *
 * Return: 0 if successful, 98 if invalid input.
*/

int main(int argc, char *argv[])
{
	long num1, num2, result;
	int check = check_valid_input(argc, argv);

	if (check == 98)
		return (98);

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	result = num1 * num2;

	printf("%ld\n", result);
	return (0);
}
