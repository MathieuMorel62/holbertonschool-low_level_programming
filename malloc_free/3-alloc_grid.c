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
	int **res;
	int index, init;

	if (width <= 0 || height <= 0)
		return (NULL);

	res = malloc(sizeof(int *) * height);

	if (res == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		res[index] = malloc(sizeof(int) * width);

		if (res[index] == NULL)
		{
			for (index = 0; index < height; index++)
				free(res[index]);

			free(res);
			return (NULL);
		}
		for (init = 0; init < width; init++)
			res[index][init] = 0;
	}
	return (res);
}

