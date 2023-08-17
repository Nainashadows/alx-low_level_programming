#include "main.h"

/**
*_isupper - checks if input value is upper case
*@c: the character to be checked
*Return: 1 if c is capital, otherwise 0(Success)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
