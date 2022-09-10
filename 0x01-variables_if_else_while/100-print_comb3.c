# include <stdio.h>

/**
 * main - oututs two smallest possible number combos
 *
 * Return: 0 as the terminator
 */
int main(void)
{
	int outter;
	int inner;

	outter = 0;

	while (outter <= 9)
	{
		for (inner = 0; inner <= 9; inner++)
		{
			if (outter < inner)
			{
				putchar(outter + '0');
				putchar(inner + '0');
				if (outter != 8 || (outter == 8 && inner != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		outter++;
	}
	putchar('\n');

	return (0);
}
