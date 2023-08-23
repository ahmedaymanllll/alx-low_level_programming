#include "main.h"

/**
 * _strcmp - Write a function that compares two strings.
 *
 * @s1: it's a frist input
 * @s2: it's a second input
 *
 * Return: s1 , s2
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
			//a++;
		}
		a++;
	}
	return (0);
}

