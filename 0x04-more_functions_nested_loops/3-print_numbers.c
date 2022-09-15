#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
