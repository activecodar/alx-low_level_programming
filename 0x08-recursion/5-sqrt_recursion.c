#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be found
 * Return: the natural square root otherwise -1
 */

int _sqrt_recursion(int n)
{
	int a;
	int b;

	if (n < 0)
	{
		return (-1);
	}

	a = _sqrt_recursion(n - 1);
	b = a + 1;

	if (n < b * b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}
