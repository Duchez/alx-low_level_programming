#include "holberton.h"
/**
* main - starting point print Holberton without using standard libraries
*
*Return: 0 (program succesful)
**/

int main(void)
{
	char *letters = "Holberton";

	for (int i = 0; i < 9; i++)
	{
		_putchar(letters[i]);
	}
	_putchar('\n');
	return (0);
}
