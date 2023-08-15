#include "main.h"

/**
 * _abs - function the computes the absolute value of an integer
 *
 * @n: takes in integer type input for function
 *
 * Return: (0) success
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
