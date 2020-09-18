#include <stdlib.h>
#include <stdio.h>

/**
*main - reverse alphabet
*
* Return: 0 (program ran)
*/

int main(void)
{
	char letters, s = '\n';

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar(s);

	return (0);
}
