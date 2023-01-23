#include "main.h"

/**
 * _strdup - Returns pointer to newly allocated space which contains a string
 * @str: String to be copied
 *
 * Return: Pointer to new string identical to str, NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *string_copy;
	int index;
	int len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index] != '\0'; index++)
	{
		;
	}

	string_copy = malloc(index * sizeof(char) + 1);

	if (string_copy == NULL)
		return (NULL);

	for (len = 0; len <= index; len++)
	{
		string_copy[len] = str[len];
	}
	return (string_copy);
}
