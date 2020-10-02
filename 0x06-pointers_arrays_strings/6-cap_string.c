#include "holberton.h"

/**
 * cap_string - Entry point. Word Capitalization Function
 * @sentence: Pointer to a string whose words are to be capitalized
 * Return: Returns capitalized string
 */

char *cap_string(char *sentence)
{
	int len;

	len = 0;
	for (; sentence[len] != '\0'; len++)
	{
		if (len == 0 && sentence[len] >= 97 && sentence[len] <= 122)
		{
			sentence[len] -= 32;
		}
		if (sentence[len] >= 97 && sentence[len] <= 122
			&& (sentence[len - 1] == 32 || sentence[len - 1] == ','
			|| sentence[len - 1] == ';' || sentence[len - 1] == '.'
			|| sentence[len - 1] == '!' || sentence[len - 1] == '?'
			|| sentence[len - 1] == '"' || sentence[len - 1] == '('
			|| sentence[len - 1] == ')' || sentence[len - 1] == '{'
			|| sentence[len - 1] == '}' || sentence[len - 1] == '\n'
			|| sentence[len - 1] == '\t'))
		{
			sentence[len] -= 32;
		}
	}
	return (sentence);
}
