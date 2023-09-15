#include "variadic_functions.h"

/**
 * format_char - formats character
 * @sepetcator: string sepector
 * @ap: argument pointer
*/

void format_char(char *sepetcator, va_list ap)
{
	printf("%s%c", sepetcator, va_arg(ap, int));
}

/**
 * format_line - format integer
 * @sepetcator: string sepector
 * @ap: argument pointer
*/
void format_int(char *sepetcator, va_list ap)
{
	printf("%s%d", sepetcator, va_arg(ap, int));
}

/**
 * format_float - formats float
 * @sepetcator: string sepector
 * @ap: argument pointer
*/
void format_float(char *sepetcator, va_list ap)
{
	printf("%s%f", sepetcator, va_arg(ap, double));
}

/**
 * format_string - format string
 * @sepetcator: string sepector
 * @ap: argument pointer
*/
void format_string(char *sepetcator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

		printf("%s%s", sepetcator, str);
}

/**
 * print_all - Write a function that prints anything.
 * @format: the format string
*/

void print_all(const char * const format, ...)
{
	| int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	| while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
