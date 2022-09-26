#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the size of data to be copied
 *
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		*(dest + counter) = *(src + counter);
	}

	return (dest);
}
