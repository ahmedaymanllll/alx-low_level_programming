#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes from memory area
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
