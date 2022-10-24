#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Concatenated string, NULL if empty or fail
 */

char *str_concat(char *s1, char *s2)
{
	int string1;
	int string2;
	char *result;

	if (s1 == NULL)
		return (s1 = "");

	if (s2 == NULL)
		return (s2 = "");

	string1 = strlen(s1);
	string2 = strlen(s2);

	result = (char *) malloc(string1 + string2 + 1);

	if (result)
	{
		memcpy(result, s1, string1);
		memcpy(result + string1, s2, string2 + 1);
	}
	else
		return (NULL);

	return (result);
}
