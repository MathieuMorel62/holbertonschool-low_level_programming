#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of list
 * @head: pointer to head pointer of list
 * @n: data to add new node
 *
 * Return: adress of a new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		tmp = *head;

		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
	}
	return (newNode);
}
