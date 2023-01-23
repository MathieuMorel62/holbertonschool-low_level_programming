#include "main.h"

/**
 * count_word - count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag = 0, c, word_count = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word_count++;
		}
	}
	return (word_count);
}

/**
 * **strtow - splits a string into words
 * @str: to string to split
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i, k = 0, len = 0, word_count, word_length = 0, start, end;

	while (*(str + len))
		len++;
	word_count = count_word(str);
	if (word_count == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (word_length)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (word_length + 1));
				if (temp == NULL)
					return (NULL);

				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[k] = temp - word_length;
				k++;
				word_length = 0;
			}
		}
		else if (word_length++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
