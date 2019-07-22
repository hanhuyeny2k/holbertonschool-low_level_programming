#include "dog.h"
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
