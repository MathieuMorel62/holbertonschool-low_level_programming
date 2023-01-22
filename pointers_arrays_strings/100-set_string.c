#include "main.h"

/**
 * set_string -
 * @s:
 * @to:
*/

void set_string(char **s, char *to)
{
	if (s == NULL || to == NULL)
		return;
	
	*s = to;
}
