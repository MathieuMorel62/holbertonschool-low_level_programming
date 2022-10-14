#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum of two diagonals of square matrix
 * @a: Array being evaluated
 * @size: Dimensions of matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[(size + 1) * i];
		k += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", j, k);
}
