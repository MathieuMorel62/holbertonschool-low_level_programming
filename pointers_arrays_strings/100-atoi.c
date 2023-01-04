#include "main.h"

/**
 * _atoi - Convert a string to a integer.
 * @s: The string to convert.
 *
 * Return: The integer representation of the number in the string.
*/

int _atoi(char *s)
{
	int index = 0, found_number = 0, result = 0, sign = 1, neg = 0;

	while (s[index] != '\0')
	{
		if (s[index] == ' ')
			;

		else if (s[index] == '+' || s[index] == '-')
		{
			if (!found_number)
				sign = (s[index] == '+') ? 1 : -1;

			while (s[index] == ' ')
				index++;

			if (sign == -1)
				neg++;
		}
		else if (s[index] >= '0' && s[index] <= '9')
		{
			found_number = 1;
			result = result * 10 + (s[index] - '0');
		}
		else
		{
			if (found_number)
				break;
		}
		index++;
	}
	if (!found_number)
		return (0);

	if (neg % 2 != 0)
		result = -result;

	return (result);
}
