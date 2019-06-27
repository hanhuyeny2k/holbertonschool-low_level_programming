#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - entry point
 * @n: input integer
 * Description: counting hours
 * Return: 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for ( ; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		for ( ; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
