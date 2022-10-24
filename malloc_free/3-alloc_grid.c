#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2 dim
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: Pointer of 2 dimensions or NULL if size is less than 0
 */

int **alloc_grid(int width, int height)
{
	int **res = NULL;
	int i;

	if (width <= 0 && height <= 0)
		return (NULL);

	res = (int**)malloc(width * sizeof(int*));

	for (i = 0; i < width; i++)
		;

	res [i] = (int*)malloc(height * sizeof(int));

	if (res == NULL)
		return (NULL);

	return (res);
}
