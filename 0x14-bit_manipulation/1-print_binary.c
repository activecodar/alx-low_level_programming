#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int idx;
	int counter;
	unsigned long int temp;

	counter = 0;

	for (idx = 63; idx >= 0; idx--)
	{
		temp = n >> idx;

		if (temp & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
	}

	if (!counter)
	{
		_putchar('0');
	}
}
