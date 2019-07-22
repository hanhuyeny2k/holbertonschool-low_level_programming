#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - entry point
 * @d: pointer to name, age, owner
 * @name: pointer to the name
 * @age: age of the dog
 * @owner: pointer to the owner
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
