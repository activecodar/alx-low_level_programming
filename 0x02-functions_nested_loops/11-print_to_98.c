#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers
 *@n : int from where to start
 * Return: void
 */

void print_to_98(int n)
{
	int num;

	if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			if (num != 98)
			{
				printf("%d, ", num);
			}
			else
			{
				printf("%d", num);
			}
		}
	}
	else
	{
		for (num = n; num <= 98; num++)
		{
			if (num != 98)
			{
				printf("%d, ", num);
			}
			else
			{
				printf("%d", num);
			}
		}
	}
	putchar('\n');
}
