#include "lists.h"

/**
 * print_chars - prints out chars
 * @str: str to be printed
 * Return: void
 */

void print_chars(char *str)
{
	int len = 0;
	int counter;

	while (str[len] != '\0')
	{
		len++;
	}

	counter = 0;

	while (counter < len)
	{
		_putchar(str[counter]);
		counter += 2;
	}

	_putchar('\n');
}


/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: node count
 */
size_t print_list(const list_t *h)
{
	unsigned int counter;
	char *null_text = "[0] (nil)";
	const list_t *current = h;

	if (current->str == NULL)
	{
		print_chars(null_text);
	}

	counter = 0;

	while (current != NULL)
	{
		current = current->next;
		counter++;
	}

	return (counter);
}
