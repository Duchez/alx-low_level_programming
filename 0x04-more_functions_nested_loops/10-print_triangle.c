#include "holberton.h"

/**
 * print_triangle - Prints a Triangle
 * @size: Size of triangle
 * Return: void
 **/

void print_triangle(int size)
{
	int side1, side2, blank, result;

	for (side1 = 1; side1 <= size; side1++)
	{
		blank = size - side1;
		result = size - blank;

		for (side2 = 1; side2 <= blank; side2++)
		{
			_putchar(' ');
		}
		for (side2 = 1; side2 <= result; side2++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
	if (size <= 0)
		_putchar('\n');
}
