#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Executes function as parameter on each element of array
 * @array: Pointer to array
 * @size: Size of array
 * @action: Pointer to function code
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)

	for (i = 0; i < size; i++)
		action(array[i]);
}
