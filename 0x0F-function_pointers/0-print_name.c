#include "function_pointers.h"

/**
 * print_name - print_name
 * @name: the string
 * @f: print function pointer
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
