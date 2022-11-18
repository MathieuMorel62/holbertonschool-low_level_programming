#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	result = (n >> index) & 1;

	if (index > 16)
		return (-1);
	else
		return (result);
}
