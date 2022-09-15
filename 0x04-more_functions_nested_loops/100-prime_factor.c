#include <stdio.h>

/**
 * main - largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long largest_prime = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			largest_prime = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", largest_prime);
	return (0);
}
