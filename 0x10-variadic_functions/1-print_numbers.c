#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints numbers, followed by a new line
 *
 * @separator:  string to be printed between numbers
 * @n: number of integers
 * @...: integer tonprint
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int m = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (m--)
		printf("%d%s", va_arg(ap, int),
				m ? (separator ? separator : "") : "\n");
	va_end(ap);
}
