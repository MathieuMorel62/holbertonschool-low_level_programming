#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * *_calloc - function to allocates memory for an array
 *
 * @nmemb:    elements of array
 * @size:     size of data type
 * Return:    return pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == 0)
		return (NULL);

	for (count = 0; count < (nmemb * size); count++)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
