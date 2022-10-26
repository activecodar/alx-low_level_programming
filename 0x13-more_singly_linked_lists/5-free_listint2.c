#include "lists.h"
/**
 * free_listint2 - Free all nodes from a list, and set head to NULL
 * @head: Pointer to the pointer to the start of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;
	listint_t *current;

	if (head == NULL)
	{
		return;
	}
	else
	{
		current = *head;
		while (current != NULL)
		{
			temp_node = current;
			current = current->next;
			free(temp_node);
		}
		*head = NULL;
	}
}
