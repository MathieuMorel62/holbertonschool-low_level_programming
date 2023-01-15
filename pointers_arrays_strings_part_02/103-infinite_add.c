#include "main.h"

/**
 * infinite_add - that adds two numbers.
 * @n1: number one
 * @n2: number two
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: pointer to the result buffer or 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, index, swap_index, carry, sum;

	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;
	if (len1 > size_r || len2 > size_r)
		return (0);

	carry = 0;

	for (len1 -= 1, len2 -= 1, index = 0; index < size_r - 1;
		len1--, len2--, index++)
	{
		sum = carry;

		if (len1 >= 0)
			sum = sum + n1[len1] - '0';
		if (len2 >= 0)
			sum = sum + n2[len2] - '0';
		if (len1 < 0 && len2 < 0 && sum == 0)
			break;

		carry = sum / 10;
		r[index] = sum % 10 + '0';
	}
	r[index] = '\0';

	if (len1 >= 0 || len2 >= 0 || carry)
		return (0);

	for (index -= 1, swap_index = 0; swap_index < index; index--, swap_index++)
	{
		carry = r[index];
		r[index] = r[swap_index];
		r[swap_index] = carry;
	}
	return (r);
}
