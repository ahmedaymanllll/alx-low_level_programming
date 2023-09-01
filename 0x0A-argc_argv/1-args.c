#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number
 * @argv: pointer array
 * Return: 0 success, non-zero-fail.
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
