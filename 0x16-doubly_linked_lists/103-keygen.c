#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * function1 - function1 - Calculates the second character of the key
 * @input_length: The size of the user input
 * @input_array: The array of arguments passed in from the command line
 * Return: The position of the character in the "posvalues" array
 */
int function1(int input_length, char *input_array[])
{
	int index = 0, total_value = 0, result;

	for (; index < input_length; index++)
		total_value += input_array[1][index];
	result = (total_value ^ 79) & 63;
	return (result);
}

/**
 * function2 - Calculates the third character of the key
 * @input_length: The size of the user input
 * @input_array: The array of arguments passed in from the command line
 * Return: The position of the character in the "posvalues" array
 */
int function2(int input_length, char *input_array[])
{
	int index = 0, product = 1, result;

	for (; index < input_length; index++)
		product = input_array[1][index] * product;
	result = (product ^ 85) & 63;
	return (result);
}

/**
 * function3 - Calculates the fourth character of the key
 * @input_str: The array of arguments passed in from the command line
 * Return: The position of the character in the "posvalues" array
 */
int function3(char *input_str[])
{
	int result, max_char = 0, index = 0;

	for (; input_str[1][index]; index++)
	{
		if (max_char < input_str[1][index])
			max_char = input_str[1][index];
	}
	srand(max_char ^ 14);
	result = rand() & 63;
	return (result);
}

/**
 * function4 - Calculates the fifth character of the key
 * @input_str: The array of arguments passed in from the command line
 * Return: The position of the character in the "posvalues" array
 */
int function4(char *input_str[])
{
	int result, sum = 0, input = 0;

	for (; input_str[1][input]; input++)
		sum = sum + (input_str[1][input] * input_str[1][input]);
	result = (sum ^ 239) & 63;

	return (result);
}

/**
 * main - Generates a key for crackme 5 according to the input arguments
 * @argc: Number of arguments in the entry
 * @argv: Table that stores the arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	char posvalues[] =
		"A-CHRDw87lNS0E9B2TibgpnMVys5Xzvt0GJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7];
	int index = 0, sum = 0, value;

	if (argc > 1)
	{
		while (argv[1][index])
			index++;

		key[0] = posvalues[(index ^ 59) & 63];
		key[1] = posvalues[function1(index, argv)];
		key[2] = posvalues[function2(index, argv)];
		key[3] = posvalues[function3(argv)];
		key[4] = posvalues[function4(argv)];

		for (; sum < argv[1][0]; sum++)
			value = rand();

		value = (value ^ 229) & 63;
		key[5] = posvalues[value];

		for (index = 0; index < 6; index++)
			printf("%c", key[index]);
	}
	return (0);
}
