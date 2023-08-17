#include "main.h"

/**
 * print_most_numbers - print {0..9} and Do not print (2 and 4).
 * use _putchar twice in your code
 * Return: 0 success
*/

void print_most_numbers(void)
{
	int i;

	for (i >= 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i = 48);
	}
	_putchar('\n');
}
