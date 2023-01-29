#include "main.h"

/**
 * binary_to_uint - convert a binary to an unsigned int
 * @b: pointer to a string
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int base = 1, index = 0;

	if (b == NULL)
		return (0);

	while (b[index + 1])
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		index++;
	}

	while (index >= 0)
	{
		convert = convert + ((b[index] - '0') * base);
		base = base * 2;
		index--;
	}
	return (convert);
}
