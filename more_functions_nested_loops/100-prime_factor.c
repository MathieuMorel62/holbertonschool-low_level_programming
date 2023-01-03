#include <stdio.h>
#include <math.h>

/**
 * findLargestPrimeFactor - finds the largest prime factor of a given number
 * @num: the number to find the largest prime factor
 *
 * Return: the largest prime factor of num
 */

long int findLargestPrimeFactor(long int num)
{
	long int divisor;

	for (divisor = 2; divisor <= sqrt(num); divisor++)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
		}
	}
	return (num);
}

/**
 * main - entry point of the program
 *
 * Return: always 0
 */

int main(void)
{
	long int number = 612852475143;
	long int largestPrimeFactor = findLargestPrimeFactor(number);

	printf("%ld\n", largestPrimeFactor);

	return (0);
}
