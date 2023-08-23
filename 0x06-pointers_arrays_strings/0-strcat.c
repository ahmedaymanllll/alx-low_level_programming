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

	while (dest[i] != '\0')
	{
		i++;
	}
	i2 = 0;
	while (src[i2] != '\0')
	{
		i++;
		i2++;
	}

		dest[i] = '\0';
	return (dest);
}
