#include "holberton.h"

/**
* factorial - Returns a factorial of an integer
* @n: Integer
* Return: -1 for error and factorial of n for success.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
