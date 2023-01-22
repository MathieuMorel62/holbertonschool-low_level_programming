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
	char *str = malloc((len - 1) * sizeof(char));
	int res;

	if (len <= 1)
		return (1);

	if (tolower(*s) != tolower(s[len - 1]))
		return (0);

	strncpy(str, s + 1, len - 2);
	str[len - 2] = '\0';
	res = is_palindrome(str);
	free(str);

	return (res);
}
