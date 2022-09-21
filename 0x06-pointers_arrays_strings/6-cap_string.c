#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *s)
{
	int idx;
	int idx2;

	char sp_chars[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		if (idx == 0 && s[idx] >= 'a' && s[idx] <= 'z')
		{
			s[idx] -= 32;
		}

		for (idx2 = 0; idx2 < 13; idx2++)
		{
			if (s[idx] == sp_chars[idx2] && (s[idx + 1] >= 'a' && s[idx + 1] <= 'z'))
			{
				s[idx + 1] -= 32;
			}
		}
	}

	return (s);
}
