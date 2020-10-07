#include "holberton.h"
/**
*_puts_recursion - prints a string followed by a new line
*@s: string argument
*Return: void
*/

void _puts_recursion(char *s)
{
	int iter;

	for (iter = 0; s[iter]; iter++)
	{
		_putchar (s[iter]);
	}
	_putchar('\n');
}
