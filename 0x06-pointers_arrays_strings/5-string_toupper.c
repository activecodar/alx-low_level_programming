#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
	int counter = 0;
	int idx;

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (idx = 0; idx < counter; idx++)
	{
		if (s[idx] >= 'a' && s[idx] <= 'z')
		{
			s[idx] = s[idx] - 32;
		}
	}

	return (s);
}
