#include <stdio.h>
#include "dog.h"
/**
 * print_dog - displays dogs details
 * @d:points us to the struct
 * Return:ALWAYS 0 (success)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	{
		printf("%s\n", (d->name != NULL) ? d->name : "(nil)");
				printf("%2f\n", d->age);
				printf("%s\n", (d->owner != NULL) ? d->owner : "(nil)");
					}
					return;
					}
