#include "holberton.h"
/**
*string_toupper - change all lowercase to uppercase
*@str: string pointer
*
*Return: character string with all caps
*/

char *string_toupper(char *str)
{
	int iter;

	for (iter = 0; str[iter] != '\0'; iter++)
	{
		if (str[iter] >= 97 && str[iter] <= 122)
		{
			str[iter] -= 32;
		}
	}
	return (str);
}
