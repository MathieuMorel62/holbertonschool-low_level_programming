#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: String being evaluated
 * @c: Character being checked for
 *
 * Return: Pointer to first occurrence of character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
