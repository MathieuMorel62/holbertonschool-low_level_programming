#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of array
 *
 * Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htc;

	if(size == 0)
		return (0);

	htc = malloc(sizeof(hash_table_t));
	if (htc == NULL)
		return (NULL);

	htc->size = size;

	htc->array = calloc(size, sizeof(hash_node_t *));
	if (htc->array == NULL)
	{
		free(htc);
		return (NULL);
	}
	return (htc);
}
