#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers separated by a custom param
 * @separator: custom separator
 * @n: number of params
 * @...: number of params/ints
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	int arg;
	va_list args;

	va_start(args, n);

	for (idx = 0; idx < n; idx++)
	{
		arg = va_arg(args, int);

		printf("%d", arg);
		if (separator && idx < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
