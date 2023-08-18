#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: is the number of times the \ character should be printed
*/

void print_diagonal(int n)
{
	int spaces, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (spaces = 1; spaces <= n; spaces++)
		{

			for (i = 1; i <= spaces; i++)
			{
				_putchar(' ');
			}
			_putchar('\\'); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
