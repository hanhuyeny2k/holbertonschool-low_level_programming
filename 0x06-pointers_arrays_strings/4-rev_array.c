#include "holberton.h"
/**
 * *reverse_array - entry point
 * @a: pointer
 * @n: the length of the string
 *
 * Description: reverse the content of an array of integers
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < (n / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
