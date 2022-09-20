#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *@s: string to printed
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int counter;

	while (*(s + len) != '\0')
	{
		len++;
	}

	counter = len - 1;

	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}

	_putchar('\n');
}
