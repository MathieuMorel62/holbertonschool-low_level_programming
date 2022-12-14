#include "main.h"

/**
 **_strncat -main entry.
 *void: nothing
 *@dest: char pointer
 *@src: char pointer
 *@n: integer variable
 *Description: function that concatenates two strings.
 * Return:  pointer to the resulting string dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
