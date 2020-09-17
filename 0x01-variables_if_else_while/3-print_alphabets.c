#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main- letters of the alphabet in lower and uppercase
*
* Return: 0 (program ran)
*/

int main(void)
{
	char letter;
	char s = '\n';

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar(s);

	return (0);
}

