#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int idx;
	unsigned int sum_diag1 = 0;
	unsigned int sum_diag2 = 0;

	for (idx = 0; idx < size; idx++)
	{
		sum_diag1 += a[(size * 1) + idx];
		sum_diag2 += a[(size * (idx + 1)) - (idx + 1)];
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);

}
