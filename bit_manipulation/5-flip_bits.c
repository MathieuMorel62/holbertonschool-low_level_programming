#include "main.h"

/**
 * flip_bits - number of bits flipped to get from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits;
	unsigned long int count = 0;

	bits = n ^ m;

	while (bits)
	{
		bits = bits & (bits - 1);
		count++;
	}
	return (count);
}
