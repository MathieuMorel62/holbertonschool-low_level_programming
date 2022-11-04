#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print varying amount of strings
 * @separator: delimiter
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int index;
	char *string;

	va_start(params, n);
	for (index = 0; index < n; index++)
	{
		string = va_arg(params, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(params);
}
