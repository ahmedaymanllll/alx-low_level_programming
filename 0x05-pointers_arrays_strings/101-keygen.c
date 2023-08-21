#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Create a program that generates random
 * valid passwords for the program 101-crackme.
 *
 * Return: 0
*/

int main(void)
{
	int i;
	int x;

	srand(time(NULL));
	while (i <= 2645)
	{
		x = rand() % 128;
		i += x;
		pitchar(x);
	}
	putchar(2772 - i);

	return (0);
}
