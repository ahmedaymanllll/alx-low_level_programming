#include "main.h"

/**
 * _sqrt_recursion -  Write a function that returns
 * the natural square root of a number
 *
 * @n: integer
 * @val: square root
 * Return: integer
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: integer to find square root
 * @val:  square root
 * Return: integer
*/

int square(int n, int val)
{

	if (val * val < n)
		return (square(n, val + 1));
	else if (val * val == n)
		return (val);
	else
		return (-1);
}
