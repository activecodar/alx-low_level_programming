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
	char az[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(az[i]);
	}
	putchar('\n');

	return (0);
}
