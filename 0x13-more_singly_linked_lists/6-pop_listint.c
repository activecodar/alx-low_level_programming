#include "lists.h"

/**
 * pop_listint - Pops the head node of a listint_t list.
 * @head: A pointer to head of the listint_t list.
 *
 * Return: Head's data else 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_head;
	int rtn_data;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp_head = *head;
		rtn_data = (*head)->n;
		*head = (*head)->next;
		free(temp_head);
		return (rtn_data);
	}
}
