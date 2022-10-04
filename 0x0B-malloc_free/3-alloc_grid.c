#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers
*@width: width
*@height: height
*Return: NULL incase of error else pointer to 2d array of ints
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int idx;
	int idx2;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < height; idx++)
	{
		arr[idx] = (int *) malloc(sizeof(int) * width);
	}

	for (idx = 0; idx < height; idx++)
	{
		for (idx2 = 0; idx2 < width; idx2++)
		{
			arr[idx][idx2] = 0;
		}
	}

	return (arr);
}
