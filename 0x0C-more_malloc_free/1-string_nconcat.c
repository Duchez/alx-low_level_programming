#include "holberton.h"
#include <stdlib.h>
/**
*_strlen - return the length of a string
*@s: character string
*Return: the length of a string
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
*string_nconcat(char *s1, char *s2, unsigned int n)
*@s1: string 1
*@s2: string 2
*@n: size
*Return: two strings
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, lenf, lens;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenf = _strlen(s1);
	lens = _strlen(s2);

	if (n >= lens)
		n = lens;

	c = malloc(sizeof(char) * (lenf + n + 1));
	if (c == NULL)
		return (NULL);

	for (i = 0; i < lenf; i++)
		c[i] = s1[i];
	for (; i < lenf + n; i++)
		c[i] = s2[i - lenf];
	c[lenf + n] = '\0';

	return (c);
}
