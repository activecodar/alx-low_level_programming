#include <stdlib.h>
#include <stdio.h>
/**
* main - Outputs base16 elements
*
* Return: 0 as the terminator
*/
int main(void)
{
	int i;
	char az[16] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(az[i]);
	}
	putchar('\n');

	return (0);
}
