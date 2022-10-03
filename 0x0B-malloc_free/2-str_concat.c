#include "main.h"
#include <stdlib.h>
/**
*_strlen - returns the length of a str
*@str: str to return len for
*Return: length of str
*/
int _strlen(char *str)
{
	int len;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}


/**
*str_concat - concatanates two strings
*@s1: 1st string
*@s2: 2nd string
*Return: NULL or pointer to concatanated string
*/

char *str_concat(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	int full_len;
	int idx1;
	int idx2;
	char *arr;
	int counter;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	full_len = s1_len + s2_len;

	arr = malloc(s1_len + s2_len + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		*(s1) = '\0';
	}
	else if (s2 == NULL)
	{
		*(s2) = '\0';
	}
	for (idx1 = 0; idx1 < s1_len; idx1++)
	{
		*(arr + idx1) = s1[idx1];
	}

	for (counter = 0, idx2 = s1_len; idx2 < full_len; idx2++, counter++)
	{
		*(arr + idx2) = s2[counter];
	}

	return (arr);
}
