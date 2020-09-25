# include "holberton.h"

/**
 * more_numbers - Print from 0 -14 ten times
 * @iter - iterator
 * @num - First iteration
 * @number_1 - Second Iteration
 * Return: Returns nothing since function is void
 */

void more_numbers(void)
{
	int iter;
	int nums;
	int num1;

	for (iter = 1; iter <= 10; iter++)
	{
		for (numb = 0; num <= 14; num++)
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
