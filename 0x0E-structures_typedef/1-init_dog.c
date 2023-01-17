#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes the struct dog
 * @d: pointer to struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of its owner
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
