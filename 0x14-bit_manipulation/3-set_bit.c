#include "holberton.h"

/**
 * set_bit - main entry, set the value of a bit to 1 at a given index
 * @n: pointer pointing the binary number
 * @index: index that starts from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index >= 64)
		return (-1);
	bit = bit << index;
	*n = *n | bit;
	return (1);
}
