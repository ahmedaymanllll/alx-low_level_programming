#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: long struct in big kitty world
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif