#include "main.h"

/**
 * puts_half - Write a function that prints
 * half of a string, followed by a new line.
 *
 * @str: string
*/

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)

	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n')
}
