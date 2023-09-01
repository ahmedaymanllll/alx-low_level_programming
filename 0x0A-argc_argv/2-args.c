#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives
 *
 * @argc: integer
 * @argv: list
 * Return: zero
*/

int main(int argc, char const *argv[])
{
	int c = 0;

	while (argc--)
	{
		printf("%s\n", argv[c]);
		c++;
	}

	return (0);
}
