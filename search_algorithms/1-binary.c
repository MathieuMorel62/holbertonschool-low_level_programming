#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: the index where the value is located if it is present,
 * or -1 if it is not present or if the array is empty.
*/

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int middle = 0;
	int end = size - 1;
	int index;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		middle = (start + end) / 2;

		printf("Searching in array: ");

		for (index = start; index <= end; index++)
		{
			printf("%d", array[index]);

			if (index < end)
				printf(", ");
		}
		printf("\n");

		if (value < array[middle])
			end = middle - 1;

		else if (value > array[middle])
			start = middle + 1;

		else
			return (middle);
	}
	return (-1);
}
