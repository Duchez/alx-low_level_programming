#include "holberton.h"
/**
*_strcpy - copies a string
*@dest: destination pointer
*@src: source pointer
*
*Return: character pointer
*/

char *_strcpy(char *dest, char *src)
{
	int iter;

	for (iter = 0; src[iter] != '\0'; iter++)
	{
		dest[iter] = src[iter];
	}
	return (dest);
}
