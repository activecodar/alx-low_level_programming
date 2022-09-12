#include "main.h"
/**
* print_alphabet_x10 - prints alphabet in lowercase 10 times
*
* Return: void
*/

void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	for (counter = 1; counter < 11; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		};
		_putchar('\n');
	};
}

/**
* main - calls alphabet function
*
* Return: 0 as the terminator
*/

int main(void)
{
	print_alphabet_x10();
	return (0);
}
