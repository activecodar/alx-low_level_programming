#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if it's not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;


	if (array == NULL)
	{
		return (-1);
	}
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}

	return (-1);

}
