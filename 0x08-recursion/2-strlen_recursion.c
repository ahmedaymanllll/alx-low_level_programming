#include "main.h"

/**
 * _strlen_recursion - Write a function that returns
 *		the length of a string
 *
 * @s: string
 *
 * Return: value p
*/

int _strlen_recursion(char *s)
{
	int p = 0;

	if (*s > '\0')
	{
		p += _strlen_recursion(s + 1) + 1;
	}
	return (p);
}
