#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Write a function that frees dogs.
 * @d: frees dogs
 *
 * Return: void
*/

void free_dog(dog_t *d)


{
	if (d)
	{
		if (d->owner)
			free(d->owner);
		if (d->name)
			free(d->name);
		free(d);
	}
}
