#include "holberton.h"
/**
*puts2 - prints every characater of a string
*@str: pointer to the string
*
*Return: void
*/

void puts2(char *str)
{
	int iter;

	for (iter = 0; str[iter] != '\0'; iter++)
	{
		if (iter % 2 == 0)
		{
			_putchar(str[iter]);
		}
	}
	_putchar('\n');
}
