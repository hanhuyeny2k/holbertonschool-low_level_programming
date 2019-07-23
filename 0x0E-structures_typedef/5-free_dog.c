#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - main entry
 * @d: pointer to the structure of dog_t
 *
 * Return: return nothing when NULL
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
