#include "lists.h"
/**
* sum_dlistint - sum of all the data of a linked list.
* @head: doubly linked list pointer
* Return: sum of data in all nodes
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
