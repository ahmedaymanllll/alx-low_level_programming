#include "main.h"

/**
 * *string_toupper - Write a function that changes all
 * lowercase letters of a string to uppercase.
 *
 * @n: input
 * Return: n
*/

char *string_toupper(char *n)
{
	int a = 0;

	while (n[a] != '\0')
	{
		if (n[a] >= 97 && n[a] <= 122)
			n[a] = n[a] - 32;
		a++;
	}
	return (n);
}
