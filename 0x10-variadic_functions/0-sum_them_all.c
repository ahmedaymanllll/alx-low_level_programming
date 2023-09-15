#include "variadic_functions.h"

/**
 * sum_them_all - sums varible
 *
 * @n: the number
 * @...: integer
 *
 * Return: int sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int l = 0, m = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (m--)
		l += va_arg(ap, int);
	va_end(ap);
	return (l);
}
