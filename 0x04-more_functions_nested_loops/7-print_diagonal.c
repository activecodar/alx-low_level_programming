#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int num = 0, num2;

	while (num < n && n > 0)
	{
		num2 = 0;
		while (num2 < num)
		{
			_putchar(' ');
			num2++;
		}

		_putchar('\\');
		_putchar('\n');
		num++;
	}
	if (num == 0)
		_putchar('\n');
}
