#include "lists.h"
/**
 * free_listint - Free all nodes from a list
 * @head: Pointer to the start of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp_head;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp_head = head;
		head = head->next;
		free(temp_head);
	}
}
