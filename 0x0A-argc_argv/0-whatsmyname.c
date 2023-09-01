#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: integer
 * @argv: integer
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
