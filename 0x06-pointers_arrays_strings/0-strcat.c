#include "main.h"
/**
 * *_strcat - concantanate two char*
 *@dest: first string
 *@src: second string
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	int idx = 0;
	int idx2 = 0;

	while (dest[idx] != '\0')
	{
		idx++;
	}

	while ((dest[idx++] = src[idx2++]) != '\0')
		;

	return (dest);
}
