#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp, *del;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		temp = ht->array[index];

		while (temp != NULL)
		{
			del = temp;
			del = temp->next;
			free(del->key);
			free(del->value);
			free(del);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
