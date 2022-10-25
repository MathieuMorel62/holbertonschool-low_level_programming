#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem.
 */

void *malloc_checked(unsigned int b)
{
	void *memo;

	memo = malloc(b);

	if (memo == NULL)
		exit(98);

	return (memo);
}
