#include "holberton.h"
/**
*print_rev - prints a string in reverse
*@s: string character
*Return: void
*/

void print_rev(char *s)
{
	int fwd;
	int rev;

	for (fwd = 0; s[fwd] != '\0'; fwd++)
	{
	
	}
	for (rev = fwd -1; rev >= s[fwd]; rev--)
	{
		_putchar(s[rev]);
		
	}
	_putchar('\n');
}
