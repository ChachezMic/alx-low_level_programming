#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defining a struct for a dog
 * @name:dog's name
 * @age: age of the dog
 * @owner: points to dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
