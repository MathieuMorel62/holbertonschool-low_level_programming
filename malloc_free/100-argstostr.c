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
	int index, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	if (ac > MAX_ARGS)
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		if (av[index] == NULL)
			return (NULL);
		total_len = total_len + strlen((av[index]) + 1);
	}

	result = malloc(sizeof(char) * total_len + 1);
	if (result == NULL)
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		strcat(result, av[index]);
		strcat(result, "\n");
	}
	return (result);
}
