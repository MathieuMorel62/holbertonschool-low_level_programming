#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;
	char *coma = "";

	if (ht == NULL)
		return;

	printf("{");

	while (index < ht->size)
	{
		temp = ht->array[index];

		while (temp != NULL)
		{
			printf("%s'%s': '%s'", coma, temp->key, temp->value);
			coma = (", ");
			temp = temp->next;
		}
		index++;
	}
	printf("}\n");
}
