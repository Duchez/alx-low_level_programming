#include "holberton.h"
#include <stdio.h>
/**
*print_array - prints the n elements of an array
*@a: pointer to array
*@n: number of array elements
*Return: void
*/

void print_array(int *a, int n)
{
	int iter;

	for (iter = 0; iter < n; iter++)
	{
		if (iter == 0)
		{
			printf("%d", a[iter]);
		}
		else
		{
			printf(", %d", a[iter]);
		}
	}
	putchar('\n');
}
