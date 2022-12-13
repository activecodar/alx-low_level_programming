#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: char to validate
 *
 * Return: 1 if lower else 0
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122 ? 1 : 0);
}
