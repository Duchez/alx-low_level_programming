#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
*argstostr - concatenates all arguments in a program
*@ac: count
*@av: vector
*
*Return: string
*/

char *argstostr(int ac, char **av)
{
	char *c;
	int a, b;
	int ptn, len;

	ptn = 0;
	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
		len += _strlen(av[a]);

	c = malloc(sizeof(char) * (len + ac + 1));
	if (c == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			c[ptn++] = av[a][b];
		c[ptn++] = '\n';
	}

	c[ptn] = '\0';
	return (c);
}
