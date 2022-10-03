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
*_strdup - returns a pointer to a newly allocated space in memory
*@str: str to be cloned
*Return: NULL if str is NULL else pointer to newly allocated space
*/

char *_strdup(char *str)
{
	char *arr;
	int len;
	int idx;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);
	arr = malloc(1 * (len + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < len; idx++)
	{
		*(arr + idx) = str[idx];
	}

	return (arr);


}
