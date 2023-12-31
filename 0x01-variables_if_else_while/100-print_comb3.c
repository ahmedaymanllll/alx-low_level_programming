#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: how to Write a program that prints all
 *			possible different combinations of two digits.
 *
 * Return: success
*/

int main(void)
{
	int digit1 = 0, digit2;

	while (digit1 <= 9)
	{
		digit2 = 0;

		while (digit2 <= 9)
		{
			if (digit2 != digit1 && digit2 > digit1)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);

				if (digit2 + digit1 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');

	return (0);
}
