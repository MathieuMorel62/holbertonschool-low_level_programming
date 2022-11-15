#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of list
 * @head: pointer to head pointer of list
 * @n: data to add new node
 *
 * Return: adress of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
