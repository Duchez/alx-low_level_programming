#include "holberton.h"

/**
*print_sign - prints the sign of an integer n
*
*@n: integer with sign
*
*Return: 1 if n is +, 0 if n is 0, and -1 if n is -
**/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}
}
