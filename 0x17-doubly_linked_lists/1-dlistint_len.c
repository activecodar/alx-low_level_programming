#include "lists.h"
/**
* dlistint_len - returns the number of elements in a linked dlistint_t list
* @h: doubly linked list pointer
*
* Return: Number of elements.
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head;
	size_t node_count;

	head = h;
	node_count = 0;

	while (head != NULL)
	{
		head = head->next;
		node_count++;
	}

	return (node_count);
}
