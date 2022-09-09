#include <stdio.h>
/**
 * main - prints numbers from 0-9 with commas and spaces between them
 *
 * Description: use the main function to print a set of numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
