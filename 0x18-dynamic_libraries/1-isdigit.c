#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: char to validate
 *
 * Return: 1 if lower else 0
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57 ? 1 : 0);
}
