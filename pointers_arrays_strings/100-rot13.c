#include <stdio.h>
#include "main.h"

/**
 * rot13 - encode a string using the ROT13
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */

char *rot13(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'A' && s[index] <= 'Z')
		{
			s[index] = (s[index] - 'A' + 13) % 26 + 'A';
		}
		else if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = (s[index] - 'a' + 13) % 26 + 'a';
		}
	}
	return (s);
}
