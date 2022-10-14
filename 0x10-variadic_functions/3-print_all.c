#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints formatted str
 * @format: a list of types of arguments passed to the function.
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int idx, idx2, idx3;
	char *str;
	const char format_args[] = {'c', 'i', 'f', 's'};

	va_start(args, format);
	idx = 0, idx3 = 0;
	while (format && format[idx])
	{
		idx2 = 0;
		while (format_args[idx2])
		{
			if (format[idx] == format_args[idx2] && idx3)
			{
				printf(", ");
				break;
			}

			idx2++;
		}
		switch (format[idx])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				idx3 = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				idx3 = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				idx3 = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				idx3 = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;

		}
		idx++;
	}
	printf("\n");
	va_end(args);
}
