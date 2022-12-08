#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: doubly linked list pointer
* @n: data to be added to the node
* Return: New node created
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *Node = malloc(sizeof(dlistint_t));

	if (Node == NULL)
	{
		return (NULL);
	}

	Node->n = n;
	Node->prev = NULL;

	if (*head == NULL)
	{
		Node->next = NULL;
		*head = Node;
	}
	else
	{
		Node->next = *head;
		(*head)->prev = Node;
		*head = Node;
	}

	return (Node);
}

