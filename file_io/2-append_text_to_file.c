#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content == NULL)
	{
		fp = open(filename, O_WRONLY | O_CREAT | O_APPEND);
		return (1);
	}
	else
		fp = write(fp, text_content, strlen(text_content));

	close(fp);

	return (1);
}
