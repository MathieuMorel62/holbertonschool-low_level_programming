#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hast table
 * @key: key hash table
 * @value: value associated with the key
 *
 * Return: 1 if success or 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp = NULL, *newNode = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

/* -- check collision / Loop till we find an empty entry -- */
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

/* ----- if no collision insert node ----- */
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (0);
	}

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
