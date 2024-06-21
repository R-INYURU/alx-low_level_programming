#include <stdio.h>

/**
 * main - starting block
 *
 * Return: void(0);
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
