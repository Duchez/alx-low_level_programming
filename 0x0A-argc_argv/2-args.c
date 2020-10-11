#include <stdio.h>
#include "holberton.h"

/**
 * main - Print all arguments received.
 * @argc: Number of arguments
 * @argv: Array pointer to string
 * Return: Returns Always (0), Success
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
