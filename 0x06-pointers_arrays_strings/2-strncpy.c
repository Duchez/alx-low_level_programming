#include "holberton.h"

/**
* _strncpy - concatenates two string
* @dest: Destination pointer
* @src: Source pointer string
* @n: string size
* Return: Returns a concatenated string
*
*/


char *_strncpy(char *dest, char *src, int n)
{
	int iter;

	iter = 0;
	while (src[iter] != '\0' && iter < n)
	{
		dest[iter] = src[iter];
		iter++;
	}

	while (iter < n)
	{
		dest[iter] = '\0';
		iter++;
	}

	return (dest);
}
