#include "main.h"

/**
 * print_array - Write a function that prints n elements
 * of an array of integers, followed by a new line.
 *
 * @a: the frist integer
 * @n: the second integer
*/

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n - 1; p++)
	{
		if (p != (n - 1))
			printf("%d, ", a[p]);
		else
			printf("%d", a[p]);
	}
	printf("\n");
}
