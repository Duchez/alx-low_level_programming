#include "holberton.h"

/**
 * rot13 - Entry Point - Translates characters to ROT13 Format
 * @string: Pointer to string to be formatted
 * Return: Returns an encoded string
 */

char *rot13(char *string)
{
	int i;
	int j;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (string[i] == input[j])
		{
			string[i] = output[j];
			break;
		}
		}
	}
	return (string);
}
