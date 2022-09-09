#include <string.h>
#include <stdio.h>
/**
* main - Outputs alphabet and new line
*
* Return: 0 as the terminator
*/
int main(void)
{
	int i;
	char az[24] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
		putchar(az[i]);
	}
	putchar('\n');
	return (0);
}
