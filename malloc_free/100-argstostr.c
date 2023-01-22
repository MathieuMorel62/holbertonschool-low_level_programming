#include "main.h"

/**
 * argstostr - Concatenates all arguments of the program
 * @ac: Number of arguments passed to the program
 * @av: Array of strings representing the arguments
 *
 * Return: Pointer to a new string containing all arguments
 * with '\n' after each argument
*/

char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, current_index = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
	}
	total_len = total_len + ac;

	result = malloc(sizeof(char) * total_len + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[current_index] = av[i][j];
			current_index++;
		}
		if (result[current_index] == '\0')
			result[current_index++] = '\n';
	}
	return (result);
}
