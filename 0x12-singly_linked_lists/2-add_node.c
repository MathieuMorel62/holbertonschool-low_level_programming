#include "lists.h"

/**
 * add_node - function to add new node at the beginning
 * @head: parameter with the head node
 * @str: parameter with the element
 *
 * Return: the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *copy;

	copy = malloc(sizeof(list_t));

	if (copy == NULL)
		return (NULL);

	copy->str = strdup(str);
	copy->len = strlen(str);
	copy->next = *head;
	*head = copy;

	return (copy);
}
