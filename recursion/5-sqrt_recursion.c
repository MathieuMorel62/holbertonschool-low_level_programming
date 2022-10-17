#include "main.h"

/**
 * root - search the square number
 * @n: Number one
 * @i: number two
 *
 * Return: Square of number
 */

int root(int n, int i)
{
	if (i * i > n)
		return (-1);

	else if (i * i == n)
		return (i);

	else
		return (root(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: parameter
 *
 * Return: natural square root of number
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
