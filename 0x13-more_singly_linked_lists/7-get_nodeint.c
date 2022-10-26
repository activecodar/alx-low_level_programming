#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node if sucess else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *current;

	counter = 0;
	current = head;

	while (current != NULL)
	{
		if (counter == index)
		{
			return (current);
		}
		current = current->next;
		counter++;
	}

	return (NULL);
}
