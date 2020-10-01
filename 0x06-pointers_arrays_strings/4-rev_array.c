#include "holberton.h"
/**
*reverse_array - reverses an array
*@a: pointer to array
*@n: array size
*Return: void
*/

void reverse_array(int *a, int n)
{
	int fwd;
	int temp;

	for (fwd = 0; fwd < n / 2; fwd++)
	{
		temp = a[fwd];
		a[fwd] = a[n - fwd - 1];
		a[n - fwd - 1] = temp;
	}
}
