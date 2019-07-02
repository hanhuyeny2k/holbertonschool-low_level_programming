#include "holberton.h"
#include <stdio.h>
/**
 * print_array - entry point
 * @n: parameter of variable
 * @a: pointer to array
 *
 * Description: print elements of an array of integers
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	if (i != n - 1)
	{
		printf("%d, ", a[i]);
	}
	else
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
