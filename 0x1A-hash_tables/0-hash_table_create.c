#include "hash_tables.h"

/**
 * hash_table_create - main entry, create a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *index_pointer;
	hash_node_t **array;
	unsigned long int i;

	index_pointer = malloc(sizeof(hash_table_t));
	if (index_pointer == NULL)
		return (NULL);
	index_pointer->size = size;
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(index_pointer);
		return (NULL);
	}
	index_pointer->array = array;
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;
	return (index_pointer);
}
