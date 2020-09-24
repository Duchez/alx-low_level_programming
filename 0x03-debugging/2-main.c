#include "holberton.h"

/**
* largest_number - returns the largest numbers out of three
* @a: integer
* @b: integer
* @c: integer
* Return: largest number
**/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
