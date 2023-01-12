#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * This function prints the key/value pairs of a hash table
 * in the order that they appear in the array of the hash table.
 * The format of the output is: key: value
 * If ht is NULL, the function doesn't print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (!ht)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		printf("[%lu] ", i);
		while (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next)
			{
				printf(", ");
			}
			current = current->next;
		}
		printf("\n");
	}
}
