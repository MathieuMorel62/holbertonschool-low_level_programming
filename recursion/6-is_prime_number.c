#include "main.h"

/**
  * CheckPrime - Check if number is prime
  * @num: the number to be checked
  * @i: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */

int CheckPrime(int num, int i)
{
	if (num <= 1)
		return (0);

	else if (num % i == 0 && i > 1)
		return (0);

	else if ((num / i) < i)
		return (1);

	else
		return (CheckPrime(num, i + 1));
}

/**
  * is_prime_number - Returns if a number is prime
  * @num: the number to be checked
  *
  * Return: integer value
  */

int is_prime_number(int num)
{
	return (CheckPrime(num, 1));
}
