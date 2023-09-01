#include <stdio.h>

/***
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: number
 * @argv: array
 *
 * Return: zero success, non zero fail
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
