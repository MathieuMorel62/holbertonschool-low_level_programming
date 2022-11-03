#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print different number
 * @separator: delimiter
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parameter;

	unsigned int index;

	va_start(parameter, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(parameter, unsigned int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(parameter);
}
