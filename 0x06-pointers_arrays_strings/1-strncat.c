#include "holberton.h"

/**
* _strncat - Entry Point. Concatenates two strings with conditions
* @dest: String Pointer destination
* @src: string to concatenated
* @n: Possible number of characters to concatenate
* Return: Concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int first;
	int second;

	first = 0;
	while (dest[first] != '\0')
	{
		first++;
	}

	second = 0;
	while (src[second] != 0 && second < n)
	{
		dest[first] = src[second];
		second++;
		first++;
	}

	dest[first] = '\0';

	return (dest);
}
