#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: Variable being evaluated
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
