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

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
