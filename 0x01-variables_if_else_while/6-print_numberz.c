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

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
