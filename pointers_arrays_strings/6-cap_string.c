#include "main.h"

/**
 * cap_string - Capitalises all words of a string
 * @chaine: String being evaluated
 *
 * Return: Capitalised string
 */

char *cap_string(char *chaine)
{
	int i;

	for (i = 0; chaine[i] != '\0'; i++)
	{
		if (chaine[i] >= 'a' && chaine[i] <= 'z')
		{
			if (i == 0)
				chaine[i] = chaine[i] - 32;
			else if (chaine[i - 1] >= 9 && chaine[i - 1] <= 10)
				chaine[i] = chaine[i] - 32;
			else if (chaine[i - 1] >= 32 && chaine[i - 1] <= 34)
				chaine[i] = chaine[i] - 32;
			else if (chaine[i - 1] >= 40 && chaine[i - 1] <= 41)
				chaine[i] = chaine[i] - 32;
			else if (chaine[i - 1] == 46)
				chaine[i] = chaine[i] - 32;
			else if (chaine[i - 1] == 59)
				chaine[i] = chaine[i] - 32;
			else if (chaine[i - 1] == 123 || chaine[i - 1] == 125)
				chaine[i] = chaine[i] - 32;
		}
	}
	return (chaine);
}
