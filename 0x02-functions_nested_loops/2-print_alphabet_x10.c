#include"main.h"

/**
 * print_alphabet_x10 - function to print the alphabet a - z in 10 lines.
*/

void print_alphabet_x10(void)
{
	int line, ch;
	{
	for (line = 0; line <= 9; line ++)
	{
	for (ch = 97; ch <= 122; ch++)

		_putchar(ch);
		_putchar('\n');
	}
}

