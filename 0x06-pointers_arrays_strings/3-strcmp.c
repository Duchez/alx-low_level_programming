#include "holberton.h"

/**
* _strcmp - Entry Point - Compares two strings
* @s1: First String
* @s2: Second String
* Return: Returns the difference between the two strings
*/

int _strcmp(char *s1, char *s2)
{
	int first;
	int second;

	second = 0;
	first = 0;
	while ((s1[first] != '\0' || s2[first] != '\0') && second == 0)
	{
		if (s1[first] != s2[first])
		{
			second = s1[first] - s2[first];
		}
		first++;

	}
	return (second);
}
