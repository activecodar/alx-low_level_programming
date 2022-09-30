#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: char to validate
 *
 * Return: 1 if lower else 0
 */

int _isupper(int c)
{
	return (c >= 65 && c <= 90 ? 1 : 0);
}
