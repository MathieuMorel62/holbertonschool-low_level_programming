#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: value associated with the element, or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return (NULL);
	
	if (ht != NULL)
	{
		index = key_index((const unsigned char *)key, ht->size);
		temp = ht->array[index];
/* ----- Loop till we find an empty entry. ----*/
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);

			temp = temp->next;
		}
	}
	return (NULL);
}
