#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initiàlises the variable of the struct dog
 * @r:checker
 * @name: dog's name
 * @age:dog's age
 * @owner:dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

