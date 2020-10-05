#include "holberton.h"
/**
*_memset - Fills memory with a constant byte
*@s: pointer
*@b: constant byte
*@n: size of bytes
*
*Return: Pointer
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
