#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *@c: char to be validated
 * Return: 1 if alpha else 0.
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ? 1 : 0);
}
