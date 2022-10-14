#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all provided params
 * @n: number of params
 * @...: params to be summed
 * Return: 0 if no params else sum of params
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int idx;
	int arg;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	sum = 0;

	for (idx = 0; idx < n; idx++)
	{
		arg = va_arg(args, int);
		sum += arg;
	}

	va_end(args);

	return (sum);
}
