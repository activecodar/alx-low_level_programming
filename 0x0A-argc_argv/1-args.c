#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments passed
 * @argv: an array of pointers that store the arguments
 *
 * Return: 0
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	_putchar('0' + argc - 1);
	_putchar('\n');
	return (0);
}
