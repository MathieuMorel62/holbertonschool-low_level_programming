#include "main.h"

/**
 * infinite_add - that adds two numbers.
 * @n1: number one
 * @n2: number two
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Returns: a pointer to the result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int maxlen = (len1 > len2) ? len1 : len2;
	int carry = 0;
	int sum, digit1, digit2;
	int index;

	if (size_r < maxlen + 2)
		return (0);

	if (carry > 0)
	{
		maxlen++;
		r[0] = carry + '0';
	}
	r[maxlen] = '\0';

	for (index = 1; index <= maxlen; index++)
	{
		digit1 = (index <= len1) ? n1[len1 - index] - '0' : 0;
		digit2 = (index <= len2) ? n2[len2 - index] - '0' : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[maxlen - index] = (sum % 10) + '0';
	}
	if (carry > 0)
	{
		r[0] = carry + '0';
		return (r);
	}
	else
		return (r + 1);
}
