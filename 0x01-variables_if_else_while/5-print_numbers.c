#include <string.h>
#include <stdio.h>
/**
* main - Outputs digits from 0 to 9
*
* Return: 0 as the terminator
*/
int main(void)
{
	int i;
	char az[10] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(az[i]);
	}
	putchar('\n');
	return (0);
}
