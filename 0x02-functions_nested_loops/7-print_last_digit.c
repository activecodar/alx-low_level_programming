#include "main.h"

/**
 * print_last_digit - return last digit of number
 *@n: integer being validated
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int num;
	int final_num;

	num = n < 0 ? ((n * -1) % 10) : (n % 10);
	final_num = num < 0 ? (num * -1) : num;
	_putchar('0' + final_num);
	return (final_num);
}
