#include "main.h"

/**
 * create_file - create file
 * @filename: name of the file
 * @text_content: the content on the file
 *
 * Return: -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		return (1);
	}
	else
		fd = write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
