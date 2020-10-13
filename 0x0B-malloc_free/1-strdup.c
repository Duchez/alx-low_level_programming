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
*_strdup - returns a pointer to allocated memory
*@str: string
*
*Return: pointer to copied string
*/

char *_strdup(char *str)
{
	char *dup, *copy;

	if (!str)
		return (NULL);
	dup = malloc((_strlen(str) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	copy = dup;

	while (*str)
	{
		*copy = *str;
		str++;
		copy++;
	}

	*copy = '\0';
	return (dup);
}
