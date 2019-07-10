#include "holberton.h"
/**
 * _print_rev_recursion - entry point
 * @s: pointer
 *
 * Description: print a string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
