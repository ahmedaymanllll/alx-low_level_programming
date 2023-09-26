#include"main.h"

/**
 * main - Entry point
 *
 * Description: How to Write a program prints _putchar, followed by new line.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
