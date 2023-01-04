#include "main.h"

/**
 * _atoi - Convert a string to a integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
*/

int _atoi(char *s)
{
	int index = 0, result = 0, sign = 1;

	/* Skip leading whitespace and sign characters */
	while (s[index] == ' ' || s[index] == '+' || s[index] == '-')
	{
		if (s[index] == '-')
		{
			sign = -1;
		}
		index++;
	}
	while (s[index] >= '0' && s[index] <= '9')
	{
		result = result * 10 + (s[index] - '0');
		index++;
	}
	return (result * sign);
}
