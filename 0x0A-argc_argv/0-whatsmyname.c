#include "holberton.h"
#include <stdio.h>

/**
*main - prints program name
*@argc: count of arguments in command line
*@argv: pointer to array of arguments
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[0]);
		i++;
	}
	return (0);
}
