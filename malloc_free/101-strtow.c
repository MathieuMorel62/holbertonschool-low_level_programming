#include "main.h"

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings
*/

char **strtow(char *str)
{
	int i, j, k, word_count = 0, start, end;
	char **words;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;

	words = malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);

	j = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			start = i;
			while (str[i] && str[i] != ' ')
				i++;

			end = i;
			words[j] = malloc(sizeof(char) * (end - start + 1));
			if (!words[j])
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			strncpy(words[j], str + start, end - start);
			words[j][end - start] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
