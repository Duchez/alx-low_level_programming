#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- all letters of the alphabet
*
* Return: 0 (program ran)
*/

int main(void)
{
	char letter;
	char s = '\n';

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar(s);

	return (0);
}
