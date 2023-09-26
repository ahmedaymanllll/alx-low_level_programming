#include <stdio.h>
/**
 * main - Entry point
 *
 * Decsription: Write a program that prints all
 *		possible combinations of two two-digit numbers.
 *
 * Return: Always (seccess)
*/

int main(void)
{
	int fristDigit = 0, secondDigit;

	while (fristDigit <= 99)
	{
		secondDigit = fristDigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != fristDigit)
			{
				putchar((fristDigit / 10) + 48);
				putchar((fristDigit % 10) + 48);
				putchar(' ');
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (fristDigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		fristDigit++;
	}
	putchar('\n');

	return (0);
}
