#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main- all letters of the alphabet except q and e
 *
 * Return: 0 (program ran)
 */

int main(void)
{
	int letters;
	char s = '\n';

	for (letters = 'a' ; letters <= 'z' ; letters++)
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
	}
	putchar(s);
	return (0);
}

