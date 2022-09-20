#include "main.h"

/**
 * puts2 - prints out chars
 *@str: str to be printed
 * Return: void
 */

void puts2(char *str)
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
