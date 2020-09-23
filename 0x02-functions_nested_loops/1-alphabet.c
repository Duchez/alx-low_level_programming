#include "holberton.h"

/**
 * print_alphabet - function to print out  the alphabet in lowercase
 *
 * Return: 0 (program ran succesfully)
 *
**/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
