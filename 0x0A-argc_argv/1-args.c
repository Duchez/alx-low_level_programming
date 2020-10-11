#include <stdio.h>
#include "holberton.h"

/**
*main - prints number of arguments passed in it
*@argc: argument count
*@argv: array pointer to arguments
*
*Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc)
		printf("%d\n", argc - 1);
	return (0);
}
