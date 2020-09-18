#include <stdio.h>
#include <stdlib.h>

/**
 * main - numbers each on a new line
 * Return: 0 (program ran)
 */

int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
