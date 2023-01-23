#include "main.h"

/**
 * create_array - Creates array of chars then initialises
 * @size: Size of the memory
 * @c: Char to initialise with
 *
 * Return: Pointer to array, NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == 0)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
