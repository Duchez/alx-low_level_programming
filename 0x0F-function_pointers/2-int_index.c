#include "function_pointers.h"

/**
*int_index - search for an int
*@array: input array
*@size: size of array
*@cmp: comparison function
*Return: integer index found in cmp
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int iter;

	if (size > 0 && cmp && size && array)
		for (iter = 0; iter <= size; iter++)
			if (cmp(array[iter]))
				return (iter);
	return (-1);
}
