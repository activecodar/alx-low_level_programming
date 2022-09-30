#include <stdlib.h>
#include "main.h"


/**
 * print_char - prints characters in a string
 * @arg: str to be printed
 *
 * Return: void
 */

void print_char(char *arg)
{

	while (*arg != '\0')
	{
		_putchar(*arg);
		arg++;
	}
}

/**
 * print_int - prints ints
 * @num: int to be printed
 *
 * Return: void
 */

void print_int(int num)
{

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
	{
		print_int(num / 10);
	}

	_putchar(num % 10 + '0');
}

/**
 * main - prints the minimum number of coins for change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cents;
	int idx;
	int coin_count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		print_char("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		_putchar('0');
		_putchar('\n');
	}

	for (idx = 0; idx < 5 && cents >= 0; idx++)
	{
		while (cents >= coins[idx])
		{
			coin_count++;
			cents -= coins[idx];
		}
	}

	print_int(coin_count);
	_putchar('\n');
	return (0);

}
