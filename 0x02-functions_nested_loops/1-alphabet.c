#include "main.h"
/**
* print_alphabet - prints alpahabet in lowercase
*
* Return: void
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	};
	_putchar('\n');
}
