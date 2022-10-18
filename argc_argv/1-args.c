#include <stdio.h>

/**
 * main - print number of arguments entered
 * @argc: number of arguments
 * @argv: arguments entered
 * Description: print number of arguments
 * Return: return zero
 **/

int main(int argc, char *argv[])
{
	int i;
	printf("%d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
