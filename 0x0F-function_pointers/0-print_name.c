#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - main entry
 * @name: given name passing in
 * @f: pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	f(name);
}
