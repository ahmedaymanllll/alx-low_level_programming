#include "main.h"


/**
 * _memset - Fills memory with a constant byte
 *
 * @s: Pointer to the memory area to be filled
 * @b: The byte to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: Pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	for (; n > 0; a++, n--)
	{
		s[a] = b;
	}
	return s;
}
