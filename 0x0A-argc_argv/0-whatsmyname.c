#include "main.h"
/**
 * main - A program that prints its name
 * @argc: The size of the array agrv
 * @argv: An array of pointers to char
 *
 * Return: 0 on success
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{

	while (*argv[0] != '\0')
	{
		_putchar(*argv[0]);
		argv[0]++;
	}
	_putchar('\n');
	return (0);
}
