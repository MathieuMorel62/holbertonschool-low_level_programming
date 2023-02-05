#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: the size of array
 *
 * Return: pointer to the new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htc;

	if (size == 0)
		return (0);

	htc = malloc(sizeof(shash_table_t));
	if (htc == NULL)
		return (NULL);

	htc->size = size;

	htc->array = calloc(size, sizeof(shash_node_t *));
	if (htc->array == NULL)
	{
		free(htc);
		return (NULL);
	}
	return (htc);
}


/**
 * set_spair - mallocs a key/value pair to the sorted hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: pointer to the new node.
 */
shash_node_t *set_spair(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);

	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);

	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}

/**
 * set_spair_only - set key:value pair to first array element
 * @ht: pointer to the sorted hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 * @index: the key's index.
 *
 * Return: the node, or NULL if failed.
 */
shash_node_t *set_spair_only(shash_table_t *ht, const char *key,
			     const char *value, unsigned long int index)
{
	shash_node_t *node = set_spair(key, value);

	if (node == NULL)
		return (NULL);

	node->next = NULL;
	ht->array[index] = node;
	return (node);
}

/**
 * update_value - updates the value of a given node.
 * @node: pointer to the node.
 * @value: string to put at the node.
 *
 * Return: 1 on success, 0 on fail.
 */
int update_value(shash_node_t *node, const char *value)
{
	if (strcmp(node->value, value) == 0)
		return (1);

	free(node->value);
	node->value = malloc(strlen(value) + 1);

	if (node->value == NULL)
		return (0);

	strcpy(node->value, value);
	return (1);
}

/**
 * set_spair_front - value pair node to front of given index's list.
 * @ht: pointer to the sorted hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 * @index: the key's index.
 *
 * Return: the new node, or NULL if failed.
 */
shash_node_t *set_spair_front(shash_table_t *ht, const char *key,
			     const char *value, unsigned long int index)
{
	shash_node_t *node = set_spair(key, value);

	if (node == NULL)
		return (0);

	node->next = ht->array[index];
	ht->array[index] = node;
	return (node);
}

/**
 * slist_set_first - sets the first addition to the sorted list.
 * @ht: pointer to the sorted hash table.
 * @node: pointer to the first node on the table.
 *
 * Return: Always 1.
 */
int slist_set_first(shash_table_t *ht, shash_node_t *node)
{
	node->sprev = NULL;
	node->snext = NULL;
	ht->shead = node;
	ht->stail = node;
	return (1);
}

/**
 * slist_set - sets a new node before the given old node.
 * @ht: pointer to the sorted hash table.
 * @old_node: the node to place the new node in front of.
 * @node: the new node to place in front of the old one.
 *
 * Return: Always 1 (success).
 */
int slist_set(shash_table_t *ht, shash_node_t *old_node, shash_node_t *node)
{
	if (old_node->sprev == NULL)
		ht->shead = node;
	node->snext = old_node;
	node->sprev = old_node->sprev;
	old_node->sprev = node;

	if (node->sprev != NULL)
		node->sprev->snext = node;
	return (1);
}

/**
 * slist_set_end - sets a node at the end of the sorted list
 * @ht: pointer to the sorted hash table.
 * @node: the node to place at the end.
 *
 * Return: Always 1 (success).
 */
int slist_set_end(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *old_node = ht->stail;

	ht->stail = node;
	node->snext = NULL;
	node->sprev = old_node;
	old_node->snext = node;
	return (1);
}

/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht: hast table
 * @key: key hash table
 * @value: value associated with the key
 *
 * Return: 1 if success or 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *curr_old_node;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
		node = set_spair_only(ht, key, value, index);
	else
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (update_value(node, value));
			node = node->next;
		}
		node = set_spair_front(ht, key, value, index);
	}
	if (node == NULL)
		return (0);

	if (ht->shead == NULL)
		return (slist_set_first(ht, node));

	curr_old_node = ht->shead;
	while (curr_old_node != NULL)
	{
		if (strcmp(curr_old_node->key, node->key) >= 0)
			return (slist_set(ht, curr_old_node, node));
		curr_old_node = curr_old_node->snext;
	}
	return (slist_set_end(ht, node));
}

/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: value associated with the element or NULL if key couldn’t be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *temp = NULL;

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

/**
 * shash_table_print - function that prints a hash table.
 * @ht: hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *temp = NULL;
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

/**
 * shash_table_print_rev - prints sorted key/value pairs in reverse.
 * @ht: the sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *node = ht->stail;

	if (ht == NULL)
		return;
	printf("{");
	while (node != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		count++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table
 * @ht: table to delete
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *temp, *del;

	temp = del = NULL;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
			temp = ht->array[index];

		while (temp != NULL)
		{
			del = temp;
			temp = temp->next;
			free(del->key);
			free(del->value);
			free(del);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
