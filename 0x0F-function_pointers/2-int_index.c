#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 *
 * @array: int array
 * @size: size array
 * @cmp: function
 *
 * Return: index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (cmp  && array && size)
		while (size > a)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	return (-1);
}

