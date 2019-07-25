#include <stdio.h>
#include "3-calc.h"

/**
 * main - compute simple math operations
 * @argc: number of args in argv, should be 4
 * @argv: args containing 2 numbers and operator
 * Return: Success(0), incorrect num of args(98), invalid op(99),
 * divide by zero(100)
  */
int main(int argc, char *argv[])
{
	int (*math)(int, int), num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	math = get_op_func(argv[2]);
	if (math == NULL)
	{
		printf("Error\n");
		return (99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", math(num1, num2));
	return (0);
}
