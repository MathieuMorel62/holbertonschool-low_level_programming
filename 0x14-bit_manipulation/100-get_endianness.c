#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	int num = 1;
	char *num_ptr = (char *) &num;

	if (*num_ptr == 1)
		return (1);
	else
		return (0);
}
