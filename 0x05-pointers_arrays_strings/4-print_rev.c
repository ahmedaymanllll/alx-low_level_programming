#include "main.h"

/**
 * print_rev - Write a function that prints a string,
 *		in reverse, followed by a new line.
 *
 *@s: prints a string
*/

void print_rev(char *s)
{
	int m = 0;
	while(s[m])
		m++;

	while (m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
