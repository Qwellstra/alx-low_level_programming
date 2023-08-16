#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A funct to initialize the struct dog
 * @d: a pointer to struct dog to initialize
 * @name: The name to initialize
 * @age: The age  to initialize
 * @owner: The ownerto initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
