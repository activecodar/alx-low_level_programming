#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
