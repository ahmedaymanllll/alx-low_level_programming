#include "variadic_functions.h"

/**
 * format_char - formats character
 * @separator: string separator
 * @ap: argument pointer
*/

void print_char(const char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_line - format integer
 * @separator: string separator
 * @ap: argument pointer
*/
void print_int(const char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - formats float
 * @separator: string separator
 * @ap: argument pointer
*/
void print_float(const char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - format string
 * @separator: string separator
 * @ap: argument pointer
*/
void print_string(const char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

		printf("%s%s", separator, str);
}

/**
 * print_all - Write a function that prints anything.
 * @format: the format string
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	print_function_t tokens[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].format)
		{
			if (format[i] == tokens[j].format)
			{
				tokens[j].printer(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
