#include "holberton.h"

/**
 * get_endianness - main entry, check for little or big endianness
 *
 * Return: 0 if big endian, or 1 if little endian
 */

int get_endianness(void)
{
	int a = 0xff000000;
	int is_little;
	char *c = (void *) &a;

	is_little = !*c;
	return (is_little);
}
