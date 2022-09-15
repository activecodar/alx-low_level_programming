#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of dashes
 *
 * Return: void
 */

void print_line(int n)
{
	int counter = 0;

	while (counter < n && n > 0)
	{
		_putchar('_');
		counter++;
	}
	_putchar('\n');

}

