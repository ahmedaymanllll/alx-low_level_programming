#include "main.h"

/**
 * print_diagsums - Write a function that prints the sum of
 * the two diagonals of a square matrix of integers
 *
 * @a: array int type
 * @size: array the square
*/

void print_diagsums(int *a, int size)
{
	int b = 0;
	int o1 = 0;
	int o2 = 0;

	for (b = 0; b < size; b++)
	{
		o1 += a[b];
		o2 += a[size - b - 1];
		a += size;
	}
	printf("%d, ", o1);
	printf("%d, ", o2);
}
