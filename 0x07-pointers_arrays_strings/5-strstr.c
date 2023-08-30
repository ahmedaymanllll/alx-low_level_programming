#include "main.h"

/**
 * _strstr - Locates a substring within a string
 *
 * @haystack: Pointer to the string to search
 * @needle: Pointer to the substring to find
 *
 * Return: Pointer to the beginning of located substring, or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{

		char *a = haystack;
		char *b = needle;

		while (*b != '\0' && *a == *b)
		{
			a++;
			b++;
		}

		if (*b == '\0')
		return (haystack);

		haystack++;
	}

	return ('\0');
}
