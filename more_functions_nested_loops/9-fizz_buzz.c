#include <stdio.h>
#include "main.h"

/**
* main - program that prints the numbers from 1 to 100.
*
* Fizz: Fizz is printing instead of multiples of three.
*
* Buzz: Buzz is printing instead of multiples of five.
*
* FizzBuzz: FizzBuzz is printing instead of multiples of both three
* and five.
*
* Return: void.
*/

int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
printf("FizzBuzz");
else if (n % 5 == 0)
printf("Buzz");
else if (n % 3 == 0)
printf("Fizz");
else
printf("%i", n);
if (n < 100)
printf(" ");
}
printf("\n");
return (0);
}

