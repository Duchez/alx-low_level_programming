#include "holberton.h"

/**
 * print_numbers - print numbers from 0 to 9.
 * Return: void.
 */

void print_numbers(void)
{
	int i;

	char new_line;

	new_line = '\n';

	i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar(new_line);

}
