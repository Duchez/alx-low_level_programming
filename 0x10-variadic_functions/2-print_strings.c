#include "variadic_functions.h"

/**
*print_strings - prints strings
*@separator: string printed between strings
*@n: number of string arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int iter;
	va_list args;

	va_start(args, n);
	for (iter = 0; iter < n; iter++)
	{
		char *str = va_arg(args, char *);

		if (separator && i != n - 1)
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	va_end(args);
	_putchar('\n');
}
