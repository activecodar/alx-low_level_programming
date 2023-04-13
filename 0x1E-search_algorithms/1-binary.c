#include "search_algos.h"

/**
 * print_list - prints an array of integers
 * @array: pointer to the first element of the array to print
 * @left: left most bound
 * @right: right most bound
 *
 * Description: This function prints an array of integers with comma and
 * space separators.
 *
 * Return: void
 */


void print_list(int *array, size_t left, size_t right)
{
	size_t idx;

	for (idx = left; idx <= right; idx++)
	{
		printf("%d", array[idx]);
		if (idx < right)
		{
			printf(", ");
		}
	}
}

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if it's not found
 */

int binary_search(int *array, size_t size, int value)
{

	int left;
	int right;
	int mid;

	left = 0;
	right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		print_list(array, left, right);
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}

		else if (array[mid] > value)
		{
			right = mid - 1;
		}

		else
		{
			left = mid + 1;
		}
	}

	return (-1);

}
