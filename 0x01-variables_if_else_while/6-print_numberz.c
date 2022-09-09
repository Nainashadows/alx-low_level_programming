#include <stdio.h>
/**
 * main - print single digit numbers for base 10 starting from zero
 *
 * Description: use main function
 *
 * Return: always 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
