#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int j, i;
	int sum = 0;

	if (argv[1] == '\0')
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
