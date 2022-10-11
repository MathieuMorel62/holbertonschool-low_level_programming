#include "main.h"
#include <stdio.h>

/*
 *  _strncat - Concatenates two strings
 *  @dest: String being concatenated
 *  @src: String being concatenated
 *  @n: Number of bytes
 *
 *  Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n; j++, i++)
		dest[i] = src[j];

	return (dest);
}
