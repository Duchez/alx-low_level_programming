# include "holberton.h"

/**
 * more_numbers - Print from 0 -14 ten times
 * @iter - iterator
 * @num - First iteration
 * @num1 - Second Iteration
 * Return: void
 */

void more_numbers(void)
{
	int iter;
	int num;
	int num1;

	for (iter = 1; iter <= 10; iter++)
	{
		for (num = 0; num <= 14; num++)
		{
			num1 = num;
			if ((num1 / 10) > 0)
			{
				_putchar((num1 / 10) + '0');
			}
			_putchar((num1 % 10) + '0');
		}
		_putchar('\n');
	}


}
