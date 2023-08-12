#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Enrty point
 *
 * Description: print the value of n status:
 *		greater than, is zero and is not less than 6.
 * Return: always 0
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);

	else if (digit == 0)
		printf("Last digit of %i is %i and 0\n", n, digit);

	else if (digit < 6 && digit != 0)
		printf("Last digit of 980 is %i and is %i less than 6 and not 0\n", n, digit);

	return (0);
}
