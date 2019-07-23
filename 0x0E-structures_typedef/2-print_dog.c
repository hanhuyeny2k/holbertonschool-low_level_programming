#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - entry point
 * @d: pointer to struct dog
 *
 * Return: nothing if null
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n)");
	else
		printf("Owner: %s\n", d->owner);
	if (d == NULL)
		return;
}
