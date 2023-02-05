#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of list
 * @head: double pointer to head of node
 * @n: parameter with the element
 *
 * Return: newNode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tempo;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	tempo = *head;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (tempo->next != NULL)
		tempo = tempo->next;

	tempo->next = newNode;
	newNode->prev = tempo;

	return (newNode);
}
