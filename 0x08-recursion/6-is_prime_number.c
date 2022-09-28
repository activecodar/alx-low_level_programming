#include "main.h"

/**
 * is_prime - checks if number is prime
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % 1 == 0)
		{
			return (1);
		}
		else
		{
			is_prime(n, n - 1);
		}
	}
}

/**
 * is_prime_number - returns a prime number
 * @n: number to be checked
 *
 * Return: prime value
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime(n, n - 1));
}
