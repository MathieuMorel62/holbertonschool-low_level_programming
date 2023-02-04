#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_key_char - Function that generates a character key from an entry.
 * @input: Pointer to the entrance
 * @size: Size of the entrance
 *
 * Return: Key generated
*/
int generate_key_char(char *input, int size)
{
	int car = 0, count = 0;

	for ( ; count < size; count++)
		car = car + input[count];

	srand(input[0] ^ 14);
	return ((car ^ (rand() & (79 ^ 85 ^ 239 ^ 229 ^ 14))) & 63);
}

/**
 * main - Main function
 * @argc: Number of arguments
 * @argv: Table of arguments
 *
 * Return: Return code
*/
int main(int argc, char *argv[])
{
	char values[] = "A-CHRDw87lNS0E9B2TibgpnMVys5Xzvt0GJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7];
	int i = 0;
	int size = 0;

	if (argc > 1)
	{
		while (argv[1][size])
			size++;

		key[0] = values[size ^ (59 & 63)];
		key[1] = values[generate_key_char(argv[1], size)];
		key[2] = values[generate_key_char(argv[1], size)];
		key[3] = values[generate_key_char(argv[1], size)];
		key[4] = values[generate_key_char(argv[1], size)];
		key[5] = values[generate_key_char(argv[1], size)];

		for (i = 0; i < 6; i++)
			printf("%c", key[i]);
	}
	return (0);
}
