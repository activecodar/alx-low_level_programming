#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Outputs last digit of int
*
* Return: 0 as the terminator
*/
int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst = n % 10;
	if (lst > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lst);
	} else if (lst == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lst);
	} else if (lst < 6 && lst != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lst);
	}

	return (0);
}
