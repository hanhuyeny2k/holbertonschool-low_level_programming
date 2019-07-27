#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - main entry, use this function to print
 * @n: given a list
 * @...: ellipses
 *
 * Return: the sum of the list
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum_up = 0;
	va_list listo;

	va_start(listo, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
			sum_up += va_arg(listo, int);
	}
	va_end(listo);
	return (sum_up);
}
