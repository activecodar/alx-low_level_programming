#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to look for
 *
 * This function retrieves the value associated with a key in the hash table.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (!strcmp(current->key, key))
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
