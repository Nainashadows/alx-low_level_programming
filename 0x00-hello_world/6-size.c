#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Description: using the main function
 * this program prints the size of various types
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(S)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
