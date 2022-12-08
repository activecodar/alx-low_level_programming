#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: doubly linked list pointer
* @n: data to be added to the node
* Return: New node created
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *Node;
	dlistint_t *Last;

	Node = malloc(sizeof(dlistint_t));
	if (Node == NULL)
	{
		return (NULL);
	}

	Node->n = n;
	Node->next = NULL;

	if (*head == NULL)
	{
		Node->prev = NULL;
		*head = Node;
	}
	else
	{
		Last = *head;
		while (Last->next != NULL)
		{
			Last = Last->next;
		}

		Last->next = Node;
		Node->prev = Last;
	}

	return (Node);
}
