#include "holberton.h"
/**
*_puts - prints a string, followed by a new line
*@str: string to be printed
*Return: void
*/

void _puts(char *str)
{
	int iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		_putchar(str[iter]);
		iter++;
	}
	_putchar('\n');
}
