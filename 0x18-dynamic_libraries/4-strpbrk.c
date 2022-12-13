#include <stddef.h>
#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: string containing bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int idx;
	int idx2;
	
	for (idx = 0; *s != '\0'; idx++)
	{
		for (idx2 = 0; accept[idx2] != '\0'; idx2++)
		{
			if (*s == accept[idx2])
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
