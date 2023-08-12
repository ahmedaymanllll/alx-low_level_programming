#include<stdio.h>

/**
 * main - Entry point
 *
 * Descrpition: print 0. 1. - 9
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
