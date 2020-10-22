#include "function_pointers.h"

/**
*@print_name - prints a name
*@name: name
*@f: callback function
*/

void print_name(char *name, voide (*f)(char *))
{
	if (!if)
		return;
	(*f)(name);
}
