#include "dog.h"

/**
 * init_dog - struct
 * @d: the dog init
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return; void
*/


void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d)
	{
		d->owner = owner;
		d->age = age;
		d->name = name;
	}
}

#endif
