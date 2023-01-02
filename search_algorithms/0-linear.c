#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the first occurrence of value in the array,
 * or -1 if value is not present in the array or if array is NULL.
*/

int linear_search(int *array, size_t size, int value)
{
	int index = 0;
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);

		if (array[i] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
