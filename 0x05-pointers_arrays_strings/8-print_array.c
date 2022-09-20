#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array to be printed
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		if (idx == 0)
		{
			printf("%d", a[idx]);
		}
		else
		{
			printf(", %d", a[idx]);
		}
	}

	putchar('\n');
}
