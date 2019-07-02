#include "holberton.h"
/**
 * swap_int - entry point
 * @a: parameter of a digit
 * @b: parameter of a digit
 *
 * Description: swap integers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
