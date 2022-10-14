#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int first_int;
	int second_int;
	char op;
	int (*op_func)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	first_int = atoi(argv[1]);
	second_int = atoi(argv[3]);
	op = *argv[2];

	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}
	if ((op == '%' || op == '/') && (first_int == 0 || second_int == 0))
	{
		printf("Error\n");
		return (100);
	}
	res = op_func(first_int, second_int);
	printf("%i\n", res);
	return (0);
}
