#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index of linked list
* @head: doubly linked list pointer
* @index: node index to be deleted
* Return: 1 if success -1 if fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}

		return (1);
	}
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	next = current->next;
	if (next != NULL)
	{
		next->prev = current->prev;
	}
	current->prev->next = next;
	free(current);
	return (1);
}
