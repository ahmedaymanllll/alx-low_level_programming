#include <stdio.h>
#include <stdib.h>
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
	char x;

	srand(time(NULL));
	while (sum <= 2645)
	{
		x = rand() % 128;
		i += x;
		pitchar(x);
	}
	pitchar(2772 - i);
	return (0);
}
