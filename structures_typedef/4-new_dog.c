#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	new_name = strdup(name);
	if (new_name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	new_owner = strdup(owner);
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
