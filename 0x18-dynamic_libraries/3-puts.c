#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *@str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int counter;

	for (counter = 0; *str != '\0'; str++)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
