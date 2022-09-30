#include "main.h"

/**
 * char_to_int - converts a char to int
 * @chr: the chr to be converted
 * Return: converted int
 */
int char_to_int(char *chr)
{
	int num = 0;
	int digit;
	int arthm_sign = 0;
	int idx = 0;

	while (chr[idx] != '\0')
	{
		if (chr[idx] == '-')
		{
			arthm_sign++;
		}

		if (chr[idx] >= '0' && chr[idx] <= '9')
		{
			digit = chr[idx] - '0';

			if (arthm_sign % 2)
			{
				digit = -digit;
			}

			num = num * 10 + digit;
		}
		idx++;
	}

	return (num);
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
 * multiply - multiplies two ints
 * @x: first int
 * @y: second num
 * Return: product of multiplication
 */

int multiply(int x, int y)
{
	return (x * y);
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
	if (argc != 3)
	{
		char *error = "Error\n";

		print_char(error);
		return (1);
	}
	else
	{
		int x = char_to_int(argv[1]);
		int y = char_to_int(argv[2]);
		int res = multiply(x, y);

		print_int(res);
		_putchar('\n');
		return (0);

	}
}
