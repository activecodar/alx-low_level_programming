#include "hash_tables.h"
/**
 * hash_table_set - Adds or updates an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key. key can not be an empty string
 * @value: The value associated with the key. value must be.
 * duplicated value can be an empty string
 *
 * This function adds or updates an element to the hash table
 * with a given key and value.
 * In case of collision, it adds the new node at the
 * beginning of the linked list.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (!ht || !key || !*key || !value)
	return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (!strcmp(current->key, key))
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			else
				return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
