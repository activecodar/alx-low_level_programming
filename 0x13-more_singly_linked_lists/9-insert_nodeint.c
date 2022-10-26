#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @idx: index/position to insert node
 * @n: data value for new node
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;
	listint_t *new_node, *current, *old_node;

	counter = 0;
	current = *head;

	while (current != NULL)
	{
		if (counter == idx)
		{
			new_node = (listint_t *) malloc(sizeof(listint_t));
			if (new_node == NULL)
			{
				return (NULL);
			}
			new_node->n = n;
			old_node = current->next;
			current->next = new_node;
			new_node->next = old_node;
			return (new_node);
		}
		current = current->next;
		counter++;
	}

	return (NULL);
}
