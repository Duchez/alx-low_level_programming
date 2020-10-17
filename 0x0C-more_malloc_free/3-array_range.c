#include <stdlib.h>
/**
*array_range - create an array of integers
*@min: minimum value
*@max: maximum value
*Return: integer
*/

int *array_range(int min, int max)
{
	int *x;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	x = malloc(sizeof(int) * len);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		x[i] = min;
		min++;
	}

	return (x);
}
