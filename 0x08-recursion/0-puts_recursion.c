#include "holberton.h"
/**
 * _puts_recursion - entry point
 * @s: pointer
 *
 * Description: print a string using putchar
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
