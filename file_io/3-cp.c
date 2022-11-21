#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument contained in the array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
/* number of argument */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
/* read */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
/* create */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);

	return (0);
}
