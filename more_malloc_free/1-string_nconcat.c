#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: A string concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int string1, string2;

	if (s1 == NULL)
		s1 = "";

	for (string1 = 0; s1[string1] != '\0'; string1++)
	{
		;
	}

	if (s2 == NULL)
		s2 = "";

	for (string2 = 0; s2[string2] != '\0'; string2++)
	{
		;
	}

	if (n >= string2)
		n = string2;

	concat = malloc(sizeof(char) * (string1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (string1 = 0; s1[string1] != '\0'; string1++)
		concat[string1] = s1[string1];

	for (string2 = 0; string2 < n; string2++)
	{
		concat[string1] = s2[string2];
		string1++;
	}

	concat[string1] = '\0';

	return (concat);
}



