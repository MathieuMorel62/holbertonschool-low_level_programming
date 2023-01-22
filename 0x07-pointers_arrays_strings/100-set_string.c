#include "main.h"

/**
 * set_string - Assign the value of a pointer to a char
 * @s: Pointer to a pointer of a char
 * @to: Pointer to a char
*/

void set_string(char **s, char *to)
{
	if (s == NULL)
		return;

	if (to != NULL)
		*s = to;
	else
		*s = NULL;
}
