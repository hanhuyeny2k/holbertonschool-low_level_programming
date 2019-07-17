#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: value given from main
 * @av: pointer for a string
 *
 *Description: concatenate all the arguments of the program
 * Return: pointer arg
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int size = 0;
	char *arg = NULL;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	arg = malloc(sizeof(char) * (size + 1));
	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	return (arg);
}


