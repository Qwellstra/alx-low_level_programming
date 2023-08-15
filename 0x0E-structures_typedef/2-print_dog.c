#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function to print struct dog
 * @d: the struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %\n", d->name, d->age, d->owner);
}
