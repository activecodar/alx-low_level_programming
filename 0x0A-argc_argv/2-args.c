#include "main.h"


/**
 * print_param - prints a param
 * @arg: param to be printed
 *
 * Return: void
 */

void print_param(char *arg)
{

	while (*arg != '\0')
	{
		_putchar(*arg);
		arg++;
	}
	_putchar('\n');
}

/**
 * main - prints all arguments one at a time
 * @argc: the number of arguments passed
 * @argv: an array of pointers that store the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; idx < argc; idx++)
	{
		print_param(argv[idx]);
	}
	return (0);
}
