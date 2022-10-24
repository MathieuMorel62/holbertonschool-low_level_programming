#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: Return a concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int index1, index2, x, y, z;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index1 = 0; s1[index1] != '\0'; index1++)
	{
		;
	}

	for (index2 = 0; s2[index2] != '\0'; index2++)
	{
		;
	}

	str = malloc((index1 + index2) * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	for (x = 0; x < index1; x++)
		str[x] = s1[x];

	for (y = index1, z = 0; y < index1 + index2; y++, z++)
		str[y] = s2[z];

	str[index1 + index2] = '\0';

	return (str);
}
