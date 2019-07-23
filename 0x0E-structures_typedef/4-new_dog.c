#include <stdlib.h>

char *_strdup(char *str);
/**
 * _strdup - main entry
 * @str: pointer to a string
 *
 *Description: return a pointer to a newly allocated space in memory
 * Return: pointer a
 */
char *_strdup(char *str)
{
	int i;
	int j;
	int strlen = 0;
	char *a = NULL;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		strlen++;
	a = malloc(sizeof(char) * (strlen + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];
		a[i] = '\0';
	return (a);
}

#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - entry point
 * @name: pointer to the name
 * @age: age of the dog
 * @owner: pointer to the owner
 *
 * Return: a
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);
	a->name = _strdup(name);
		if (a->name == NULL)
		{
			free(a);
			return (NULL);
		}
	a->age = age;
	a->owner = _strdup(owner);
		if (a->owner == NULL)
		{
			free(a->name);
			free(a);
			return (NULL);
		}
	return (a);
}
