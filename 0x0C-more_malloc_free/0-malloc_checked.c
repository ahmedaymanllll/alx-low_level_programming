#include "main.h"

/**
 * *malloc_checked - Write a function that allocates memory using malloc
 * and exit if faild.
 * @b: integer
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
		exit(98);
	return (a);
}
