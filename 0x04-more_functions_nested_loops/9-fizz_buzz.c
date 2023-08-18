#include "main.h"

/**
 * main- ptint number {1..100} followed a new line
 * number that are multiplesof 3 print fizz
 * number that are multiplesof 5 print buzz
 * number that are multiplesof 3 and 5 print fizzbuzz
 * each number word to be separated by space
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			print("Fizz");
		else if (num % 5 == 0 && !(num % 5 == 0))
			print("Bizz");
		else if (num % 3 == 0 && num % 5 == 0)
			print("FizzBuzz");
		else
			print("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
