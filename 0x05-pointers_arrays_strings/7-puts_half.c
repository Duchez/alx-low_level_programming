#include "holberton.h"
/**
*puts_half - prints half of a string
*@str: string
*
*Return: void
*/

void puts_half(char *str)
{
	int x;
	int y;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	y = 0;
	y = x / 2;
	if (x % 2 != 0)
	{
		y++;
	}
	while (str[y] != '\0')
	{
		_putchar(*(str + y));
		y++;
	}
	_putchar('\n');
}
