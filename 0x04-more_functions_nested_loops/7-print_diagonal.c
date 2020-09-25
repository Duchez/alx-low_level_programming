#include "holberton.h"

/**
 * print_diagonal - Print diagonal line
 * @n: Number of lines.
 * Return: void
 */

void print_diagonal(int n)
{
	int line, empty;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (empty = 0; empty < line; empty++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}


}
