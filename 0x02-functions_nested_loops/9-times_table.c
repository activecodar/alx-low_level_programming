#include "main.h"

/**
 * times_table - multiplication table
 *
 * Return: void.
 */

void times_table(void)
{
	int num = 0;
	int num2;
	int num3;

	while (num <= 9)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			num3 = num * num2;

			if (num2 == 0)
			{
				_putchar(num3 + '0');
			} else if (num2 > 0 && num3 <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num3 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num3 / 10) + '0');
				_putchar((num3 % 10) + '0');
			}
		}
		_putchar('\n');
		num++;
	}
}
