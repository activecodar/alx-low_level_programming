#include "main.h"

/**
 * print_most_numbers - prints nums from 0-9 but 2 and 4
 *
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		else
		{
			_putchar(num + '0');
		}
	}

	_putchar('\n');
}
