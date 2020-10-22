#include "3-calc.h"

/**
*get_op_func - chooses correct function to use
*@s: string
*Return: function pointer
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int iter;

	iter = 0;

	while (iter < 5)
	{
		if (!strcmp(ops[iter].op, s))
			return (ops[iter].f);
		iter++;
	}
	return (NULL);
}
