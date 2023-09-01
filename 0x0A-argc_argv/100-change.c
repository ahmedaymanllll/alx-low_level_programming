#include <stdio.h>
#include <stdio.h>

/**
 * main - Write a program that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * @argc: arguments
 * @argv: arry
 *
 * Return: 0 sucess, non 0 fail.
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int num[] = {25, 10, 5, 2, 1}, a, e = 0, l = atoi(argv[1]);

		for (a = 0; a < 5; a++)
		{
			if (l >= num[a])
			{
				e += l / num[a];
				l = l % num[a];
				if (l % num[a] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", e);
	}
	else
	{
		printf("Error\n");
			return (1);
	}
	return (0);
}
