#include "lists.h"

/**
 * add_node_end - function to add a new node at the end
 * @head: parameter with the head node
 * @str: parameter xith the element
 *
 * Return: the adress of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy, *tmp;

	copy = malloc(sizeof(list_t));

	if (copy == NULL)
		return (NULL);

	copy->str = strdup(str);
	copy->len = strlen(str);
	copy->next = NULL;

	tmp = *head;

	if (*head == NULL)
	{
		*head = copy;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
	tmp->next = copy;
	}
	return (copy);
}
