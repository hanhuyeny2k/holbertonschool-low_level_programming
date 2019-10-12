#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: a pointer to the newly created hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int a = hash_djb2(key);
	unsigned long int index;

	index = a % size;
	return (index);
}
