#include "main.h"

/**
 * *leet - Write a function that encodes a string into 1337.
 *
 * @g: integer
 * Return: g integer
*/

char *leet(char *g)
{
	int a, b;
	char m1[] = "aAeEoOtTlL";
	char m2[] = "4433007711";

	for (a = 0; g[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++;)
		{
			if (g[a] == m1[b])
			{
				g[a] = m2[b];
			}
		}
	}
	return (n);
}
