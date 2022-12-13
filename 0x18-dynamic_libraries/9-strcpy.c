#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, idx;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (idx = 0; idx < len; idx++)
	{
		dest[idx] = src[idx];
	}
	dest[idx] = '\0';

	return (dest);
}
