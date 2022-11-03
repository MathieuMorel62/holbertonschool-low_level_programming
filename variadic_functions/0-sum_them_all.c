#include "variadic_functions.h"
#include <stdarg.h>

#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum
 * @n: integers
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list params;

	unsigned int sum = 0;
	unsigned int i;

	/* validate params and initialize */
	if (n == 0)
		return (0);

	va_start(params, n);

	/* go all the parameters */
	for (i = 0; i < n; i++)
		sum += va_arg(params, int);

	va_end(params);

	return (sum);
}
