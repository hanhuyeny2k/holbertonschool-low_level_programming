#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - main entry, use this function to print
 * @separator: the string
 * @n: number of integer to print
 * @...: ellipses
 *
 * Return: empty if separator is NULL, else return the integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	int comprise = 0;

	va_start(num, n);
		if (separator == NULL)
			separator = "";
	for (i = 0; i < n; i++)
	{
		comprise = va_arg(num, int);
			printf("%d", comprise);
			if (1 + i != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
