#include "main.h"

/**
*print_line - print a line
*@n: length of the line
*Return: no value
*/

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
