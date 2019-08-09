#include "holberton.h"

/**
 * flip_bits - main entry, returns the number of bits that flips
 * @n: binary number
 * @m: binary number
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int xor;

	for (xor = n ^ m; xor != 0; xor = xor >> 1)
	{
		if (xor & 1)
			counter++;
	}
	return (counter);
}

