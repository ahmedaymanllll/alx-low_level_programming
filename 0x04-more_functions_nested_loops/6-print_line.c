#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: the number of times the character _ should be printed
 *
*/

void print_line(int n)
{
	int i;

	if (n <= 48)
		_putchar('\n');
	else
	{
		for (i = 49 ; i <= n ; i++)
			_putchar(95);
		_putchar('\n');
	}
}
