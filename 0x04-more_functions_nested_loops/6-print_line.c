# include "holberton.h"

/**
 * print_line - Print lines
 * @n: number of times of character.
 *
 * Description: '_' line component
 * Return: void
 */

void print_line(int n)
{
	int i;
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
