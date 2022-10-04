#include <unistd.h>

/**
 * File: _putchar.c
 *
 * Description: _putchar writes the character 'c' to stdout
 * 'c': the character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int_putchar(char c)
{
return (write(1, &c, 1));
}