#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		return (NULL);
	}
	newDog->owner = strdup(owner);
	if (newDog->owner == NULL)
	{
		return (NULL);
	}
	newDog->age = age;
	return (newDog);
}
