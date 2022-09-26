#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */

void print_chessboard(char (*a)[8])
{
	int idx;
	int idx2;

	for (idx = 0; idx < 8; idx++)
	{
		for (idx2 = 0; idx2 < 8; idx2++)
		{
			_putchar(a[idx][idx2]);
		}
		_putchar('\n');
	}

}
