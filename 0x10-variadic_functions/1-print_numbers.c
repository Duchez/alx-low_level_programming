#include "variadic_functions.h"

/**
*print_numbers - prints numbers followed by a new line
*@separator: string between numbers
*@n: number of integers passed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int iter;
	int val;
	va_list args;

	va_start(args, n);
	for (iter = 0; iter < n; iter++)
	{
		val = va_arg(args, int);

		if (separator && iter != n - 1)
			printf("%d%s", val, separator);
		else
			printf("%d", val);
	}
	va_end(args);
	_putchar('\n');
}
