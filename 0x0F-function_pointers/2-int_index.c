#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array with elements
 * @size: elements in array
 * @cmp: comparison function
 * Return: 0, 1 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int idx;
	unsigned int cast_size;
	int cmp_val;

	cast_size = (int) size;
	if (!array || !size || !cmp)
	{
		return (-1);
	}
	if (cast_size <= 0)
	{
		return (-1);
	}
	else
	{
		for (idx = 0; idx < cast_size; idx++)
		{
			cmp_val = cmp(array[idx]);
			if (cmp_val != 0)
			{
				return (idx);
			}
		}
	}

	return (-1);
}
