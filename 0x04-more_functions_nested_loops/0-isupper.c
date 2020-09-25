#include "holberton.h"

/**
 * _isupper - Check for uppercase character
 * @c: Value to be checked
 * Return: 1 if c is uppercase.
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
