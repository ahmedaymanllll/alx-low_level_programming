#include "main.h"

/**
 * *cap_string - Write a function that capitalizes all words of a string.
 *
 * @i: input
 * Return: i
*/

char *cap_string(char *i)
{
	int c = 0;

	while (i[c])
	{
		while (!(i[c] >= 97 && i[c] <= 122))

			c++;
		if (i[c - 1] == ' ' ||
		i[c - 1] == '\t' ||
		i[c - 1] == '\n' ||
		i[c - 1] == ',' ||
		i[c - 1] == ';' ||
		i[c - 1] == '.' ||
		i[c - 1] == '!' ||
		i[c - 1] == '?' ||
		i[c - 1] == '"' ||
		i[c - 1] == '(' ||
		i[c - 1] == ')' ||
		i[c - 1] == '{' ||
		i[c - 1] == '}' ||
		c == 0)
			i[c] -= 32;
		c++;
	}
	return (i);
}
