#include "holberton.h"
/**
*_strcat - concatenates two strings
*@src: pointer to string
*@dest: pointer to another string
*
*Return: returns a concatenated character string
*/

char *_strcat(char *dest, char *src)
{
	int first;
	int second;

	for (first = 0; dest[first] != '\0'; first++)
	{
	}
	for (second = 0; src[second] != '\0'; second++, first++)
	{
		dest[first] = src[second];
	}

	dest[first] = '\0';
	return (dest);
}
