#include "lists.h"
/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: doubly linked list pointer
*
* Return: Number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head;
	size_t node_count;

	head = h;
	node_count = 0;

	while (head != NULL)
	{
		printf("%i\n", head->n);
		head = head->next;
		node_count++;
	}

	return (node_count);
}
