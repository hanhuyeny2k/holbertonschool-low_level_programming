#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argv: an array containing program arguments
 * @argc: the size of the argv array
 *
 * Description: a program that adds positive numbers
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 0)
		printf("0");
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
