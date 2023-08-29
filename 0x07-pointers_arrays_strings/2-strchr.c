#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to search
 * @c: the character to search
 *
 * Return: string s
*/

char *_strchr(char *s, char c)
{
	int q = 0;

	for (q = 0; s[q] >= '\0'; q++)
	{
		if (s[q] == c)
		{
			return (s + q);
		}
	}
	return ('\0');
}
