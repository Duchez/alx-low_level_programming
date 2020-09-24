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
	int large;

	if (a >= b && a >= c)
	{
		large = a;
	}
	if (b >= a && b >= c)
	{
		large = b;
	}
	else
	{
		large = c;
	}
	return (large);
}
