#include "main.h"

/**
 * rev_string - reverse an array of chars
 *@s: array of chars to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int counter;
	char temp;

	while (*(s + len) != '\0')
	{
		len++;
	}

	counter = len - 1;

	len = 0;
	while (len < counter)
	{
		temp = s[len];
		s[len] = s[counter];
		s[counter] = temp;
		len++;
		counter--;
	}
}
