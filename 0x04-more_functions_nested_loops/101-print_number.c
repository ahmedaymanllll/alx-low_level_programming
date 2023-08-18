#include "main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: the integer to be printed.
*/

void print_number(int n)
{
	unsigned int num = n;
	/*frist check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	/*print the frist few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digit*/
	_putchar((num % 10) + 48);
}
