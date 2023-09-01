#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 *
 * @argc: number
 * @argv: pointer arry
 *
 * Return: zero success, no zero-not  success
*/

int main(int argc, char *argv[])
{
	int num;

	if (argc == 3)
	{
		num =  atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", num);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
