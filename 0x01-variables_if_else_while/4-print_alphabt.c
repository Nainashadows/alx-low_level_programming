#include <stdio.h>
/**
 * main - print if the number is positive, zero or negative
 *
 * Description: using the main function this program will print
 * a set of values
 *
 * Return: Always 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
