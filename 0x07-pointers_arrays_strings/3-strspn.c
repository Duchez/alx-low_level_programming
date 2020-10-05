#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: pointer to a substring.
 * @accept: Character to be accepted.
 * Return: Number of bytes in segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (len);
}
