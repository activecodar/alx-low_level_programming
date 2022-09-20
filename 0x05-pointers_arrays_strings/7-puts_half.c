#include "main.h"

/**
 * puts_half - outputs half of a string
 *
 * @str: string to be printed
 *
 * Return void
 */
void puts_half(char *str)
{
	int len;
	int idx1;
	int idx2;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (idx1 = len / 2; str[idx1] != '\0'; idx1++)
		{
			_putchar(str[idx1]);
		}
	}
	else if (len % 2)
	{
		for (idx2 = ((len - 1) / 2) + 1; idx2 < len ; idx2++)
		{
			_putchar(str[idx2]);
		}
	}
	_putchar('\n');
}
