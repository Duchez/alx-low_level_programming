#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - prints the sum of its arguments
*@n: number of arguments
*Return: integer sum
*/

int sum_them_all(const unsigned int n, ...)
{
	register unsigned int iter;
	int sum;
	va_list args;

	va_start(args, n);
	for (iter = 0; iter < n; iter++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
