#include "lists.h"

/**
* handle_null_head_allocate_node - create new node
* @h: doubly linked list pointer
* Return: New node address
*/

dlistint_t *handle_null_head_allocate_node(dlistint_t **h)
{
	dlistint_t *Node;

	if (h == NULL)
	{
		return (NULL);
	}
	Node = malloc(sizeof(dlistint_t));
	return (Node);
}

/**
* insert_dnodeint_at_index -  inserts a new node at a given position
* @h: doubly linked list pointer
* @idx: index to insert
* @n: data to be added
* Return: New node address
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *Node, *current;
	unsigned int i;

	Node = handle_null_head_allocate_node(h);
	if (Node == NULL)
	{
		return (NULL);
	}
	Node->n = n;
	if (idx == 0)
	{
		Node->prev = NULL;
		Node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = Node;
		}
		*h = Node;
		return (Node);
	}
	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(Node);
		return (NULL);
	}
	Node->prev = current;
	Node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = Node;
	}
	current->next = Node;
	return (Node);
}
