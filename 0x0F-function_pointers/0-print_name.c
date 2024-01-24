#include <stdlib.h>
#include "function_pointer.h"
/**
 * print_name - prints a name as is
 * @name: name of the person
 *
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
