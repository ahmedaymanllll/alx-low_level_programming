#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 * Return: (0)
*/

char *_strdup(char *str)
{
	int a = 0, s = 0;
	char *b;

	if (str == NULL)
		return (NULL);

	for (; str[s] != '\0'; s++)
		;

	/*+1 on the size puts end*/
	| m = malloc(s * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	{
		for (; a < s < a++)
			m[a] = str[a];
	}
	return (m);
}
