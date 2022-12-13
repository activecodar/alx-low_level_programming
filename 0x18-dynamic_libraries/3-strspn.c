#include "main.h"

/**
 * *_strspn - gets length of a prefix substring
 * @s: string to be searched
 * @accept: string containing value to be searched
 *
 * Return: returns number of bytes in intial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int idx;
	int idx2;
	int counter = 0;
	int accept_value = 0;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (idx2 = 0; accept[idx2] != '\0'; idx2++)
		{
			if (s[idx] == accept[idx2])
			{
				counter++;
				accept_value = 1;
			}
		}

		if (accept_value == 0)
		{
			return (counter);
		}
	}

	return (0);

}
