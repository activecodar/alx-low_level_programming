#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings separated by a custom param
 * @separator: custom separator
 * @n: number of params
 * @...: number of params/strs
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	char *arg;
	va_list args;

	va_start(args, n);

	for (idx = 0; idx < n; idx++)
	{
		arg = va_arg(args, char *);
		if (!arg)
		{
			arg = "(nil)";
		}
		printf("%s", arg);
		if (separator && idx < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
