#include "holberton.h"
/**
*_puts_recursion - prints a string followed by a new line
*@s: string argument
*Return: void
*/

void _puts_recursion(char *s)
{
	int iter;

	iter = 0;
	while (s[iter])
	{
		_putchar (s[iter]);
		iter++;
	}
	_putchar('\n');
}
