#include <stddef.h>
#include "main.h"

/**
 * *_strchr - locates character in string
 * @s: string to be searched
 * @c: character to be found
 *
 * Return: a pointer to the first occurrence of char
 */

char *_strchr(char *s, char c)
{
	int temp_counter;

	while (temp_counter != 0)
	{
		temp_counter = *s++;
		if (temp_counter == c)
		{
			return (s - 1);
		}
	}

	return (NULL);
}
