#include "main.h"

/**
*more_numbers - should print 10 times value,
*from 0 to 14, followed by a new line.
*Return: nothing
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
