#include <stdio.h>
/**
 * main - print the alphabets in lower case
 *
 * Description: use the main function
 *
 * Return: Always 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
