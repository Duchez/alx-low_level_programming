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
*str_concat - concatenates two strings
*@s1: string 1
*@s2: string 2
*
*Return: one string
*/
char *str_concat(char *s1, char *s2)
{
	char *str1, *str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str1 = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
	if (!str1)
		return (NULL);

	str2 = str1;
	while (*s1)
	{
		*str2 = *s1;
		str2++;
		s1++;
	}
	while (*s2)
	{
		*str2 = *s2;
		str2++;
		s2++;
	}

	*str2 = '\0';
	return (str1);
}
