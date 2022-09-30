#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0;

	while (src[idx] != '\0' && idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}

	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}

	return (dest);
}
