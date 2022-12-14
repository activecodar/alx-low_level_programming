#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int idx;
	unsigned int num;

	num = 0;

	if (!b)
	{
		return (0);
	}

	for (idx = 0; b[idx]; idx++)
	{
		if (b[idx] < '0' || b[idx] > '1')
		{
			return (0);
		}

		num = 2 * num + (b[idx] - '0');
	}

	return (num);
}
