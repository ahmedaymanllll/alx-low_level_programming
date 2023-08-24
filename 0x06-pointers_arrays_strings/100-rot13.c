#include "main.h"
#include <stdio.h>

/**
 * rot13 -  encodes a string using rot13
 * @a: input
 * Return: *a
*/

char *rot13(char *a)
{
	int b, c;
	char f1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char f2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; a[b] != '\0'; a++)
	{
		for (c = 0; b < 52; c++)
		{
			if (a[b] == f1[c])
			{
				s[b] = f2[b];
				break;
			}
		}
	}
	return (a);
}
