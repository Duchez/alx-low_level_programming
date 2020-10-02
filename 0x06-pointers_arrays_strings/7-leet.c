#include "holberton.h"
/**
*leet - encodes a string into 1337
*@str: string pointer
*
*Return: encoded character string
*/

char *leet(char *str)
{
	int i;
	int j;
	char small[] = "aeotl";
	char big[] = "AEOTL";
	char rep[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; small[j] != '\0' && big[j] != '\0'; j++)
		{
			if (str[i] == small[j] || str[i] == big[j])
			{
				str[i] = rep[j];
			}
		}
	}
	return (str);
}
