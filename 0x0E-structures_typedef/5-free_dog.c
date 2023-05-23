#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocates for the struct dog
 * @d: struct dog to be freed
 * Return: returns nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
