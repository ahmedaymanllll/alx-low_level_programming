#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings.
 *
 * @dest: pointer to the resulting string dest
 * @src: pointer to the resulting string dest
 *
 * Return: always dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int i2;

	i = 0;

	while (dest[i])
	{
		i++;
	}
	{
	for (i2 = 0; src[i2]; i2++)

		dest[i++] = src[i2++];
	}
	return (dest);
}
