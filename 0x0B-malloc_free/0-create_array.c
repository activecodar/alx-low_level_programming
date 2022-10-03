#include "main.h"
#include <stdlib.h>

/**
*create_array - creates array of chars
*@size: size of the array
*@c: character to intialiaze array
*Return: NULL i size is 0 else pointer to array
*/


char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int idx;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(1 * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
	{
		arr[idx] = c;
	}

	return (arr);
}
