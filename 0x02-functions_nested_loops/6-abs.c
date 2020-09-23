#include "holberton.h"
/**
*_abs - computes the absolute value of an integer
*
*@n: integer with sign
*
*Return: 0 (Program ran succesfully)
**/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
