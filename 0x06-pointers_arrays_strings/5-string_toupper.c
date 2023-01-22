#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to upper
 * @ptr: String being altered
 *
 * Return: Converted string
 */

char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] = ptr[i] - 32;
		}
	}
	return (ptr);
}
