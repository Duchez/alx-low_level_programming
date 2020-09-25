# include "holberton.h"

/**
 * print_square - prints square
 * @size: size of the square
 * Return: void.
 */

void print_square(int size)
{
	int len, wid;

	for (len = 1; len <= size; len++)
	{
		for (wid = 1; wid <= size; wid++)
		{
			_putchar('#');

		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
