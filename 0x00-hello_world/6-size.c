#include <stdio.h>

/**
 * main - print the size of data types
 *
 * Description: using the main function
 * this program will print the the size of data types
 * Return: Always 0(Success)
 */

int main(void)
{
	char a;
	int b;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli);
	printf("Size of a float: %lu byte(s)\n", sizeof(f);

	return (0);
}
