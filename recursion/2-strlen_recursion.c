#include "main.h"

/**
 * _strlen_recursion - Returns length of string
 * @s: Pointer to string
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		s++;
		i = i +  _strlen_recursion(s);
		return (i);
	}
	else
		return (0);

}
