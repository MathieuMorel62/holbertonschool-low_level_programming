#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: file name
 * @letters: size.
 *
 * Return: readed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo;
	ssize_t count;
	char *buffer;

	if (filename == NULL)
		return (0);

/* ----------------- OPEN FILE ------------------- */

	fdo = open(filename, O_RDONLY);
	if (fdo == -1)
		return (0);

/* --------------- ALLOCATE MEMORY --------------- */

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

/* --------------------- READ -------------------- */

	count = read(fdo, buffer, letters);
	if (fdo == -1)
		return (0);

/* -------------------- WRITE -------------------- */

	count = write(STDOUT_FILENO, buffer, count);
	if (count == -1)
		return (0);

	close(fdo);
	free(buffer);
	return (count);
}
