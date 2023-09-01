#include "main.h"

/**
 * factorial - Write a function that returns the factorial of a given number
 * @n: integer input
 * Retrun: Factorial of 0 is 1
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
