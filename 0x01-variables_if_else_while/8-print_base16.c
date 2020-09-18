#include <stdio.h>
#include <stdlib.h>

/**
 *main - hex digits
 *
 *Return: 0 (program ran)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);

}
