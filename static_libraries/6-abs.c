#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @number: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */

int _abs(int number)
{
	if (number <= 0)
	
	{
		return (-number);
	}
	else
	{
		return (number);
	}
}
