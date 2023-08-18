#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character should be printed
*/

void print_diagonal(int n)
{
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (spaces = 1; spaces <= n; spaces++)
	{
		for (int i = 1; i < spaces; i++)
		_putchar(' ');

		_putchar('\\'); /*is equal to '/' char*/
		_putchar('\n');
	}
}
