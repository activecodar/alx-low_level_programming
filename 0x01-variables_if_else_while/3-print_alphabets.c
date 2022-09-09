#include <stdlib.h>
#include <stdio.h>
/**
* main - Outputs alphabet
*
* Return: 0 as the terminator
*/
int main(void)
{
	int i;
	char az[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		putchar(az[i]);
	}
	putchar('\n');

	return (0);
}
