#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>



/**
 * main - check the code
 * @c: number of args
 * @v: argument vector
 *
 * Return: Always 0
*/

int main(int c, char **v)
{
	char *a = (char *)main;
	int b;

	if (c != 2)
		printf("Error\n"), exit(1);
	b = atoi(v[1]);
	if (b < 0)
		printf("Error\n"), exit(2);

	while (b--)
		printf("%02hhx%s", *a++, b ? " " : "\n");
	return (0);
}