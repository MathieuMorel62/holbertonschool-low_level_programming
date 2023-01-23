#include "main.h"

/**
 * count_words - count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int flag, i, word_count;

	flag = 0;
	word_count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
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
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings
*/

char **strtow(char *str)
{
	char **words, *temp;
	int i, word_index = 0, len = 0, word_count, start, end, word_length;

	while (*(str + len))
		len++;

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
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
				words[word_index] = temp - word_length;
				word_index++;
				word_length = 0;
			}
		}
		else if (word_length++ == 0)
			start = i;
	}
	words[word_index] = NULL;
	return (words);
}
