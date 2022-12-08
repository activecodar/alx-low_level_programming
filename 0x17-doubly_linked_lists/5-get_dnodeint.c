#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: doubly linked list pointer
* @index: index of node to be returned
* Return: Pointer to found node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx;

	current = head;
	for (idx = 0; idx < index && current != NULL; idx++)
	{
		current = current->next;
	}

	return (current);
}
