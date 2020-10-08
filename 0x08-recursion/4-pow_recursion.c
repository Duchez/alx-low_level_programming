#include "holberton.h"

/**
* _pow_recursion - Entry Point. Returns the power of an integer to another
* @x: Base integer
* @y: Exponent Integer
* Return: Returns x to power y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
