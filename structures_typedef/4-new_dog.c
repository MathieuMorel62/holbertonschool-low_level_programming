#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Return the length of a string
 * @string: string charactere
 *
 * Return: lenght of string
 */

int _strlen(char *string)
{
	int length = 0;

	for (; *string != '\0'; string++)
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - copies string source
 * @destination: string destination
 * @source: string src
 *
 * Return: dest
 */

char *_strcpy(char *destination, char *source)
{
	int index;

	for (index = 0; source[index] != '\0'; index++)
	{
		destination[index] = source[index];
	}
	destination[index] = '\0';

	return (destination);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

/******************** memory allocation *********************/

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * _sterlen(name) + 1);
	if (newdog->name == NULL)
		return (NULL);

	newdog->owner = malloc(sizeof(char) * _sterlen(owner) + 1);
	if (newdog->owner == NULL)
		return (NULL);

	return (newdog);
}
