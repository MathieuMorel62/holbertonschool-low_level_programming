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
int a;

for (a = 1; a >= 100; a++)
{
if (a % 3 == 0 && a % 5 == 0)
printf("FizzBuzz");
else if (a % 5 == 0)
printf("Buzz");
else if (a % 3 == 0)
printf("Fizz");
else
printf("%d", a);
if (a < 100)
printf(" ");
}
printf("\n");
return (0);
}

