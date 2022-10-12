#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @string: string array
 * Return: string array
 */

char *leet(char *string)
{
	char letter[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i;
	int j;

	for (j = 0; string[j] != '\0'; j++)
	{
		for (i = 0; letter[i] != '\0'; i++)
		{
			if (string[j] == letter[i])
				string[j] = number[i];
		}
	}
	return (string);
}
