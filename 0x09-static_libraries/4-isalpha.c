#include "main.h"

/**
 * _isalpha - function to check if character is lowercase
 *
 * @c: check function
 *
 * Return: Returns 1 if c is lowercase
 *	Returns 0 otherwise (success)
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
