#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int idx;
	int counter;
	unsigned long int temp;
	unsigned long int excl = n ^ m;

	counter = 0;

	for (idx = 63; idx >= 0; idx--)
	{
		temp = excl >> idx;
		if (temp & 1)
		{
			counter++;
		}
	}

	return (counter);
}
