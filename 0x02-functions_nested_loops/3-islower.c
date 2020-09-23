#include "holberton.h"

/**
 * _islower - check for lowercase character
 *
 *@c: integer character
 * Return: 1 if lowercase and 0 if otherwise
**/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	return (0);
}
