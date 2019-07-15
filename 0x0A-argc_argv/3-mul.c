#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argv: an array containing program arguments
 * @argc: the size of the argv array
 *
 * Description: a program that multiplies two numbers
 * Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
		return (1);
}
