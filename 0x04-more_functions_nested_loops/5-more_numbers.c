#include "main.h"

/**
 * more_numbers - print 0-14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	char nums[20] = "01234567891011121314";
	int index;
	int num;

	for (num = 0; num <= 9; num++)
	{
		for (index = 0; index <= 19; index++)
		{
			_putchar(nums[index]);
		}
		_putchar('\n');
	}
}
