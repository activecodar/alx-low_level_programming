#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int num, num2;

		for (num = 0; num < size; num++)
		{
			for (num2 = 0; num2 < size; num2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
