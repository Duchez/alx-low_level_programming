#include "holberton.h"

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: pointer to a string.
 * @accept: character.
 * Return: Returns a pointer that matches one of the bytes.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		if (s[i] == accept[j])
		{
			return (s + i);
		}
	}
	return ('\0');
}
