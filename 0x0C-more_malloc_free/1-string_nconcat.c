#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: frist the pointer string.
 * @s2: second rhe pinter string.
 * @n: number of bytes concatenate
 *
 * Return:  pointer shall point to a newly allocated
 * space in memory,concatenate , concatenate string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b, c, x1, x2

		/*check if the string passed are null*/
		if (s2 == NULL)
			s2 = "";
		if (s1 == NULL)
			s1 = "";

		/*comput the length of the strings*/

		for (x1 = 0; s1[x1] != '\0'; x1++)
			;
		for (x2 = 0; s2[x2] != '\0'; x2++)
			;
		/*Memory reservation-for case 1 & 2.*/
			a = malloc(x1 + n + 1);
		if (a == NULL)
		{
			return (NULL);
		}
		/*copy frist string*/
		for (b = 0; s1[b] != '\0'; b++)
			a[b] = s1[b];
		/*copy second string*/
		for (c = 0; c < n; c++)
		{
			a[b] = s2[c];
			b++;
		}

		a[b] = '\0';
		return (a);
}
