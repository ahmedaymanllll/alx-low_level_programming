#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Enrty point
 *
 * Description: print the value of n status:
 *		greater than, is zero and is not less than 6.
 *
 * Return: always 0
*/

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	return (0);
}
