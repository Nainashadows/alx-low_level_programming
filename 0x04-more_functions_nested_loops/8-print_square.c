#include "main.h"

/**
*print_square - print squares of an inputted size
*@size: dimensions of the square
*Return: nothing
*/

void print_square(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
