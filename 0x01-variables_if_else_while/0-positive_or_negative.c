#include <stdio.h>
/**
 * main - print random numbers with each execution
 *
 * Description: use the main function
 *
 * Return: Always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return(0)
}
