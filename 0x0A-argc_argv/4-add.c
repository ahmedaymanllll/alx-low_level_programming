#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that adds positive numbers
 * @argc: number
 * @argv: arry
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int a = 0;
	char *b;

	while (--argc)
	{
		for (b = argv[argc]; *b; b++)
			if (*b < '0' || *b > '9')
				return (printf("Error\n"), 1);
		a += atoi(argv[argc]);
	}
	printf("%d\n", a);
	return (0);
}
