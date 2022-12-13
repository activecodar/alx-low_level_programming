#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int idx = 0;

	for (idx = 0; s1[idx] == s2[idx]; idx++)
	{
		if (s1[idx] == '\0')
		{
			return (0);
		}
	}

	return (s1[idx] - s2[idx]);
}
