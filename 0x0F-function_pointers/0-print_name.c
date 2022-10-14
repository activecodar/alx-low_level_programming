#include "function_pointers.h"

/**
 * print_name - calls a function that in turn prints a name
 * @name: name of the person
 * @f: pointer to name calling function
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
