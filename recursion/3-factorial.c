#include "main.h"

/**
 * factorial - Returns factorial of number
 * @n: Number being evaluated
 *
 * Return: Factorial of number, -1 if negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	else
		 n *= factorial(n - 1);
	return (n);
}

