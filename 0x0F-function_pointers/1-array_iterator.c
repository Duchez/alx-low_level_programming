#include "function_pointers.h"

/**
*array_iterator - executes a function as parameter
*@array: array
*@size: number of loop elements
*@action: action to be executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		while (size--)
			action(*(array++));
}
