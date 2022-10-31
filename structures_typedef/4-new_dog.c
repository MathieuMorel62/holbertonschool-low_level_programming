#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns pointer to newly allocated space which contains a string
 * @str: String to be copied
 *
 * Return: Pointer to new string identical to str, NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *string_copy;
	int index;
	int len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index] != '\0'; index++)
	{
		;
	}

	string_copy = malloc(index * sizeof(char) + 1);
	if (string_copy == NULL)
		return (NULL);

	for (len = 0; len <= index; len++)
	{
		string_copy[len] = str[len];
	}
	return (string_copy);
}

/**
 * new_dog - Function that creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner dog
 * Return: A new struct of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	new_name = _strdup(name);
	if (new_name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	new_owner = _strdup(owner);
	if (new_owner == NULL)
	{
		free(new_name);
		free(newdog);
		return (NULL);
	}

	newdog->name = new_name;
	newdog->age = age;
	newdog->owner = new_owner;

	return (newdog);
}
