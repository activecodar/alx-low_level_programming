#include "main.h"

/**
 * main - outputs _putchar.
 *
 * Return: 0 as the terminator
 */

int main(void)
{
	char str[8] = "_putchar";
	int counter;

	for (counter = 0; counter < 8; counter++)
	{
		_putchar(str[counter]);
	};
	_putchar('\n');

	return (0);
}
