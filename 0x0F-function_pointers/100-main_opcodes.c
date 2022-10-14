#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes_to_int;
	int idx;
	char *array_;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes_to_int = atoi(argv[1]);

	if (bytes_to_int < 0)
	{
		printf("Error\n");
		return (2);
	}

	array_ = (char *)main;

	idx = 0;

	while (idx < bytes_to_int)
	{
		if (idx == (bytes_to_int - 1))
		{
			printf("%02hhx\n", array_[idx]);
			break;
		}
		printf("%02hhx ", array_[idx]);
		idx++;
	}

	return (0);

}
