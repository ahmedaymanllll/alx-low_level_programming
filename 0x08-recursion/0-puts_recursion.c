#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string,
 *		followed by a new line
 *
 * @s: function
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
