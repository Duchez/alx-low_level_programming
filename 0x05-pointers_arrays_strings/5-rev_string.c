#include "holberton.h"
/**
*rev_string - reverses a string
*@s: string
*
*Return: void
*/
void rev_string(char *s)
{
	int f;
	int b;
	int c;

	for (f = 0; s[f] != '\0'; f++)
	{
	}
	f--;

	for (b = 0; b < f; b++, f--)
	{
		c = s[f];
		s[f] = s[b];
		s[b] = c;
	}
}
