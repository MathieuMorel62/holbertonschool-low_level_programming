#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;
	return a;
}
