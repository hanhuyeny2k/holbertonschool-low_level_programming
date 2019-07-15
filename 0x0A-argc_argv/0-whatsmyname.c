#include <stdio.h>
/**
 * main - entry point
 * @argv: an array containing program arguments
 * @argc: the size of the argv array
 *
 * Description: a program that prints its name
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
