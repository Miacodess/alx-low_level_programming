#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type 'struct dog'
 * @d: struct dog
 * @name: string
 * @age: float
 * @owner: string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
