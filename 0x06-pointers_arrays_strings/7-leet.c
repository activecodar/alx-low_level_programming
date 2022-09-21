#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int idx;
	int idx2;
	char let[11] = "aAEeoOTtlL";
	char num[11] = "4433007711";

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (idx2 = 0; idx2 < 11; idx2++)
		{
			if (s[idx] == let[idx2])
			{
				s[idx] = num[idx2];
			}
		}
	}
	return (s);
}
