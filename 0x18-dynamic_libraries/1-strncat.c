#include "main.h"
/**
 * *_strncat - concantanate two char*
 *@dest: first string
 *@src: second string
 *@n: number of bytes
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int idx = 0;
	int idx2 = 0;

	while (dest[idx] != '\0')
	{
		idx++;
	}

	while (src[idx2] != '\0' && idx2 < n)
	{
		dest[idx] = src[idx2];
		idx++;
		idx2++;
	}

	dest[idx] = '\0';

	return (dest);
}
