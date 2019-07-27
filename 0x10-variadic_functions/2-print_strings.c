#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - main entry, use this function to print
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: ellipses
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *combo_strings;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		combo_strings = va_arg(strings, char*);
		if (strings == NULL)
			printf("(nil)");
		printf("%s", combo_strings);
		if (1 + i != n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
