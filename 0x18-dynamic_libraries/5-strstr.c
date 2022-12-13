#include <stddef.h>
#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int idx;
	int idx2;

	for (idx = 0; haystack[idx] != '\0'; idx++)
	{
		for (idx2 = 0; needle[idx2] != '\0'; idx2++)
		{
			if (haystack[idx + idx2] != needle[idx2])
			{
				break;
			}
		}

		if (!needle[idx2])
		{
			return (&haystack[idx]);
		}
	}

	return (NULL);

}
