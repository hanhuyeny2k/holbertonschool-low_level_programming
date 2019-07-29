#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * helper_char - main entry, helper function, use this function to print
 * @a: the name of the list that passes through
 *
 */
void helper_char(va_list a)
{
	printf("%c", va_arg(a, int));
}
/**
 * helper_int - main entry, helper function, use this function to print
 * @b: the name of the list that passes through
 *
 */
void helper_int(va_list b)
{
	printf("%d", va_arg(b, int));
}
/**
 * helper_float - main entry, helper function, use this function to print
 * @c: the name of the list that passes through
 *
 */
void helper_float(va_list c)
{
	printf("%f", va_arg(c, double));
}
/**
 * helper_string - main entry, helper function, use this function to print
 * @d: the name of the list that passes through
 *
 */
void helper_string(va_list d)
{
	char *str;

	str = va_arg(d, char *);
	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - main entry, use this function to print
 * @format: a list of string to be printed
 * @...: ellipses
 *
 */
void print_all(const char * const format, ...)
{
	int a;
	int b;
	va_list diff_form;
	helper_t all[] = {
		{"c", helper_char},
		{"i", helper_int},
		{"f", helper_float},
		{"s", helper_string},
		{NULL, NULL}
	};
	char *str = "";

	va_start(diff_form, format);
	a = 0;
	b = 0;
	while (format[a] != '\0' && (format))
	{
		b = 0;
		while (all[b].op)
		{
			if (*(all[b]).op == format[a])
			{
				printf("%s", str);
				all[b].f(diff_form);
				str = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(diff_form);
}
