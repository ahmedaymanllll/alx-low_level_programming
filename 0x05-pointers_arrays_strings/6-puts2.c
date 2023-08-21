#include "main"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: character of a string
*/

void puts2(char *str)
{
	int p;

	for (p = 0 ;str[p] != '\0'; ++p)
	{
		if (p % 2 == 0)
			_putchar(str[p]);
	}
	_putchar('\n');
}
