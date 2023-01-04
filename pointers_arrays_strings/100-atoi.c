#include "main.h"

/**
 * _atoi - Convert a string to a integer.
 * @s: The string to convert.
 *
 * Return: The converted integer, or 0 if the string does not contain numbers.
*/

int _atoi(char *s)
{
	int index = 0, sign = 1, found_number = 0;
	unsigned int num = 0;

	while (s[index])
	{
		if (s[index] == '-')
		{
			sign = sign * -1;
		}
		while (s[index] >= '0' && s[index] <= '9')
		{
			found_number = 1;
			num = (num * 10) + (s[index] - '0');
			index++;
		}
		if (found_number == 1)
			break;

		index++;
	}
	num = num * sign;
	return (num);
}
