#include "holberton.h"
/**
 * puts2 - entry point
 * @str: parameter for a variable
 *
 * Description: prints one char out of 2 of a string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; (i = i + 2))
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
			break;
	}
	_putchar('\n');
}
