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
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
