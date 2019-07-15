#include <stdio.h>
/**
 * main - entry point
 * @argv: an array containing program arguments
 * @argc: the size of the argv array
 *
 * Description: a program that prints all arguments it receives
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
