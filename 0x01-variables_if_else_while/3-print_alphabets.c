#include <stdio.h>

/**
 * main - starting block
 *
 * Return: void(0);
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);

	putchar('\n');

	return (0);
}
