#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - f points
 * @name: name
 * @f: pointer to print 
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
