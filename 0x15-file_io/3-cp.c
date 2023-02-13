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
	int file_from, file_to, readed;
	char buffer[1024];

/* --------------------------- NUMBER OF ARGUMENT --------------------------*/
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
/* ---------------------------------- READ ---------------------------------*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
/* --------------------------------- CREATE --------------------------------*/
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
/* ---------------------------------- WRITE --------------------------------*/
	while ((readed = read(file_from, buffer, 1024)) > 0)
	{
		if (write(file_to, buffer, readed) != readed || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
/* ----------------------------------- CLOSE --------------------------------*/
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
