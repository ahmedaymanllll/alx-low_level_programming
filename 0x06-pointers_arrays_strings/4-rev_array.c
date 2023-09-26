#include "main.h"

/**
 * reverse_array - Write a function that reverses
 * the content of an array of integers
 *
 * @a: it is the frist integer
 * @n: it is the secound integer
*/

void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
