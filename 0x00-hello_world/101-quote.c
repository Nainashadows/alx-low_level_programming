#include <stdio.h>
#include <unistd.h>

/**
 * main - print a statement without using put or printf
 *
 * Description: use the main function
 * to write a program that will print using stderror
 * Return: 1
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
