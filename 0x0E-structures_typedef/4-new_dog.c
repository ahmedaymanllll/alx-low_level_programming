#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Write a function that creates a new dog.
 * @s: the string to length
 *
 * Return: length of @s
*/

int _strlen(const char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}

/**
 * _strcopy - a function that returns @d with copy str @s
 *
 * @s: string copy
 * @d: copy string here
*/

char *_strcopy(char *d, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		d[i] = '\0';

	return (d);
}

/**
 * new_dog - function that creates a new dog
 *
 * @n: nameof dog
 * @a: age of dog
 *
 * Return: pointer dog  NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if n and o are empty and a is less than zero return the null*/

	if (!name || age < 0 || !owner)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}

