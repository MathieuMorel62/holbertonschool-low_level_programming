#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: list of arg types
 */

void print_all(const char * const format, ...)
{
	va_list params;
	int number = 0, index = 0;
	char *separator = ", ";
	char *string;

	va_start(params, format);
	while (format && format[number])
		++number;

	while (format && format[index])
	{
		if (index == (number - 1))
			separator = "";

		switch (format[index])
		{
			case 'c':
				printf("%c%s", va_arg(params, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(params, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(params, double), separator);
				break;
			case 's':
				string = va_arg(params, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
					printf("%s%s", string, separator);
				break;
		}
	++index;
	}
	printf("\n");

	va_end(params);
}
