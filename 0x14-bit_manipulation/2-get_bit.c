#include "holberton.h"

/**
 * get_bit - main entry, returns the value of a bit at a given index
 * @n: integer passes through
 * @index: the indext starting from 0 of the bit
 *
 * Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index >= 64)
		return (-1);
	bit = bit << index;
	if (n & bit)
		return (1);
	return (0);
}
