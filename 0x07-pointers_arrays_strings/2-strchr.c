#include "main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: the string
 * @c: the character
 *
 * Retutn: character c in the string s, or NULL
*/

char *_strchr(char *s, char c)
{
	int q = 0;

	for (s[q] >= '\0'; q++)
	{
		if (s[q] == c)
		{
			return (s + q);
		}
	}
	return ('\0');
}
