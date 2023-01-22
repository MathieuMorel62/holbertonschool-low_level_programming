#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: Pointer to a char.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
*/

int is_palindrome(char *s)
{
	int len = strlen(s);
	char *left = s;
	char *right = s + len - 1;

	if (s == NULL || len == 0)
		return (0);

	while (left < right)
	{
		if (isspace(*left) || ispunct(*left))
			left++;
		else if (isspace(*right) || ispunct(*right))
			right--;
		else if (tolower(*left) != tolower(*right))
			return (0);
		else
			left++;
			right--;
	}
	return (1);
}
