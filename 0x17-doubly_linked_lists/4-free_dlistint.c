#include "lists.h"
/**
* free_dlistint - frees a dlistint_t list
* @head: doubly linked list pointer
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *temp;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
