#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337.
 *
 * @g: integer
 * Return: g integer
*/

char *leet(char *g)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; g[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++;)
		{
			if (g[a] == s1[b])
			{
				g[a] = s2[b];
			}
		}
	}
	return (n);
}
