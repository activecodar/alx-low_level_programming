#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int num, num2;

		for (num = 1; num <= size; num++)
		{
			for (num2 = num; num2 < size; num2++)
			{
				_putchar(' ');
			}

			for (num2 = 1; num2 <= num; num2++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
