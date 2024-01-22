#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a struct dog
 * @d: Pointer to the struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL) /* Check if the pointer is not NULL */
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
