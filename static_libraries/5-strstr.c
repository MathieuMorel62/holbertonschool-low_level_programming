#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: String being searched
 * @needle: Substring being searched for
 *
 * Return: Pointer to beginning of located substring or NULL
 **/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i]) == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (NULL);
}
