#include "main.h"

/**
 * main - program that prints the minimum number of coins
 *        to make change for an amount of money.
 * @argc: number of arguments passed.
 * @argv: array of argument strings passed
 *
 * Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
	int cents, count, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	count = 0;
	i = 0;
	while (cents > 0)
	{
		if (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
		else
			i++;
	}
	printf("%d\n", count);
	return (0);
}
