#include "holberton.h"

/**
* set_string - Sets the value of a pointer to a char.
* @s: Pointer a pointer
* @to: Destination
*Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
