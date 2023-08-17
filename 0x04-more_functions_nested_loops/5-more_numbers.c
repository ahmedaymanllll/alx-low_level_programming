#include "main.h"

/**
 * more_numbers - print {0..14} in 10 times the numbers
 * followed by a new line.
 *
 * Return: 0 success
*/

void more_numbers(void)
{
	int (i, row, count);

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			i = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				i = count % 10;
			}
			_puthar(i + 48);
		}
		_putchar('\n');
	}
}
