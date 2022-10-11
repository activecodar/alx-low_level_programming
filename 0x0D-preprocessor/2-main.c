#include <stdio.h>

/**
 * main - prints filename from where it is compiled
 * Return: returns 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
