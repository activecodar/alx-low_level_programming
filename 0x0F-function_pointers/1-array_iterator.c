#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes f() given as a param on each element of an array
 * @array: array whose elements are passsed as params
 * @size: size of the array
 * @action: function to execute the elements
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;
	unsigned int cast_size;

	if (!array || !action || !size)
	{
		return;
	}


	cast_size = (int) size;

	for (idx = 0; idx < cast_size; idx++)
	{
		action(array[idx]);
	}
}
