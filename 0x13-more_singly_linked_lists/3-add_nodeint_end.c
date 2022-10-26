#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: Pointer to the pointer to the start of the list
 * @n: The number to assign to integer value of the node
 *
 * Return: Address of new node if success else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	current = *head;

	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (current != NULL)
	{
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
