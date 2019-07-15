#include <stdio.h>
/**
 * main - entry point
 * @argv: an array containing program arguments
 * @argc: the size of the argv array
 *
 * Description: a program that prints the number of arguments passed into it
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
